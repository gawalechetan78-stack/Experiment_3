
// Find whether a given number is postive or negative
// Chetan Gawale
// 25070123507
// Experiment 03(A)

#include <iostream>

using namespace std;

int main()
{
    float a;

    cout << "Enter an integer: ";
    cin >> a;

    if (a > 0)
    {
        cout << a << " is a positive value" << endl;
    }
    else if (a < 0)
    {
        cout << a << " is a negative value" << endl;
    }
    else
    {
        cout << a << " is neither negative nor positive" << endl;
    }

    return 0;
}

/* Output

Enter an integer: 5
5 is a positive value

Enter an integer: -5
-5 is a negative value

*/
