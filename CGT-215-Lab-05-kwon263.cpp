// CGT-215-Lab-05-kwon263.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

char translateChar(char c, const vector<char>& cypher) { //The & is for refference and const is used to gurantee that the vector cannot be modified
	if (c >= 65 && c <= 90) { // && is the same as "and" or "true" 
		return cypher[c - 65];
	}
	else if (c >= 97 && c <= 122) { // && is the same as "and" or "true"
		char upperCaseLetter = c - 32;
		char upperCaseCode = cypher[upperCaseLetter - 65];
		return upperCaseCode + 32;
	}
	else {
		return c; // This handles the non alphabet letters like !
	}
}
int main() {
	vector<char> cypher = {
	'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E'
	};

	string text;

	cout << "Input text to cypher: ";
	getline(cin, text);

	cout << "Encoded Message: \"";
	for (char c : text) { // it shows the text from start to end
		cout << translateChar(c, cypher);
	}
	cout << "\"" << endl;

	return 0; // Ends the program 
}





















// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
