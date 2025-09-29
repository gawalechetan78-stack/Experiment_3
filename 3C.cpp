
// Find out the quadrant to which the given x and y points belong
// Chetan Gawale 
// 25070123507
// Experiment 03(C)

#include <iostream>

using namespace std;

int main()
{
    float x, y;

    cout << "Enter the coordinates as x and y (separated by space): ";
    cin >> x >> y;

    if (x > 0 && y > 0)
    {
        cout << "The point (" << x << ", " << y << ") belongs to the 1st quadrant" << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << "The point (" << x << ", " << y << ") belongs to the 2nd quadrant" << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << "The point (" << x << ", " << y << ") belongs to the 3rd quadrant" << endl;
    }
    else if (x > 0 && y < 0)
    {
        cout << "The point (" << x << ", " << y << ") belongs to the 4th quadrant" << endl;
    }
    else if (x == 0 && (y > 0 || y < 0))
    {
        cout << "The point lies on the y-axis" << endl;
    }
    else if ((x > 0 || x < 0) && y == 0)
    {
        cout << "The point lies on the x-axis" << endl;
    }
    else
    {
        cout << "The point is at the origin" << endl;
    }

    return 0;
}

/* Output

Enter the coordinates as x and y (separated by space): 3 2
The point (3, 2) belongs to the 1st quadrant

Enter the coordinates as x and y (separated by space): -3 2
The point (-3, 2) belongs to the 2nd quadrant

Enter the coordinates as x and y (separated by space): -3 -2
The point (-3, -2) belongs to the 3rd quadrant

Enter the coordinates as x and y (separated by space): 3 -2
The point (3, -2) belongs to the 4th quadrant

*/
