#include<iostream>
using namespace std;

int calculateGCD(int, int);
int calculateLCM(int, int, int);

main()
{
    system("cls");

    int num1, num2;
    int GCD, LCM;

    cout << "Enter a Positive integer=> ";
    cin >> num1;
    cout << "Enter another Positive integer=> ";
    cin >> num2;
    
    if(num1 > 0 && num2 > 0)
    {
        GCD = calculateGCD(num1, num2);
        LCM = calculateLCM(num1, num2, GCD);
    
        cout << "GCD=> " << GCD << endl;
        cout << "LCM=> " << LCM;
    }
    else
    {
        cout << "Error";
    }
}

int calculateGCD(int num1, int num2)
{
    int x;
    int y;
    int remainder1;
    int remainder2;

/*the outer for loop will check all the possible numbers that will leave zero remainder
 counting down from the value of the first input*/
    for(x = num1; x > 0; x--)
    {
        remainder1 = num1 % x;
        /*the inner loop then will check all the possible factors counting down from the value of second input 
        for each value of first input that gives zero remainder*/
        if(remainder1 == 0)
        {
            for(y = num2; y > 0; y--)
            {
                remainder2 = num2 % y;
                /*the condition will only be true if both the remainders of the first and second input are zero
                and the numbers that causes those remainders to be zero is the same for both inputs, which is
                the required output and thus we break the inner loop*/
                if(remainder2 == 0 && x == y)
                {
                    break;
                }
            }
            //to break the outer loop 
            if(x == y)
            {
                break;
            }
        }
    }
    return x;
}

int calculateLCM(int num1, int num2, int GCD)
{
    int send;

    send = (num1 * num2) / GCD;
    return send;
}
