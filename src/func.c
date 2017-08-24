
#include "func.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int burger(float dt ,float T,float N,float nu){
 FILE *pt;
 pt=fopen("burger.dat","w");
 float dx,pi,umax;
 pi =3.141569;
 dx= 2*pi/N;
 umax=1;
 printf("%f", dt/dx);
 float* u= malloc (N*sizeof(float));
 float* dux= malloc (N*sizeof(float));
 float* duxx= malloc (N*sizeof(float));
 float t=0, x=0;
 if(t<T){
  for(int i=0;i<N;i++){  // aca   conseguimos u =sin (X)
   float r;
   r= x+i*dx;
 	u[i]=sin(r);
 printf("%f\t%f\n",u[i],r);}
 //  dux[0]=(u[1]-u[0])/(2*dx);  // du/dx en los bordes por separado considerando condiciones de contorno periodica
  //dux[N-1]=(u[0]-u[N-2])/(2*dx);
  for (int j=1;j<N-1;j++){
  dux[j]=(u[j+1]-u[j-1])/(2*dx);} // du/dx  

  //duxx[1]=(u[1]-u[N])/(2*dx);    //d(du/dx)/dx en los bordes
  //duxx[N]=(u[0]-u[N-1])/(2*dx);
  for (int k=1;k<N;k++){
  duxx[k]=(u[k+1]-2*u[k]+u[k-1])/(2*dx);}  // d(du/dx)/dx  
 t=t+dt;}

 free(duxx);
 free(u);
 free(dux);
 fclose(pt);
 return(0);
}


