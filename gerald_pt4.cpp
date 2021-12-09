//Name:Gerald E. De Villa
//Activity name:Case study
//Description:A program that computes the average grade and determined if you passed or failed.
//Date:December 9, 2021

#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main(){
    
    ofstream ou_stream;
    string name;
    int grade[6];
    int i, avg;
    int sum=0;

    ou_stream.open("ou_file.txt",ios::app);
    
    cout<<"\n--------------Grading System--------------\n"<<endl;

    cout<<"Enter your name : ";
    cin>>name;

    cout<<"\nEnter your grade to the following subjects\n"<<endl;

    cout<<"Programming : ";
    cin>>grade[0];
    cout<<"Math : ";
    cin>>grade[1];
    cout<<"Physical Education : ";
    cin>>grade[2];
    cout<<"Science : ";
    cin>>grade[3];
    cout<<"Filipino : ";
    cin>>grade[4];
    cout<<"English : ";
    cin>>grade[5];
    cout<<endl;
    
    for (i=0;i<6;i++){
        sum=sum+grade[i];
    }

    avg=sum/6;
    cout<<"-------------------------------------------"<<endl;
    ou_stream<<"Name "<<name<<endl;
    cout<<"Average grade "<<avg;
    ou_stream<<"Average grade "<<avg;

    if(avg>75){
        cout<<"\nCongratulations! You passed!\n";
        ou_stream<<"\nCongratulations! You passed!\n"<<endl;
        cout<<endl;
    }else{
        cout<<"\nYou failed\n";
        ou_stream<<"\nYou failed\n"<<endl;
        cout<<endl;
    }

    ou_stream.close();
    return 0;
}

   
