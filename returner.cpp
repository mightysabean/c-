#include <cstdio>
#include <iostream>

//program that shows you cannot return a reference to a local variable, only a static variable
//when program is compiled you get an error for line 11 warning C4172: returning address of local variable or temporary: nu1
//if u use int static nu1 in the declaration, it will work
using namespace std;

int &returner() {

	int nu1 = 10;
	return nu1;
	}

int main() {

	returner();
	return 0;
}