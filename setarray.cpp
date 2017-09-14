#include <cstdio>
#include <iostream>

using namespace std;

//program which uses a reference to set/change the values in an array
//notice that if you use double setval it wont work, only double& setval will work

double arr[] = { 0.01, 0.02, 0.03, 0.04, 0.05 }; //array

double &setval(int i) { //function to set values in array

	return arr[i];

}



int main() {

	cout << "values before change"<<endl;
	for (int i = 0;i < 5;i++) {
		cout << "arr["<<i<<"]=";
		cout << arr[i]<<endl;

	}

	cout << "values after change" << endl;
	for (int i = 0;i < 5;i++) {
		setval(0) = 1.0;
		setval(1) = 2.0;
		cout << "arr[" << i << "]=";
		cout << arr[i] << endl;

	}





	return 0;
}