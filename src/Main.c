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
	    float dt, N,nu, T;
	    sscanf(argv[2], "%f", &dt);
	    sscanf(argv[3], "%f", &T);
	    sscanf(argv[4], "%f", &N);
	    sscanf(argv[5], "%f", &nu);
	   // sscanf(argv[6], "%f", &);
	   // sscanf(argv[7], "%f", &);
	   // sscanf(argv[8], "%f", &);
	    //sscanf(argv[9], "%f", &);
   	 burger(dt,T, N,nu);
  	}  	

  return 0;

}
