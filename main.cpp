#include <iostream>
#include <cmath>

// picture 13

using namespace std;

float x;

float line(int x)
{
    float y = 0;
    if (x >= -5 && x < -3)
    {
        return x + 3;
    }
    if (x >= -3 && x < 0)
    {
        return sqrt(9 - (x * x));
    }
    if (x >= 0 && x < 6)
    {
        return -0.5 * (x - 6);
    }
    if (x >= 6 && x <= 9)
    {
        return x - 6;
    }
    return 0;
}


float main()
{
    for (int i = -5; i <= 9; i++)
    {
        cout << "x = " << i << "\ty = " << line(i) << endl;
    }
}
