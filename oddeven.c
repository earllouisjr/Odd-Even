#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	// create values array
	int values[10];
	int i;
	int numvalues = argc-1;
	
	// return a "too many values" message if more than 10 values are given in command line
	if (numvalues > 10) {
		printf("Too many values\n");
		exit(-1);
	}
	// take arguments from command line and put them into values array
	for (i=1; i<argc; i++) {
		values[i-1] = atoi(argv[i]);
	}
	
	// create evens and odds arrays
	int evens[10];
	int odds[10];
	int numevens = 0;
	int numodds = 0;
	
	// check if the numbers in values array are even and places them into the either the even or odd array
	for (i=0; i<numvalues; i++) {
		if (values[i]%2 == 0) {
			evens[numevens] = values[i];
			numevens++;
		} else {
			odds[numodds] = values[i];
			numodds++;
		}
	}	
	// Print odd numbers
	printf("Odd numbers are ");
	for (i=0; i<numodds; i++) {
		printf("%d ", odds[i]);
	}
	
	printf("\n");

    // Print even numbers
    printf("Even numbers are ");
    for (i=0; i<numevens; i++) {
        printf("%d ", evens[i]);
    }
    printf("\n");
	
	return 0;
}