#include<iostream>
#include<cmath>
using namespace std;

/*function to return the remaining value of money after subtracting the value of washing machine
input: two int variables(age of lily and unit price for each toy) and one float variable(price of washing machine)
output: float type data (difference between calculated saved money and value of washing machine variable)*/
float calculateMoney(int, int, float);

main()
{
    system("cls");

    int age;
    int toy_price;
    float total;
    float washing;

    cout << "Enter Lily's age=> ";
    cin >> age;
    cout << "Enter the price of the washing machine=> ";
    cin >> washing;
    cout << "Enter the price each toy was sold for=> ";
    cin >> toy_price;

    // to restrict the age of lily to 1-77, price of washing machine to 1-1000 and toy unit price to 0-40 as instructed
    if(age >= 1 && age <=77 && washing >= 1 && washing <= 10000 && toy_price >=0 && toy_price <= 40)
    {
        total = calculateMoney(age, toy_price, washing);

        if(total >= 0)
        {
            cout << "YES! " << total;
        }
        else
        {
            total =  -1 * total;
            cout << "NO! " << total;
        }
    }
    else
    {
        cout << "Error";
    }
}

float calculateMoney(int age, int toy_price, float washing)
{

    int money_count=0, saved_money=0, increase=10, toy_count=0, toy_sold=0;
    float total_money=0;

    for(int x=1; x<=age; x++)
    {
        if(x%2==0) // for every even number of lily's age
        {
            money_count = money_count + 1;
            saved_money = saved_money + increase;
            increase = increase + 10;
        }
        else // for every odd number of lily's age
        {
            toy_count = toy_count + 1;
        }
    }

    saved_money = saved_money - money_count;
    toy_sold = toy_price * toy_count;

    total_money = saved_money + toy_sold;

    total_money = total_money - washing;

    return total_money;
}