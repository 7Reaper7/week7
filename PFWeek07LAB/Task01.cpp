#include<iostream>
using namespace std;
/*didnt follow the hint in manual and made the function return int data and gave it an extra parameter to avoid having to use cout within the function */

/*function to calculate a given number's table
inputs: the number given by the user and the current iteration of the for loop
outputs: the product of the two inputs*/
int calTable(int,int);

main()
{
    system("cls");
    
    int number;
    int show;
    cout << "Enter a number=> ";
    cin >> number;

    //used if to validate (purposely not made to invalidate floats)
    if(number >= 1)
    {
        for(int x=1; x<=10; x++)
        {
            show = calTable(number,x);
            cout << number << " X " << x << " = " << show << endl;
        }
    }
    else
    {
        cout << "Error";
    }
}

int calTable(int number,int x)
{
    int result;
    result = number * x;
    return result;
}