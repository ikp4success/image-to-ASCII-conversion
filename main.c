#include <stdio.h>
#include "shade.h"


/**
Name:Immanuel I George
CSUID: 2548936
CLASS: CIS 340
GROUP: L

*/


int main(){




 	int w;//width
	int h;//height

	printf("Enter a width and height respectively\n");
	scanf("%d %d:",&w,&h);//retrieve input values
	asciiConv(w,h);//send width and heights to shade.c for processing

 return 0;
 
}
