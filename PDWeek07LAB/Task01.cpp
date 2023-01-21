#include<iostream>
using namespace std;

main()
{
    system("cls");

    int rows;
    cout << "Enter the desired number of rows=>";
    cin >> rows;
    // to prevent the user from entering negative value for rows
    if(rows>0)
    {
        for(int outer=rows; outer>=1; outer--)
        {
            for(int inner=1; inner<=outer; inner++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Error";
    }
}