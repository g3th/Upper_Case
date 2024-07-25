#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "test.h"

char *toUpperCase(char *string) {	
	// include NULL terminator, 
	size_t size = strlen(string);
	char *newString;
	newString = malloc(sizeof(char) * size + 1);
	// NULL pointer check ('Dereferencing NULL pointer' warning)
	assert(newString != NULL);

	// iterate up to the last letter
	for (int y = 0; y < size; y++) {
		//65 to 90 - Integer range for Upper Case ASCII letters
		for (int i = 65; i < 91; i++) {
			if (string[y] == i || string[y] == 32) {
				newString[y] = string[y];
				break;
			} else {
				newString[y] = string[y] - 32;
			}
		}
	}
	// include NULL terminator
	newString[size] = '\0';
	return newString;
}