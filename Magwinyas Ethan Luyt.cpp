#include <iostream>  
#include <limits>
using namespace std;    

int main() {
    int TEMP1, TEMP2, TEMP3;

    while (true) {
    cout << "Enter the first temeprature: ";
    cin >> TEMP1;
    cout << "Enter the second temperature: ";
    cin >> TEMP2;

    int diff = TEMP2 - TEMP1;

    if( diff > 50) {
        cout << "Please reduce the fryers heat before entering the third reading" << endl;
        cout <<"Resetting..." << endl;
        
    }
    else if (diff < 10) {
        cout << "Please reduce the fryers heat before entering the third reading" << endl;
        cout <<"Resetting..." << endl;
    
    }
    else {
        cout << "Heat temperature is optimal" << endl;
        break;
    }
    }

    cout << "Enter the third temperature:";
    cin >> TEMP3;

    if (TEMP3 >= 150 && TEMP3 <=190) {
        cout << "Temperature is good, so you may start frying the magwinyas." << endl;
    }
    else {
        cout << "Temperature is not optimal for frying." << endl;
    }
    
    cout << "\n-----------------------------" << endl;
    cout << "Program finished press enter to exit" << endl;

    

}

