#include<iostream>
using namespace std;

/*function to return the amount of money left or required for survival
input: one float(amount of money inherited), one int(number of year to live)
output: float data type(difference between calculated required amount of money and amount inherited)*/
float calculatePrice(float, int);

main()
{
    system("cls");

    int year;
    float left;
    float inheritance;
    cout << "Enter the amount of inheritance Ivan received=> ";
    cin >> inheritance;
    cout << "Year, until which he has to live in the past(inclusive)=> ";
    cin >> year;

    // to restrict the amount of inheritance to 1-1000000 and years to live in past to 1801-1900 as instructed
    if(inheritance >= 1 && inheritance <= 1000000 && year >= 1801 && year <= 1900)
    {
        left = calculatePrice(inheritance, year);

        if(left >= 0)
        {
            cout << "Yes! he will live a carefree life and will have " << left << " dollars left";
        }
        else
        {
            // the difference will be negative if required money is less than inherited money and thus the reason to multiply by -1
            left = -1 * left;
            cout << "No! he will need " << left << " dollars to survive";
        }
    }
    else
    {
        cout << "Error";
    }

}

float calculatePrice(float inheritance, int year)
{
    int odd_spend=0, even_spend=0, total_spend=0, age=0;
    float remaining=0;

    for(int x=1800; x<=year; x++)
    {
        if(x%2 == 0) //for every even year
        {
            even_spend = even_spend + 12000;
        }
        else //for every odd year
        {
            age = (x%1800) + 18;
            odd_spend = odd_spend + (12000 + (50 * age));
        }
    }

    total_spend = even_spend + odd_spend;

    remaining = inheritance - total_spend;

    return remaining;
}