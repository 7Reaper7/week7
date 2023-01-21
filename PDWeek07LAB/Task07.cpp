#include <iostream>
using namespace std;

/*funtion to display the average price of the total given cargo and the percentages for how much is stored in each vehicle
input: int variable(turns of cargo to be transported)*/
void calLogistics(int);

main()
{
    system("cls");

    int amount;

    cout << "Enter the count of cargo up for transportation(1-1000)=> ";
    cin >> amount;

    //to restrict the amount to 1-1000
    if(amount >= 1 && amount <= 1000)
    {
        calLogistics(amount);
    }
    else
    {
        cout << "Error";
    }
}

void calLogistics(int amount)
{
    int inputs;
    float tons_minibus = 0, tons_truck = 0, tons_train = 0, total_tons = 0;
    float average_p_per_ton;
    float p_minibus, p_truck, p_train;
    bool flag = 1;

    for (int x = 1; x <= amount; x++)
    {
        // to take multiple inputs depending on the value of the amount variable
        cout << "Enter tonage of cargo for turn " << x << "(1-1000)=> ";
        cin >> inputs;
        // to restrict the amount of cargo to 1-1000 for each turn
        if(inputs >= 1 && inputs <= 1000)
        {
            if(inputs >= 1 && inputs <= 3)
            {
                tons_minibus = tons_minibus + inputs;
            }
            else if(inputs >= 4 && inputs <= 11)
            {
                tons_truck = tons_truck + inputs;
            }
            else
            {
                tons_train = tons_train + inputs;
            }
            total_tons = total_tons + inputs;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        average_p_per_ton = ((200 * tons_minibus) + (175 * tons_truck) + (120 * tons_train)) / total_tons;
        p_minibus = tons_minibus / total_tons * 100;
        p_truck = tons_truck / total_tons * 100;
        p_train = tons_train / total_tons * 100;

        cout << average_p_per_ton << endl;
        cout << p_minibus << "%" << endl;
        cout << p_truck << "%" << endl;
        cout << p_train << "%";
    }
    else
    {
        cout << "Error";
    }
}