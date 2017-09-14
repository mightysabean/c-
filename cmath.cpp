/* rint example */
#include <stdio.h>      /* printf */
#include <fenv.h>       /* fegetround, FE_* */
#include <math.h>       /* rint */
#include <iostream>
#include <cstdio>

using namespace std;

//int fegetround (void);

//FE_DOWNWARD	Round downward.
//FE_TONEAREST	Round to nearest.
//FE_TOWARDZERO	Round toward zero.
//FE_UPWARD		Round upward.

double numbr;
void setrounding();

int main()
{
	cout << "Enter Number";
	cin >> numbr;
	fesetround(FE_UPWARD);
	printf("Rounding is \n");
	setrounding();

	printf("%.1f", rint(numbr));
	return 0;
}

	void setrounding() {


		switch (fegetround()) {

		case FE_DOWNWARD: printf("Downward"); break;
		case FE_TONEAREST: printf("Nearest"); break;
		case FE_TOWARDZERO: printf("Towards zero"); break;
		case FE_UPWARD: printf("Upwards"); break;


		}


	}

	
	
	


