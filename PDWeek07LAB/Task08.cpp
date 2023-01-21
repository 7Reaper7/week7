#include<iostream>
using namespace std;

main()
{
    system("cls");

    int rows;
    int columns;
    int m=1;

    cout << "Enter the desired number of rows=>";
    cin >> rows;

    //to prevent negative numbers from being entered
    if(rows > 0)
    {
        columns = 2 * rows;
        for(int outer =1 ; outer <= rows; outer++)
        {
            for(int inner = 1; inner <= columns; inner++)
            {
                if(inner <= m || inner >= columns - m + 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
            m=m+1;
            /* the value of m will be incremented for every next iteration of outer loop so the number of asterisk
            are increased and spaces in between are decreased every next row*/ 
        }
    }
    else
    {
        cout << "Error";
    }
}