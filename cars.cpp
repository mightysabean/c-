#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

//structs with a function
//Array of structs
//arguments entered from the console
//separate print function
//Program needs to be improved to allow for manufacturer and model names with spaces in them
//Program needs to improve to allow for alphanumeric model names
//program should allow batch insertion of data from console {"Model1,2,...","Manufacturer1,2,..."}
//Need to implement pointer to functions

void newcar();
void printcar();
void addspaces();

struct cars {
	string manufacturer;
	string model;
	int price;
};
cars car[5];


int main() {
	newcar();
	printcar();
	return 0;

}

void newcar() {
	
	for (int i = 0;i < 3;i++) {
		cout << "Enter car manufacturer"<< endl;
		cin>>car[i].manufacturer;
		cout << "Enter car model"<< endl;
		cin >> car[i].model;
		cout << "Enter car price" << endl;
		cin >> car[i].price;


	}
	
}

void printcar() {
	cout << "Manufacturer	Model	Price" << endl;
	for (int i = 0;i < 3;i++) {

		/*cout << "Manufacturer:";
		cout << car[i].manufacturer << endl;
		cout << "Model:";
		cout << car[i].model << endl;
		cout << "Price";
		cout << car[i].price << endl;*/

		cout << car[i].manufacturer;
		cout << "		";
		cout << car[i].model;
		cout << "	";
		cout << car[i].price<<endl;
		
	}
}