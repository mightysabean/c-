#include <cstdio>
#include <iostream>
#include <string>

//creates a string "spaces" which stores the same number of space characters as the word entered


using namespace std;

string words;

void addspaces();

 void addspaces() {
	 std::string spaces(words.size(), ' ');
	 cout << spaces+words;
}


int main() {

	cout << "Enter your words" << endl;
	cin >> words;
	addspaces();

	return 0;
}

