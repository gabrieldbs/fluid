#include <stdio.h>
#include <math.h>
#include "stdlib.h"
#include "func.h"


int main(int argc, char **argv) {
  int Programa;
  if(argc>1){
    sscanf(argv[1], "%x", &Programa);
	printf("%d \n",Programa);
  }else{
    Programa =0;
  }
	if(Programa == 26){
    	 printf("Ejecutando simulacion ejercicio 1.a)\n");
	    float xmin, xmax,ymin,ymax, paso,r,d,b;
	    sscanf(argv[2], "%f", &xmin);
	    sscanf(argv[3], "%f", &xmax);
	    sscanf(argv[4], "%f", &ymin);
	    sscanf(argv[5], "%f", &ymax);
	    sscanf(argv[6], "%f", &paso);
	    sscanf(argv[7], "%f", &r);
	    sscanf(argv[8], "%f", &d);
	    sscanf(argv[9], "%f", &b);
   	 circ(xmin, xmax,ymin,ymax, paso,r,d,b);
  	}
	if(Programa == 27){
    	 printf("Ejecutando simulacion ejercicio 1.b)\n");
	    float xmin, xmax,ymin,ymax, paso,r,d,b,xc,yc;
	    sscanf(argv[2], "%f", &xmin);
	    sscanf(argv[3], "%f", &xmax);
	    sscanf(argv[4], "%f", &ymin);
	    sscanf(argv[5], "%f", &ymax);
	    sscanf(argv[6], "%f", &paso);
	    sscanf(argv[7], "%f", &r);
	    sscanf(argv[8], "%f", &d);
	    sscanf(argv[9], "%f", &b);
	    sscanf(argv[10], "%f", &xc);
	  	 sscanf(argv[11], "%f", &yc);
   	// circ_NC(xmin, xmax,ymin,ymax, paso,r,d,b,xc,yc);
  	}
	if(Programa == 28){
    	 printf("Ejecutando simulacion ejercicio 1.c)\n");
	    float xmin, xmax,ymin,ymax, paso,r,d,xc,yc;
	    sscanf(argv[2], "%f", &xmin);
	    sscanf(argv[3], "%f", &xmax);
	    sscanf(argv[4], "%f", &ymin);
	    sscanf(argv[5], "%f", &ymax);
	    sscanf(argv[6], "%f", &paso);
	    sscanf(argv[7], "%f", &r);
	    sscanf(argv[8], "%f", &d);
	    sscanf(argv[9], "%f", &xc);
	  	 sscanf(argv[10], "%f", &yc);
   	 circ_NC_2(xmin, xmax,ymin,ymax, paso,r,d,xc,yc);
  	}


  	}

  return 0;


}
