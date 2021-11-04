//Performance Task 2
//Description: Conversion Console App using functions [Dollar to Peso & Peso to Dollar]
//             This is also a debugging activity
//Name: Gerald E. De Villa

#include <iostream>

using namespace std;

struct group_facet: public numpunct<char> {
    protected:
    string do_grouping() const { return "\003"; }
};

void promptAndWait();

void dollarsToPeso(float rate,unsigned dollars );

void pesoTodollars(float rate,unsigned peso );

int main(){

    float conversionRate = 50.73; //$1 = 50.73 Pesos
    float conversionRateP = 0.02; //P1 = 0.02 Dollars
    unsigned dollars;
    unsigned peso;
    int ch, ans=0;
    do{
        system("cls");
        cout << endl;
        cout << "Conversion App" <<endl << endl;
        cout << "[1] Dollar to Peso" <<endl;
        cout << "[2] Peso to Dollar" <<endl;
        cout << "[0] Exit the Conversion App" <<endl;
        cout << "Select Conversion : ";
        cin >> ch;
        
        switch(ch){
            case 1:{
                cout << "\n<< Convert Dollar to Peso>>" <<endl;
                cout <<"Enter a US dollars amount (without the dollar sign, comas or a decimal): ";
                cin >> dollars;
                dollarsToPeso(conversionRate, dollars);
                promptAndWait();
                break;                  
            }
            case 2:{
                cout << "\n<< Convert Peso to Dollar>>" <<endl;
                cout <<"Enter a peso amount (without the peso sign, comas or a decimal): ";
                cin >> peso;
                pesoTodollars(conversionRateP, peso);
                promptAndWait();
                break;
            }
            case 0:{
                cout << "Conversion App Terminated \n Thank you for using the app!";
                promptAndWait();
                              
            }
            option:{
                cout << "Invalid Input!";
                promptAndWait();
                
            }

        }
    
    }while(ans == 0);

return 0;
}

void promptAndWait(){
    cin.ignore(100, '\n');
    cout << "\n Press Enter or Return to continue...";
    cin.get();
}
void dollarsToPeso(float rate, unsigned dollars){
    cout.setf(ios::fixed);
    cout.precision(2);

    cout.imbue(locale(cout.getloc(), new group_facet));
    cout << "\n$ " << dollars << "US = " << (rate * dollars) << "Peso.\n";
}
void pesoTodollars(float rate, unsigned peso ){
    cout.setf(ios::fixed);
    cout.precision(2);

    cout.imbue(locale(cout.getloc(), new group_facet));
    cout << "\nP " << peso << " Peso = " << (rate * peso) << "Dollar.\n";

}