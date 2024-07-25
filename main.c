#include <stdio.h>
#include <stdlib.h>
#include "test.h"

int main() {
	run_test();
	char *lower_case = "this is a lower case example";
	char *upper_case = toUpperCase(lower_case);
	printf("%s\n\n", upper_case);
	free(upper_case);
	return 0;
}