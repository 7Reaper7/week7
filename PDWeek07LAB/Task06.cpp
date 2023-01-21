#include <iostream>
using namespace std;

main()
{
    system("cls");

    int amount;
    int x = 1;
    int inputs;
    float p1 = 0, p2 = 0, p3 = 0;
    float total_p1, total_p2, total_p3;
    string stop = "no";

    cout << "Enter the amount of numbers(1-1000)=> ";
    cin >> amount;

    //to restrict the amount to 1-1000
    if(amount >= 1 && amount <= 1000)
    {
        while (x <= amount)
        {
            // to take multiple inputs cooresponding to the amount of number
            cout << "Enter a number(1-1000)=> ";
            cin >> inputs;
            // to restrict the inputs to 1-1000
            if(inputs >= 1 && inputs <= 1000)
            {
                /*using multiple ifs so each input that is divisible by any one or more of the given numbers
                is stored for all its respective dividends*/
                if(inputs % 2 == 0)
                {
                    p1 = p1 + 1;
                }
                if(inputs % 3 == 0)
                {
                    p2 = p2 + 1;
                }
                if(inputs % 4 == 0)
                {
                    p3 = p3 + 1;
                }
                x++;
            }
            else
            {
                stop = "yes";
                break;
            }
        }
        if(stop != "yes")
        {
            total_p1 = p1 / amount * 100;
            total_p2 = p2 / amount * 100;
            total_p3 = p3 / amount * 100;

            cout << total_p1 << "%" << endl;
            cout << total_p2 << "%" << endl;
            cout << total_p3 << "%";
        }
        else
        {
            cout << "Error";
        }
    }
    else
    {
        cout << "Error";
    }
}