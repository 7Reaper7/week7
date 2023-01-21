#include<iostream>
using namespace std;

/*function to return the number of dots for the given triangle number of a series
input: int variable(the number of triangle in a series you want to find out the number of dots for)
output: int type data(number of dots for the required triangle)*/
int triangle(int);

main()
{
    system("cls");

    int tri_number;
    int show;

    cout << "Enter the triangle number=> ";
    cin >> tri_number;
    
    //to restrict a negative or zero input
    if(tri_number>0)
    {
        show = triangle(tri_number);
        cout << show;
    }
    else
    {
        cout << "Error";
    }
}

int triangle(int tri_number)
{
    int value=0;
    
    for(int T = 1; T<=tri_number; T++)
    {
        value = value + T; 
    }
    return value;
}