/*
Modify Programming Project 13 from Chapter 7 so that it includes the following function:

double compute_average_word_length(const char *sentence);

The function returns the average length of the words in the string pointed to by sentence.
*/

/*
Write a program that calculates the average word length for a sentence:

Enter a sentence: It was deja vu all over again.
Average word length: 3.4
For simplicity, your program should consider a punctuation mark to be part of the word to which it is attached. 
Display the average word length to one decimal place.
*/

#include <stdio.h>

double compute_average_word_length(const char *sentence);

int main(void) {

    char c[100+1];

    printf("Enter a sentence: ");

	char *p = c;
	while( ( *p++ = getchar()) != '\n' && p < c + 101)
	;
	*p = '\0';
    printf("Average word length: %.1lf\n", compute_average_word_length(c));
    
    return 0;
}

double compute_average_word_length( const char *sentence ) {
    double length = 0.0;
    int words = 1;
    while ( *sentence ) {
        if ( *sentence++ == ' ' ) {
            ++words;
        } else { 
            ++length;
		}
    }
	--length; /*** Don't know why ***/
	
	//printf("%d, %lf\n", words, length);
    return length / words;

}
