#include <cstdio>
#include <iostream>

using namespace std;

//A program which swaps two inputs using refrences
//note that if you try use int x and int y instead of int &x and int &y, the swap function does not work

void swap(int &x, int &y);

int main() {



	int a;
	int b;

	cout << "Enter First Integer" << endl;
	cin >> a;
	cout << "Enter Second Integer" << endl;
	cin >> b;

	cout << "value of a before swapping is" << endl;
	cout << a <<endl;
	cout << "value of b before swapping is"<<endl;
	cout << b<<endl;

	swap(a, b);

	cout << "value of a after swapping is"<<endl;
	cout << a<<endl;
	cout << "value of b after swapping is"<<endl;
	cout << b<<endl;

	return 0;
}

	

void swap(int &x, int &y) {

	int temp = x;
	x=y;
	y = temp;


	return;



}