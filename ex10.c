#include <stdio.h>

int main(int argc, char *argv[]) {

	int i = 0;

	// go thrhough each string in argc
	// why am i skipping argv[0]
	for (i = 1; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}

	// lets make our new array of strings
	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas"
	};
	int num_states = 4;

	for (int i = 0; i < num_states; i++) {
		printf("state %d: %s\n", i , states[i]);
	}

	return 0;
}
