//Name:Gerald E. De Villa
//Midterm Exam
//Description: Length conversion app
//Date:Novermber 12 2021

#include <iostream>
using namespace std;

double inchToCentimeter(double num) {
	double result = 0;
	result = num * 2.54;
	return result;
}

double meterToKilometer(double num) {
	double result = 0;
	result = num / 1000;
	return result;
}

double centimeterToMillimeter(double num) {
	double result = 0;
	result = num * 10;
	return result;
}

double footToInch(double num) {
	double result = 0;
	result = num * 12;
	return result;
}


int main() {
	int choice = -1;
	float num = 0;
	
	while (choice != 0) {		
		system("cls");
		choice = -1;
		cout << "Length Conversion App" << endl << endl;
		
		cout << "[1] - Inch to Centimeter\n[2] - Meter to Kilometer\n[3] - Centimeter to Millimeter\n[4] - Foot to Inch\n[0] - Exit\n\nSelect Conversion: ";
		cin >> choice;
		
		switch (choice) {
			case 1: {
				cout << "Inch to Centimeter" << endl << endl;
				cout << "Enter number: ";
				cin >> num;
				cout << "Result: " << inchToCentimeter(num) << endl;
				num = 0;
				system ("pause");
				break;
			}
            case 2: {
				cout << "Meter to Kilometer" << endl << endl;
				cout << "Enter number: ";
				cin >> num;
				
				cout << "Result: " << meterToKilometer(num) << endl;
				
				num = 0;
				system ("pause");
				break;
			}
			
			case 3: {
				cout << "Centimeter to Millimeter" << endl << endl;
				cout << "Enter number: ";
				cin >> num;
				cout << "Result: " << centimeterToMillimeter(num) << endl;
				num = 0;
				system ("pause");
				break;
			}
			case 4: {
				cout << "Foot to Inch" << endl << endl;
				cout << "Enter number: ";
				cin >> num;
				cout << "Result: " << footToInch(num) << endl;
				num = 0;
				system ("pause");
				break;
			}	
			case 0: {
				cout << "Thank you for using the app!" <<endl;
				system ("pause");
				break;
			}
			default: {
				cout << "Invalid Input! Enter again!" << endl;
				system ("pause");
				break;
			}
		}				
	}
}
