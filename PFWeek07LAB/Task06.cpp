#include<iostream>
using namespace std;

//program to output the sum of the first 100 natural numbers

main()
{
    system("cls");
    
    int sum=0;
    for(int x=1; x<=101; x++)
    {
        sum = sum + x;
    }
    cout << sum;
}