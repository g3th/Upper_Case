#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "test.h"

#define TRUE 1
#define FALSE 0

char *invalid_input = "100 Invalid";
char *mixed_case = "this IS Mixed case example";
char *all_spaces = "    ";
char *first_letters = "Only First Letters Capitalized";
char *space_at_beginning = " another VALID string ";

// 41 to 90 - Upper Case
// 61 to 122 - Lower Case

static void assert_test(char test_type[], int t) {
	switch (t)
	{
	case 0:
		printf("%s Valid Input!\n", test_type);
		break;
	case 1:
		printf("%s Invalid Input!\n", test_type);
		break;
	default:
		printf("Something went wrong.");
		break;
	}
}

int test_invalid_input(char *c) {
	size_t string_size = strlen(c);
	if (c[0] == 32 && c[1] == 32) {
		return TRUE;
	}
	for (int i = 0; i < string_size; i++) {
		if (c[i] == '\0') {
			break;
		}
		if (c[i] < 65 || c[i] > 90) {
			if (c[i] != 32) {
				return TRUE;
			}
		}
	}
	return FALSE;
}

void run_test() {
	printf("Running Tests:\n\n");
	
	char *i = toUpperCase(invalid_input);
	char *m = toUpperCase(mixed_case);
	char *a = toUpperCase(all_spaces);
	char *f = toUpperCase(first_letters);
	char *s = toUpperCase(space_at_beginning);
	
	assert_test("Invalid Input Test: ", test_invalid_input(i));
	assert_test("Mixed Case: ", test_invalid_input(m));
	assert_test("All Spaces: ", test_invalid_input(a));
	assert_test("First Leters: ", test_invalid_input(f));
	assert_test("Two Spaces at Beginning: ", test_invalid_input(s));
	
	free(i);
	free(m);
	free(a);
	free(f);
	free(s);
}