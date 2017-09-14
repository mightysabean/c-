#include <cstdio>
#include <iostream>
#include <ctime>
// A simple multiply program using a function
using namespace std;

double multiply(double numb1, double numb2);

int main() {

	
	multiply(5.3, 20.9);

	return 0;
}

double multiply(double numb1, double numb2) {

	double result=numb1*numb2;

	cout << result << endl;
	return result;



}