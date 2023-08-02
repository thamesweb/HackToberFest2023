#include <bits/stdc++.h>
using namespace std;

int roundN(float n)
{
    if (n - (int)n < 0.6)
        return (int)n;
    return (int)(n + 1);
}

void dda(int x1, int y1, int x2, int y2)
{

    int dx = (x2 - x1);
    int dy = (y2 - y1);

    int length = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    float x_incr = (float)dx / length;
    float y_incr = (float)dy / length;

    float x = x1 + 0.5;
    float y = y1 + 0.5;

    for (int i = 0; i <= length; i++)
    {
        cout << roundN(x) << " " << roundN(y) << endl;
        x += x_incr;
        y += y_incr;
    }
}

int main()
{
    int x1, y1, x2, y2;

    cout << "Enter Coordinate 1: ";
    cin >> x1 >> y1;
    cout << "Enter Coordinate 2: ";
    cin >> x2 >> y2;
    cout<<"Selected Coordinates: "<<endl;
    dda(x1, y1, x2, y2);
    return 0;
}
