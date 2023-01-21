#include<iostream>
using namespace std;

/*funtion to print the above half of the required triangle
input: int variable(rows)*/
void aboveHalf(int);
/*funtion to print the below half of the required triangle
input: int variable(rows)*/
void belowHalf(int);

main()
{
    system("cls");

    int rows;
    cout << "Enter the desired number of rows=>";
    cin >> rows;
    
    // to prevent the user from entering negative value for rows
    if(rows>0)
    {
        aboveHalf(rows);
        belowHalf(rows);
    }
    else
    {
        cout << "Error";
    }

}

//rows halfed for each function so the shape is printed correctly
void aboveHalf(int rows)
{
    int relate = rows/2;

    for(int outer = 1; outer<=rows/2; outer++)
    {
        for(int space = relate; space>=1; space--)
        {
            cout << " ";
        }
        relate = relate - 1;
        for(int ast = 1; ast<=outer; ast++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void belowHalf(int rows)
{
    int relate2 = 1;

    for(int outer = rows/2; outer>=1; outer--)
    {
        for(int space = 1; space<=relate2; space++)
        {
            cout << " ";
        }
        relate2 = relate2 + 1;
        for(int ast = rows/2 + 1; ast<=(rows/2) + outer; ast++)
        {
            cout << "*";
        }
        cout << endl;
    }
}