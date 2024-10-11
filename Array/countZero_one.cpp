#include <iostream>
using namespace std;

void countZeroOne(int arr[], int size)
{
    cout << "Bit counter in a array \n";
    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            oneCount++;
        }
        if (arr[i] == 0)
        {
            zeroCount++;
        }
    }

    cout << "zeroCount : " << zeroCount << endl;
    cout << "oneCount : " << oneCount;
}
int main()
{
    int arr[] = {0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1};
    int size = 10;

    countZeroOne(arr, size);
    return 0;
}