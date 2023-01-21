#include<iostream>
using namespace std;

//function to print the percentage of ranges the input numbers lie in
void printPercentage(int);

main()
{
    system("cls");

    int amount;
    cout << "Enter the amount of numbers(1-1000)=> ";
    cin >> amount;

    // to restrict the amount between 1-1000 as instructed
    if(amount >= 1 && amount <=1000)
    {
        printPercentage(amount);
    }
    else
    {
        cout << "Error";
    }

}

void printPercentage(int amount)
{

    int x=1;
    int y=0;
    int inputs;
    int p1=0,p2=0,p3=0,p4=0,p5=0;
    float total, total_p1, total_p2, total_p3, total_p4, total_p5;

    while(x<=amount)
    {
        cout << "Enter a number(1-1000)=> ";
        cin >> inputs;
        //to restrict any input below or above 1 and 1000 respectively
        if(inputs <= 0 || inputs >=1001)
        {
            y = 1;
            break;
        }
        if(inputs < 200)
        {
            p1 = p1 + 1;
        }
        else if(inputs >= 200 && inputs <=399)
        {
            p2 = p2 + 1;
        }
        else if(inputs >=400 && inputs <= 599)
        {
            p3 = p3 + 1;
        }
        else if(inputs >= 600 && inputs <= 799)
        {
            p4 = p4 + 1;
        }
        else
        {
            p5 = p5 + 1;
        }
        //value of each p is incremented cooresponding to in which range the input lies in
        x++;
    }

    if(y != 1)
    {
        total = p1 + p2 + p3 + p4 + p5;
        total_p1 = p1/total * 100;
        total_p2 = p2/total * 100;
        total_p3 = p3/total * 100;
        total_p4 = p4/total * 100;
        total_p5 = p5/total * 100;

        cout << total_p1 << "%" << endl;
        cout << total_p2 << "%" << endl;
        cout << total_p3 << "%" << endl;
        cout << total_p4 << "%" << endl;
        cout << total_p5 << "%";
    }
    else
    {
        cout << "Error";
    }
}