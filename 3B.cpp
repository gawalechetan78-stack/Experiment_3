
// Calculate the average of marks and display the respective grade
// Chetan Gawale 
// 25070123507
// Experiment 03(B)

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, average;

    cout << "Enter the marks of 5 subjects (separated by space): ";
    cin >> a >> b >> c >> d >> e;

    average = (a + b + c + d + e) / 5;

    if (average <= 100 && average > 90)
    {
        cout << "O grade" << endl;
    }
    else if (average <= 90 && average > 80)
    {
        cout << "A+ grade" << endl;
    }
    else if (average <= 80 && average > 70)
    {
        cout << "A grade" << endl;
    }
    else if (average <= 70 && average > 60)
    {
        cout << "B+ grade" << endl;
    }
    else if (average <= 60 && average > 50)
    {
        cout << "B grade" << endl;
    }
    else if (average <= 50 && average > 40)
    {
        cout << "C grade" << endl;
    }
    else if (average <= 40 && average > 30)
    {
        cout << "D grade" << endl;
    }
    else
    {
        cout << "F grade" << endl;
    }

    return 0;
}

/* Output

Enter the marks of 5 subjects (separated by space): 92 95 86 90 88
A+ grade

*/
