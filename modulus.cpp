#include <cstdio>
//computes modulus of user inputted numbers
int main() {

	int numb;

	
	
	printf("Enter a number ");
	scanf("%d", &numb);
	int result = numb % 2;
	printf("%d \n", result);

	return 0;
}