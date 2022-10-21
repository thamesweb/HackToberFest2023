#include <bits/stdc++.h>
using namespace std;

void bresenhem(int x1, int y1, int x2, int y2)
{
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);

    int length = dx > dy ? dx : dy; // No. of points to be printed
    float m = dy / dx;              // Slope of the line
    int x = x1, y = y1;             // Initial coordinates

    int i = 1;

    cout << x << " " << y << endl; // Printing the initial coordinates

    // For Slope <= 1
    if (m <= 1)
    {
        int d = 2 * dy - dx;                 // Calculating the initial value of d
        int i1 = 2 * (dy - dx), i2 = 2 * dy; // Calculating the values of i1 and i2
        int y_incr = (x2 > x1) ? 1 : -1;     // Calculating the increment of y

        while (i <= length)
        {
            if (d <= 0) // If d is less than or equal to 0
            {
                // In this case, y will not be incremented
                d += i2;
                x++;
            }
            else
            {
                y += y_incr;
                x++;
                d += i1;
            }
            cout << x << " " << y << endl;
            i++;
        }
    }

    // For Slope > 1
    if (m > 1)
    {
        int d = 2 * dx - dy;                 // Calculating the initial value of d
        int i1 = 2 * (dx - dy), i2 = 2 * dx; // Calculating the values of i1 and i2
        int x_incr = (y2 > y1) ? 1 : -1;     // Calculating the increment of x

        while (i <= length)
        {
            if (d <= 0) // If d is less than or equal to 0
            {
                // In this case, x will not be incremented
                d += i2;
                y++;
            }
            else
            {
                x += x_incr;
                y++;
                d += i1;
            }
            cout << x << " " << y << endl;
            i++;
        }
    }
}

int main()
{
    int x1, y1, x2, y2;

    cout << "Enter Coordinate 1: ";
    cin >> x1 >> y1;
    cout << "Enter Coordinate 2: ";
    cin >> x2 >> y2;

    cout << "Selected Coordinates: " << endl;
    bresenhem(x1, y1, x2, y2);
    return 0;
}
