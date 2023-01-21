#include<iostream>
using namespace std;

/*function to show the frequency of a number within another number
inputs: long long type data(integers only upto 19 digits will be considered still) and int type data 
output: int data which is the frequency of the input int value in input long long value*/
int frequencyChecker(long long, int);

main()
{
    system("cls");

    long long input;
    int digit = 0;
    int show = 0;
    cout << "Enter a number(only for integers)=> ";
    cin >> input;
    cout << "Enter the number you want to check the frequency of=> " << endl;
    cin >> digit;

    //to invalidate non-integer type data(except floats)
    
    if(input == 0 && digit != 0)
    {
        cout << show;
    }
    else if(input > 0 || input < 0)
    {
        show = frequencyChecker(input, digit);
        cout << show;
    }
    else
    {
        cout << "Error";
    }
}

int frequencyChecker(long long input, int digit)
{
    int total = 0;
    int check;
    for(input; input!=0; input=input/10)
    {
        check = input % 10;
        if(check == digit)
        {
            total++;
        }
    }
    return total;
}
