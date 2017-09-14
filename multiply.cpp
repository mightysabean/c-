#include <cstdio>
#include <iostream>
#include <ctime>
// A simple multiply program using a function
using namespace std;

double numb3[1],numb1,numb2;
double multiply(double numb1,double numb2);


int main() {

	
	multiply(numb1, numb2);

	return 0;
}

double multiply(double numb1,double numb2) {
	cout << "Enter two numbers to multiply" << endl;

	for (int i = 0; i < 2; i++) {
		cout << "Number " << i + 1 << endl;
		cin >> numb3[i];


	}
	numb1 = numb3[0];
	numb2 = numb3[1];
	double result=numb1*numb2;

	cout <<"The result is "<< result << endl;
	return result;



}