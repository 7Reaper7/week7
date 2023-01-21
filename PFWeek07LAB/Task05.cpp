#include<iostream>
using namespace std;

/*function to sum the total digits of a given number
inputs: int type data  
output: int type data, the sum of the digits of the input int type data*/
int digitSum(int);

main()
{
    system("cls");

    int input;
    int show = 0;
    cout << "Enter a number(only natural numbers)=> ";
    cin >> input;

    //to validate only positive integers(floats are exceptions)
    if(input > 0)
    {
        show = digitSum(input);
        cout << "Sum of digits=> " << show;
    }
    else
    {
        cout << "Error";
    }
}

int digitSum(int input)
{
    int total = 0;
    int check;
    for(input; input!=0; input=input/10)
    {
        check = input % 10;
        total = total + check;
    }
    return total;
}
