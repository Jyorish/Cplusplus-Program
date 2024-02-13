/*
PARTICIPATION ACTIVITY 1.8.1: Program execuition begins with main, then proceeds one statement
at a time.
*/
#include<iostream>
using namespace std;

// a program begins execuiting statements in main()
int main(){
    int wage;       // declaring an integer variable wage

    wage = 20;      // assigining wage with 20

    cout << "Salary is ";       // outputs "Salary is " to the screen
    cout << wage * 40 * 52;     // outputs the result of wage * 40 * 52 to the screen
    cout << endl;               // endl moves the output cursor to the next line on the screen

    return 0;                   // ends the program    
}