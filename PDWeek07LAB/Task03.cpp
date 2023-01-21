
#include<iostream>
using namespace std;

/*function to print a series of number till the given input with each number divisible by 4 multiplied by 10*/
void amplify(int);

main()
{
    system("cls");
    
    int input;
 
    cout << "Enter a higher bound=> ";
    cin >> input;
    
    //to prevent zero or negative input
    if(input >= 1)
    {
        amplify(input);
    }
    else
    {
        cout << "Error";
    }
}

void amplify(int input)
{
    int value;

    for(int x = 1; x<=input; x++)
    {
        value = x;
        if(x%4 == 0)
        {
            value = x*10; 
        }
        cout << value;
        if(x != input)
        {
            cout << ", ";
        }
    }
}