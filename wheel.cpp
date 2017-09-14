#include <cstdio>
#include <cmath>
#include <windows.h>

//Spinning wheel program

int main()
{
	char n[] = {'|','/','-','\\'};
	unsigned int i;

	for (i = 0; ; ++i) {
		printf("%c\r", n[i % sizeof(n)]);
		Sleep(200);
	}
	return 0;
}

	
