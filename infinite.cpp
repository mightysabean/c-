#include <cstdio>

int main() {

	int switcher = 0;
	//infinite loop
	for (int i = 0;i < 10;i++) {
		printf("%d \n", switcher);
		switcher++;
		i = 0;
	}
	return 0;
}