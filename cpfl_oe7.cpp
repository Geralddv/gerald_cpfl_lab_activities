//Name:Gerald E. De Villa
//Activity Name:OE7
//Description:Implementing login credential to my outcomes evaluation 1 using C-string
//Date:December 6, 2021

#include<cstring>
#include<iostream>
#include<string>

using namespace std;

int main(){
    string uname,name, gender,address, yearandsection, course;
    int age, cnumber;
    char username[10];
    char password[10];

    cout <<"Enter Username : ";
    cin >> username;
    cout <<"Enter Password : ";
    cin >> password;

    if(strcmp(username,"geralddv08")==0)
    {
        if(strcmp(password,"gdv123")==0)
    {
        cout <<"\nYou have logged in successfully" <<endl;    
    
        cout<<"\nHello CS and IT" <<endl;
        cout<<"Welcome to Computer Programming Fundamentals"<< endl;
        cout<<"\n";

        cout<<"Enter your Name                 :";
        cin>>name;
        cout<<"Enter your Gender               :";
        cin>>gender;
        cout<<"Enter your Age                  :";
        cin>>age;
        cout<<"Enter your Address              :";
        cin>>address;
        cout<<"Enter your Year and Section     :";
        cin>>yearandsection;
        cout<<"Enter your Course               :";
        cin>>course;
        cout<<"Enter your Contact Number (+63) :";
        cin>>cnumber;
        cin.ignore();


        cout<<"\n--------------------------------------------"<<endl;
        cout<<"Your Name is "<<name <<endl;
        cout<<"Your Gender is "<<gender <<endl;
        cout<<"You are "<<age<<" years old"<<endl;
        cout<<"Your address is "<<address <<endl;
        cout<<"Your Year and Section is "<<yearandsection <<endl;
        cout<<"Your Course is "<<course <<endl;
        cout<<"Your Contact Number is (+63)"<<cnumber <<endl;
    }
    else 
    {
        cout <<"\nIncorrect Password"<<endl;
    }
    }
    else{
        cout << "\nIncorrect Username.." <<endl;    
        
    }

    return 0;
}