//Name:Gerald E. De Villa
//Prelim Examination
//Date:October 8, 2021

#include<iostream>
#include<string>

const double philhealth = 150, sss = 250, pagibig = 200;

using namespace std;

int main(){

    string ename, empid; 
    int hourswk, dtpdy;
    double hrpyrate, grspay, ntpay, txp;

    cout << "Enter your name       :";
    getline(cin,ename);
    cout << "Enter employee ID     :";
    cin >> empid;
    cout << "Enter date of pay day :";
    cin >> dtpdy;
    cout << "\nEnter hourly pay rate :";
    cin >> hrpyrate;
    cout << "Enter hours worked    :";
    cin >> hourswk;

    grspay = hrpyrate * hourswk;
    txp = grspay * 0.12;
    ntpay = grspay - txp - philhealth - sss - pagibig;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
  

    cout <<"\n-----------------------------------------" <<endl;

    cout <<"Payroll summary for     :" << ename<<endl;
    cout <<"Employee no.            :" << empid<<endl;
    cout <<"Payroll date            :October " << dtpdy<<",2021"<<endl;

    cout <<"\nYou earned "<<grspay<<" at "<<hourswk<<" per hour"<<endl;
    cout <<"Grosspay                :" << grspay<<endl;
    cout <<"Withholding tax         :" << txp<<endl;
    cout <<"Philhealth              :" << philhealth<<endl;
    cout <<"SSS                     :" << sss<<endl;
    cout <<"Pagibig                 :" << pagibig<<endl;
    cout <<"------------------------------------------" <<endl;
    cout <<"Net pay                 :" << ntpay<<endl;

    cout <<"\nEmployee status         :"; if(ntpay<5000){
                                            cout<< "Contractual";
                                        }else if(ntpay >= 5001,ntpay<=10000){
                                            cout<<"Probationary";
                                        }else if(ntpay>10000){
                                        cout<<"Regular";
                                        }


    return 0;
}