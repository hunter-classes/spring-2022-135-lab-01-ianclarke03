/*Author: Ian Clarke
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: months.cpp, Lab 01

prompts the user to input the year and the month (1-12) and prints the number of days in that month (taking into account leap years).
*/


#include <iostream>

using namespace std;

int main(){
    int year = 0;
    int month = 0;
    cout << "Enter year: ";
    cin >> year;
    cout << endl;
    cout << "Enter Month: ";
    cin >> month;
    cout << endl;


    if (month == 1){
        cout << "31 days" << endl;
    }
    if (month == 2){
        if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)){
            cout << "29 days" << endl;
        }
        else{
            cout << "28 days" << endl;

        }
    }    

    if (month == 3){
        cout << "31 days" << endl;
        }
    if (month == 4){
        cout << "30 days" << endl;

    }
    if (month == 5){
        cout << "31 days" << endl;
    }
    if (month == 6) {
        cout << "30 days" << endl;
    }
    if (month == 7){
        cout << "31 days" << endl;
        }
    if (month == 8){
        cout << "31 days" << endl;

    }
    if (month == 9){
        cout << "30 days" << endl;
    }
    if (month == 10) {
        cout << "31 days" << endl;
    }
    if (month == 11){
        cout << "30 days" << endl;
    }
    if (month == 12) {
        cout << "31 days" << endl;
    }

    return 0;
}