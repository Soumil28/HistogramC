/**** Defines the header file for functions ****/

#ifndef prog6_functions_h
#define prog6_functions_h

void ReadText(int histo[], int* max);	   /* Reads single line of text and updates histogram
						as well as frequency of most frequent letter */

void DrawHist(int histo[], int max);	   /* Prints histogram, using array holding values
						as well as frequency of most frequent letter,
						which determines height of histogram */

void ClearHist(int histo[], int length, int* max);  /* Takes an array and its length, and clears it.
                                          		It resets all elements to 0 and frequency of most frequent letter to zero.
                                          		Used to clear the histogram. */

#endif /* prog6_functions_h */