/*
 •• E3.18
 Write a program that asks the user to enter a month (1 for January, 2 for February, and so on) and then prints the number of days in the month. For February, print “28 or 29 days”.
 
 Enter a month: 5
 30 days
 Do not use a separate if/else branch for each month. Use Boolean operators.
 */

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a month: ";
    int month;
    cin >> month;
    
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 ||  month == 12)
    {
        cout << "31 days";
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        cout << "30 days";
    }
    else
    {
        cout << "28 or 29 days";
    }
    cout << endl;
}
