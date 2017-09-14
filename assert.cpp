#include <assert.h>
#include <iostream>

//An example using assert function
/*If the argument expression of this macro with functional form compares equal to zero (i.e., the expression is false), 
a message is written to the standard error device and abort is called, terminating the program execution.
The specifics of the message shown depend on the particular library implementation, 
but it shall at least include: the expression whose assertion failed, the name of the source file, 
and the line number where it happened. A usual expression format is:
Assertion failed: expression, file filename, line line number */

void printnumber(int * choice) {

	assert(choice != NULL); //program aborts if choice is NULL
	printf("%d \n", choice);


}

int main() {

	int * a;
	int b = 10;
	int *c = NULL;
	a = &b;
	printnumber(c);

	return 0;
}