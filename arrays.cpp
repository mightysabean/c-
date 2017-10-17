#include <iostream>

using namespace std;

int main() {
	int create_array();
	int print_array();

	create_array();
	print_array();

	return 0;
}

int array1[5][5];

int create_array() {

	for (int x = 0; x < 5; x++) {

		for (int y = 0; y < 5; y++) {

			array1[x][y] = 0;
			return array1[x][y];
		}

	}

}



int print_array() {

	int i=0; int j;
	while (i < 5) {

		for (j = 0; j < 5; j++) {

			printf("%d", array1[i][j]);
			
		}
		printf("\n");
		++i;
	}
	return 0;
}