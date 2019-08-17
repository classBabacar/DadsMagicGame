#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <time.h>
#include <cctype>

using namespace std;

int main()
{
    srand(time(NULL));

    double randomNum = rand() % 50 + 1;

    cout << setw(5) << "****YOU HAVE TO USE A PENCIL AND PAPER FOR THIS EXERCISE OR YOUR MIND****" << endl;
    cout << "Step 1. Think of number: " << endl;
    cout << "Step 2. Double it: " << endl;
    cout << "Step 3. Add: " << randomNum << endl;
    cout << "Step 4. Divide it in half: " << endl;
    cout << "Step 5. Subtract your original starting number: " << endl;

    cout << "Enter (y) to see the magic number: ";
    char ans;
    cin >> ans;

    if (toupper(ans) == 'Y')
    {
        cout << "The secret number is: " << randomNum / 2 << endl;
    }
    else
    {
        cout << "I guess you don't want to see the magic." << endl;
    }

    cout << "Thank you for playing." << endl;
}
