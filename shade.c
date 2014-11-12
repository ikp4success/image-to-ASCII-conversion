#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shade.h"

int asciiConv(int width, int height){

	FILE* stream = fopen("for_dark_bg.txt", "r");
	if (!stream || stream ==NULL) {   /* Check for error like file not found error */
      perror ("open failed");
      return 1;
    }

    int x=0;
    int eachC;
    int y=0;
  

   
    while ((eachC = fgetc(stream)) != EOF)//prints each character from text file
    {
       

		//converts xracter below

         if(eachC=='0'){

          printf("%s", " ");
         }

        else if(eachC=='1'){

          printf("%s", ".");
         }

         else if(eachC=='2'){

          printf("%s", ":");
         }else if(eachC=='3'){

          printf("%s", "c");
        }else if(eachC=='4'){

         printf("%s", "o");
         }else if(eachC=='5'){

        printf("%s", "c");
        }else if(eachC=='6'){

          printf("%s", "O");
         } else if(eachC=='7'){

           printf("%s", "8");
         }  else if(eachC=='8'){

           printf("%s", "@");
         }else{

         }

         x++;// count the number of characters per line by counting loop

        	

		if(x>width){
			y++;//counts the number of X occurence equals width to get number of lines
			
      		printf("\n");//if X greater than width print new line
      		

      		
      		x=0;//reset x

      		

 

         }

         if(y>height){
          

      		break;// if lines greater than height stop while loop

      		}



    }


	
}
