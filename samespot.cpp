#include <cstdio>
#include <cmath>
#include <windows.h>

//prints random numbers between 0 and 10 on thesame spot


using namespace std;

int main() {

	int switcher = 0;
	for (int i = 0; i < 10; i++) {

		int numb = rand() % 10 + 1;
		printf("%d \r", numb);
		Sleep(750);
		i = 0;
	}
	

}