//multiplicationtable.cpp: Write a program to create a multiplication table to help your younger sibling. Ask them for how many rows and how many columns they need the table to have, and then print out a nicely lined up table with the results.
//Name: Luke MacLean
//Class Section: COSC-1436.900 Online
// Date: 10/17/2021

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main()
{
    // Variables to hold the number of rows and columns the user needs for the multiplication table  (1 point)
    int firstNumber, secondNumber;

    // Ask the user for the number of rows and columns they need and place their responses into your variables. (1 point)
    cout << "Multiplication Table Tool \n\n";
    cout << "How many rows would you like? ";
    cin >> firstNumber;
    cout << "How many columns would you like? ";
    cin >> secondNumber;

    for (int i = 0; i <= secondNumber; i++){

        //Use nested loops to print all of the values of the row value times the column value (2 points)

        for (int j = 0; j <= firstNumber; j++){
            if (i == 0 && j != 0)
            {
                cout << setw(5) << j;
            }
            else if (j == 0 && i != 0)
            {
                cout << setw(5) << i << "|";
            }
            else if (i == 0 && j == 0)
            {
                // Prettiness point: Display the output in a perfectly lined up formatted table of values (1 point)
                cout << "      ";
            }
            
            else{

                // Print a table of the column numbers and the row numbers (2 points)
                cout << setw(5) << i*j;
            }
            
        }
        if(i == 0){
            cout << "\n--------------------------------------------------------------" << endl;
        } else {
        cout << endl;
        }

    }
    
    return 0;
}