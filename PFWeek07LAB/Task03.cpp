#include<iostream>
using namespace std;

/*function to determine the total digits in a given number
inputs: long long data type integer (to increase the storage capacity to accommodate larger numbers (integers only upto 19 digits will be considered still))
output: total number of digits in the integer*/
int totalDigits(long long);

main()
{
    system("cls");

    long long input;
    int show=0;
    cout << "Enter a number(only for integers)=> ";
    cin >> input;

    //to invalidate non-integer type data(except floats)
    if(input == 0)
    {
        show = show + 1;
        cout << show;
    }
    else if(input > 0 || input < 0)
    {
        show = totalDigits(input);
        cout << show;
    }
    else
    {
        cout << "Error";
    }
}

int totalDigits(long long input)
{
    int total=0;
    for(input; input!=0; input=input/10)
    {
            total++;
    }
    return total;
}
