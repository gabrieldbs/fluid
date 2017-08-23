
#include "func.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int circ(float xmin ,float xmax,float ymin ,float ymax,float paso,float r,float d, float b){
 FILE *pt;
 pt=fopen("circulo.dat","w");
 FILE *pttt;
 pttt=fopen("tranformado2.dat","w");
 int imax;
 float x=xmin,y=ymin,xt=0,yt=0;
 imax =(xmax-xmin)/paso;
 float w,q,l; // elipse 
 w=r+(b*b)/r; 
 q=r-(b*b)/r;
 
  for(int i=0;i<imax;i++){ 
    x=xmin+i*paso;
    for(int j=0;j<imax;j++){
	   y=ymin + j*paso;
		l=((x*x)+(y*y));
		w=(1+(b*b)/(l));
		q=(1-(b*b)/(l));
	   xt=x*w;
	   yt=y*q;
		if(x*x+y*y>r*r & x*x+y*y-r*r<d){
		  fprintf(pt,"%f\t%f\n",x,y);
			fprintf(pttt,"%f\t%f\n",xt,yt);}
			//printf("%f %f \n",x,y);}
		if(x*x+y*y<r*r & r*r-x*x-y*y<d){
		  fprintf(pt,"%f\t%f\n",x,y);
			fprintf(pttt,"%f\t%f\n",xt,yt);}
			//printf("%f %f \n",x,y);} 
	      if( b==r &  ((xt*xt)/(w*w))<1+d*2){
		  fprintf(pttt,"%f\t 0\n",xt);}
	   }
		
	 }

fclose(pt); 
fclose(pttt); 
 return(0);
}



