//Name: Gerald De Villa
//Activity no. OE3
//Description:Salary program that computes the gross pay,tax rate and net pay.
//Date:September 24, 2021

#include<iostream>
#include<string>

using namespace std;

int main(){
   
    string ename;
    int num_hours_work, empid;
    double rate_perhr, grosspay, taxrate, netpay;

    cout<< "Enter Employee Name   :";
    getline(cin,ename);

    cout<< "Enter Employee ID     :";
    cin >> empid;

    cout<< "Enter hours worked    :";
    cin >> num_hours_work;

    cout<< "Enter rate per hour   :";
    cin >> rate_perhr;

    grosspay = rate_perhr * num_hours_work;

    if(grosspay >40000){
        taxrate = grosspay * 0.12;
    }else if(grosspay = 30000-40000){
        taxrate = grosspay * 0.10;
    }else if(grosspay <=20000){
        taxrate = grosspay * 0.5;
    }
    
    netpay = grosspay - taxrate;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout<<"\n--------------------------------------" <<endl;

    cout<< "Employee Name    :" << ename <<endl;
    cout<< "Employee Number  :" << empid <<endl;
    cout<< "Gross pay        :" << grosspay <<endl;

    cout<< "\nTax rate         :" << taxrate <<endl;
    cout<< "\nNet pay          :" << netpay <<endl;
     

    return 0;
}