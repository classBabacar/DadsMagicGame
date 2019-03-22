#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <time.h>
using namespace std;

int main()
{
    int i=1;


    char ans;
    srand (time(NULL));
    double div= rand() %2+1;
    double num = rand() % 20+4;

    cout<<setw(5)<<"****YOU HAVE TO USE A PENCIL AND PAPER FOR THIS EXERCISE OR YOUR MIND****"<<endl;
    cout << "Step 1. Think of number: " << endl;
    cout<<"Step 2. Multiply is by two: "<<endl;
    cout<<"Step 3. Add: "<<num<<endl;
    cout<<"Step 4. Divide it by: "<<div<<endl;
    cout<<"Step 5. Subtract your original starting number: "<<endl;

    cout<<"when you are ready for me to tell you my number: press(Y)"<<endl;
    cin>>ans;

    while(i)
    {
        if(ans=='Y' || ans=='y')
    {

            cout<<"The secret number is: "<< num/2<<endl;

            cout<<"Thank you for playing."<<endl;
            i=0;

    }
        else
            {
                cout<<"Thank you for playing."<<endl;
                i=0;
            }
    }

}
