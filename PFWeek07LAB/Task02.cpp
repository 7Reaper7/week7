#include<iostream>
using namespace std;

//program that inputs an amount and displays as many number from the Fibonacci series
 
main()
{
    system("cls");

    int input;
    int sum;
    int n1=0,n2=1;

    cout << "How many number of Fibonacci series you want to print(if you enter a decimal point number it will be rounded off to the near lowest whole)=> ";
    cin >> input;

    if(input >= 1)
    {
        for(int x=1; x<=input; x++)
        {
            sum = n1 + n2;
            cout << sum << endl;
            n1 = n2;
            n2 = sum;
        }
    }
    else
    {
        cout << "Error";
    }
}