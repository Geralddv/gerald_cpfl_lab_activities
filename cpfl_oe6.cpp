//Name:Gerald E. De Villa
//Activity name: OE6
//Description:A program that search array and sort array(Ascending).
//Date: November 25 2021

#include <iostream>

using namespace std;

void searchArray();

void sortAscending();

int main (){

    int ch;

    do{
        system("cls");
        cout <<"[1] Searching Array" <<endl;
        cout <<"[2] Sorting Array (Ascending)" <<endl;
        cout <<"[0] Exit the program" <<endl;
        cout <<"Enter your choice:";
        cin >> ch;
        cout <<endl;

        switch(ch){
            case 1:{
                searchArray();
                system("pause");
                break;
            }
            case 2:{
                sortAscending();
                system("pause");
                break;
            }
            case 0:{
                cout <<"Thank you for using the program!" <<endl;
                system("pause");
                break;
            }
            default:{
                cout <<"Invalid Input..." <<endl;
                system("pause");
                break;
            }
        }

    }while(true);


    return 0;
}

void searchArray(){
    int arr[100];
    int count;
    int num;
    int i;
    
    cout <<"Enter number of elements in array : ";
    cin >> count;

    cout <<"Enter "<<count<<" numbers : ";
    for(i=0; i<count; i++){

    cin>>arr[i];
    }
    cout <<"Enter a number to search in array : ";
    cin >>num;

    for(i=0; i<count; i++){
        if (arr[i] == num){
            cout<<"Element found at index " <<i <<endl;
            break; 
        }         
    }
    if (i == count){
        cout<<"Element not found " <<endl;
    }
}

void sortAscending(){

int arr[100];
int size, i, j, temp;

cout <<"Enter size of array:";
cin >> size;

cout <<"Enter elements in array:";

for(i=0; i<size; i++){

    cin>>arr[i];
}
for(i=0; i<size; i++){

    for(j=i+1; j<size; j++){
        if(arr[j] < arr[i]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

    }
}
cout <<"Elements of array in sorted ascending order:" <<endl;
for (i=0; i<size; i++){
    cout << arr[i]<<endl;
}

}