#include <iostream>
using namespace std;

/*function to print the amount of patients treated and untreated
input: int variable(the number of days)*/
void treatment(int);

main()
{
    system("cls");

    int period;

    cout << "Enter the time period in days(1-1000)=> ";
    cin >> period;

    //to restrict the amount of days to 1-1000
    if(period >= 1 && period <= 1000)
    {
        treatment(period);
    }
    else
    {
        cout << "Error";
    }
}

void treatment(int period)
{
    int patients, doctors = 7, treated, untreated, total_treated = 0, total_untreated = 0;
    int y;

    for(int x = 1; x <= period; x++)
    {
        //to take multiple inputs of patients cooresponding to the amount of days
        cout << "Enter the amount of patients for Day " << x << "(0-10000)=> ";
        cin >> patients;
        //to restrict the number of patients to 0-10000
        if(patients >= 0 && patients <= 10000)
        {
            //to increment doctors for every third day
            if(x % 3 == 0)
            {
                doctors = doctors + 1;
            }

            if(patients < doctors)
            {
                untreated = 0;
                treated = patients;
            }
            else
            {
                untreated = patients - doctors;
                treated = doctors;
            }
            total_treated = total_treated + treated;
            total_untreated = total_untreated + untreated;

            y = x;
        }
        else
        {
            break;
        }
    }
    if(y == period)
    {
        cout << "Treated patients: " << total_treated << endl << "Untreated patients: " << total_untreated;
    }
    else
    {
        cout << "Error";
    }
}