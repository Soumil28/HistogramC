/**** Main Program for Histogram ****/

#include <stdio.h>
#include "prog6_functions.h"

int main() {

   char command; // choice
   int myHist[26] = {0};
   int maxFreq = 0;

   do {
      printf("Enter command (C, R, P, or Q): ");
      scanf(" %c", &command);
      
      switch(command) {
         case 'C': case 'c':
            ClearHist(myHist, 26, &maxFreq);
            break;
            
         case 'R': case 'r':
            ReadText(myHist, &maxFreq);
            break;
            
         case 'P': case 'p':
            DrawHist(myHist, maxFreq);
            break;
            
         case 'Q': case 'q':
            break;
            
         default:
            printf("Invalid command %c\n\n", command);
      }
      
   }while(command != 'Q' && command != 'q');
   
   //printf("S\n");

   return 0;
}
