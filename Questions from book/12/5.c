/*
 * Modify Programming Project 14 from Chapter 8 so that it uses a pointer instead of an integer to keep track of the current
 * position in the array that contains the sentence. 
 */



/*
Write a program that reverses the words in a sentence:

Enter a sentence: you can cage a swallow can't you?
Reversal of sentence: you can't swallow a cage can you?

Hint: Use a loop to read the characters one by one and store them in a one-dimensional char array. Have the loop stop at a period, question mark, or exclamation point (the "terminating character"), which is saved in a separate char variable. Then use a second loop to search backward through the array for the beginning of the last word. Print the last word, then search backward for the next-to-last word. Repeat until the beginning of the array is reached. Finally, print the terminating character.
 */


#include <stdio.h>
#define MAX_CHAR 200

int main( void ) {
	char sentence[ MAX_CHAR ], terminatingCharacter;
	char *i;
	
	printf( "Enter a sentence: " );
	for ( i = sentence; ( *i = getchar( ) ) != '?' && *i != '.' && *i != '!'; i++ ) {
		;
	}	 
	terminatingCharacter = *i;

	char *j;
	while ( i != sentence - 1 ) {
		j = i;
		if ( *i == ' ') {
			i++;
			while ( *i != ' ' && *i != terminatingCharacter ) {
				putchar( *i );
				i++;
			}
			putchar( ' ');
		}
		if ( i == sentence ) {
			while ( *i != ' ' && *i != terminatingCharacter ) {
				putchar( *i );
				i++;
			}
		}
		i = j;	
		i--;	
	}	
	putchar( terminatingCharacter );
	
	return 0;

}

/*
The choice between using `&&` (logical AND) and `||` (logical OR) in your condition depends on the logic you want to implement in your loop. Let’s break down the reasoning behind using `&&` in the context of your code.

### Understanding the Condition

The condition in your `while` loop is:

```c
while (sentence[i] != ' ' && sentence[i] != terminatingCharacter && sentence[i] != '\0') {
    putchar(sentence[i++]);
}
```

### Explanation of the Condition

1. **Purpose of the Loop**: The loop is intended to continue printing characters from the `sentence` array as long as the current character (`sentence[i]`) is **not** a space, **not** the terminating character, and **not** the null terminator (`'\0'`).

2. **Using `&&` (Logical AND)**:
   - The loop will keep executing as long as **all** conditions are true.
   - If any one of the conditions becomes false (i.e., if `sentence[i]` is a space, the terminating character, or the null terminator), the loop will stop.
   - This is what you want because you want to print characters until you hit one of those special characters.

### Why Not Use `||` (Logical OR)?

If you were to use `||`, like this:

```c
while (sentence[i] != ' ' || sentence[i] != terminatingCharacter || sentence[i] != '\0') {
    putchar(sentence[i++]);
}
```

- This condition would always evaluate to `true` for any character that is not all three of those conditions at the same time.
- For example, if `sentence[i]` is a letter (which is neither a space nor the terminating character nor the null terminator), the condition would be true, and the loop would continue.
- However, if `sentence[i]` were a space, the first condition (`sentence[i] != ' '`) would be false, but the other conditions would still be true, causing the loop to continue indefinitely (or until it accesses out of bounds).

### Summary

- **Use `&&`** when you want the loop to continue only if **all** conditions are met. In this case, you want to keep printing characters until you encounter a space, the terminating character, or the null terminator.
- **Use `||`** when you want the loop to continue as long as **any** of the conditions are true, which is not what you want in this scenario.

By using `&&`, you ensure that the loop stops when it encounters any of the specified characters, allowing you to correctly print the desired substring.
*/

