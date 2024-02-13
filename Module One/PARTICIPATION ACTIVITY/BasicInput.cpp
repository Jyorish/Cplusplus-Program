/*
PARTICIPATION ACTIVITY 1.8.3: A program can get an input value from the keyboard.

This program demonstrates getting input value from the user.
*/
#include<iostream>
using namespace std;

int main(){
    int wage;           // declaring an integer variable wage

    // this statement gets an input value from the user and puts the value in the wage variable
    cin >> wage;

    cout << "Salary is ";       // outputs text inside "" on the screen
    cout << wage * 40 * 52;     // outputs the reslu of wage * 40 * 52 on the screen
    cout << endl;               // moves the cursor to the next line

    return 0;                   // ends the program
}