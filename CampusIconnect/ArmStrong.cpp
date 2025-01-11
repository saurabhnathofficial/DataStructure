// An Armstrong number is a number that is equal to the sum of its own digits, each raised to the power of the number of digits

#include <iostream>
#include <math.h>
using namespace std;


int r(int n)
{
    int m;
    int c = 0;
    int s = 0;

    while (n)
    {
        c++;
        n /= 10;
    }
    while (m)
    {
        int r = m % 10;
        s += pow(r, c);
        m /= 10;
    }
    return s;
}
int main()
{
    int a, b, x, y, c = 0;

    cout << "Enter two No: ";
    cin >> a >> b;

    x = a > b ? a : b;
    y = a < b ? a : b;

    for (int i = y; i <= x; i++)
    {
        if (i == r(i))
        {
            c++;
            cout << c << " ";
        }
    }
    return 0;
}