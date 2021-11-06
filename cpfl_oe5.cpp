//Name: Gerald E. De Villa
//Activity Name: OE5
//Description: Program that will display a reverse order of the input.
//Date: November 6 2021

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void reverseString(string word) {
	string reverse;
	int j = word.length() - 1;
	for (int i = 0; i < word.length(); i++) {		
		reverse[i] = word[j];	
		cout << reverse[i];
		j--;
	}
	cout << endl << endl;
}

void reverseUnsignedInt(unsigned number) {
	stringstream ss;
	string reverse;
	string word_num;
	ss << number;
	ss >> word_num;
	
	int j = word_num.length() - 1;
	for (int i = 0; i < word_num.length(); i++) {		
		reverse[i] = word_num[j];	
		cout << reverse[i];
		j--;
	}
	cout << endl << endl;
}

int main() {
	string word;
	unsigned number;
	int ans = 0;
	
	while(ans != 3) {
		ans = 0;
		system("cls");
		cout << endl;
		cout << "[1] Reverse a String" << endl;
		cout << "[2] Reverse Unsigned Integer" << endl;
		cout << "[3] Exit" << endl;
		cout << "Select Function: ";
		cin >> ans;
		
		switch(ans) {
			case 1: {
				cin.ignore();
				cout << "\n<< Reverse a String >>" << endl;
				cout << "Enter a word: ";
				getline(cin, word);
				reverseString(word);
				system("pause");
				break;
			}
			case 2: {
				cout << "\n<< Reverse an Unsigned Integer >>" << endl;
				cout << "Enter a number [0-9]: ";
				cin >> number;
				reverseUnsignedInt(number);
				system("pause");
				break;
			}
			case 3: {
				cout << "\nExit" << endl;
				system("pause");	
				break;
			}		
			default: {
				cout << "Invalid Input!";
				system("pause");
				break;
			}
			
		} 
	} 
}
