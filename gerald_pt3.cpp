//Name:Gerald De Villa
//Activity name: Performance task 3
//Description: POS Computer System that computes atleast 3 kinds of product input, plus TAX
//Date:November 20, 2021

#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>

const double tax = 0.12;

using namespace std;

int main(){

    ifstream in_stream;
    ofstream ou_stream;
    string cname,pn1,pn2,pn3;
    int pq1,pq2,pq3;
    double price1,price2,price3,t_price1,t_price2,t_price3, vat, ta, pta;

    in_stream.open("in_file.txt");
    ou_stream.open("ou_file.txt", ios::app);

    cout<< "Enter Customer Name    :";
    getline(cin,cname);

    cout<< "Enter Product1 Name    :";
    cin >> pn1;
    cout<< "Enter Quantity         :";
    cin >> pq1;
    cout<< "Enter Product Price    :";
    cin >> price1;

    cout<< "Enter Product2 Name    :";
    cin >> pn2;
    cout<< "Enter Quantity         :";
    cin >> pq2;
    cout<< "Enter Product Price    :";
    cin >> price2;

    cout<< "Enter Product3 Name    :";
    cin >> pn3;
    cout<< "Enter Quantity         :";
    cin >> pq3;
    cout<< "Enter Product Price    :";
    cin >> price3;

    
    price1 = pq1 * price1;
    price2 = pq2 * price2;
    price3 = pq3 * price3;
    ta= price1+ price2+ price3;

    t_price1 = price1 * tax;
    t_price2 = price2 * tax;
    t_price3 = price3 * tax;
    vat= t_price1+ t_price2+ t_price3;

    pta = ta+ vat;


    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    ou_stream << "Customer Name :"<< cname <<endl;  
    ou_stream << "Product 1 :" << pn1 << "Quantity :" << pq1 << "Product Price :" << price1 <<endl;
    ou_stream << "Product 2 :" << pn2 << "Quantity :" << pq2 << "Product Price :" << price2 <<endl;
    ou_stream << "Product 3 :" << pn3 << "Quantity :" << pq3 << "Product Price :" << price3 <<endl;
    ou_stream << "Total price of product :" << ta <<endl;
    ou_stream << "Total tax :" << vat <<endl;
    ou_stream << "Total amount:" << pta <<endl;
    ou_stream << endl;

    cout<< "Customer Name         :" << cname <<endl;
    cout<< "Product1              :" << pn1 <<endl;
    cout<< "Quantity              :" << pq1 <<endl;
    cout<< "Product Price         :" << price1 <<endl;

    cout<< "Product2              :" << pn2 <<endl;
    cout<< "Quantity              :" << pq2 <<endl;
    cout<< "Product Price         :" << price2 <<endl;

    cout<< "Product3              :" << pn3 <<endl;
    cout<< "Quantity              :" << pq3 <<endl;
    cout<< "Product Price         :" << price3 <<endl;

    cout<< "\nTotal price of product :" << ta <<endl;
    cout<< "\nTotal  Tax             :" << vat <<endl;
    cout<< "\nTotal Amount           :" << pta <<endl;

    in_stream.close();
    ou_stream.close();
    return 0;


}