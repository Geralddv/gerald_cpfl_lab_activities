//Name: Gerald De Villa
//Activity name: OE4
//Description:A program that will create a pyramid.
//Date:October 15 2021

#include<iostream>
using namespace std;

int main(){
   int height, space, v, c;

   cout << "Enter pyramid height: ";
   cin >> height;

   for(c = 1; c <= height; c++){
      
      for (space = c; space < height; space++)
         cout << " ";

      
      for(v = 1; v <= (2 * height - 1); v++)
      {
         if(c == height || v == 1 || v == 2*c - 1)
            cout << "*";
         else
            cout << " ";
      }
      cout << "\n";
   }
   return 0;
}