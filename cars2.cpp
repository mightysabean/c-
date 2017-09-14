#include <cstdio>
#include <iostream>

using namespace std;

//structs with a function
//arguments entered from the source file

void newcar(string manufacturer, string model, int price);

	struct cars {
		string manufacturer;
		string model;
		int price;
	};

	int main() {
		newcar("Honda", "Accord", 1000);
		
		return 0;
	}

	

	void newcar(string manufacturer, string model, int price) {
		cars car1;
		car1.manufacturer = manufacturer;
		car1.model = model;
		car1.price = price;
		printf("%s", car1.manufacturer);

	};

