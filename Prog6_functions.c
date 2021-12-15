/**** Defines the functions ****/

#include <stdio.h>
#include "prog6_functions.h"
#include <ctype.h>
#include <string.h>

/* Reads single line of text and updates histogram
 as well as frequency of most frequent letter */
void ReadText(int histo[], int* max) {

   char oneChar; // holds one character at a time, from line of text
   //char inputStr[50];
   int i;
   
   printf("\nENTER A LINE OF TEXT:\n\n");
   
   //scanf("%s", inputStr);
   
   // this loop reads the input & updates the histogram
   scanf("%c", &oneChar); // takes care of newline char after R and before the sentence
   do {
      scanf("%c", &oneChar); // scanf reads one character at a time.
      if(isalpha(oneChar)) {
         oneChar = tolower(oneChar);
         histo[oneChar - 97]++;
      }
   }while(oneChar != '\n');
   
   /*fgets(inputStr, 50, stdin);*/
   
   /*for(i = 0 ; i < strlen(inputStr) ; i++) {
      oneChar = inputStr[i];
      if(isalpha(oneChar)) {
         oneChar = tolower(oneChar);
         histo[oneChar - 97]++;
      }
   }*/
   
   // now we find max value in histo[] array
   *max = histo[0];
   for(i = 1 ; i < 26 ; i++) {
      if(histo[i] > *max) {
         *max = histo[i];
      }
   }
}

/* Prints histogram, using array holding values
 as well as frequency of most frequent letter,
 which determines height of histogram */
void DrawHist(int histo[], int max) {
	
	int i, j; // iteration variables
	char displayChar; // displays A to Z at the bottom of histogram
	
	printf("\nLETTER FREQUENCIES IN TEXT:\n\n");
	for(i = max ; i >= 1 ; i--) {
	   for(j = 0 ; j < 26 ; j++) {
         if(histo[j] >= i) {
            printf("| ");
         }
         else {
            printf("  ");
         }
	   }
	   printf("\n");
	}
	for(i = 0 ; i < 26 ; i++) {
	   printf("+-");
	}
	printf("\n");
	for(displayChar = 'A' ; displayChar <= 'Z' ; displayChar++) {
	   printf("%c ", displayChar);
	}
	printf("\n\n");
}

/* Takes an array and its length, and clears it. It resets all elements to 0.
Used to clear the histogram. */
void ClearHist(int histo[], int length, int* max) {
   int i;
   for(i = 0 ; i < length ; i++) {
      histo[i] = 0;
   }
   *max = 0;
   printf("\n");
}