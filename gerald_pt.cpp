//Name:Gerald De Villa
//Activity name:Performance Task
//Description:A program that will identify if a number is even or odd number.
//Date:October 14,2021

#include <iostream>

using namespace std;

int main(){

    int r_num = 0;
    int cntn = 0;
    int a_num[30];
    int index;
    

    cout<<"Enter range of number      :";
    cin>>r_num;
    cout<<"Enter " << r_num << " consecutive number :";
    
    while (cntn < r_num){    
        cin>>a_num[index];

        if(a_num[index] % 2 ==0){
         cout << a_num[index] <<"- Even number" <<endl;       
        }
        else
         cout <<a_num[index] <<"- Odd number"<<endl;   
         index++;
         cntn++;
        }
    return 0;
    }
    
    
