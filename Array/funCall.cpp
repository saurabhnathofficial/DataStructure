#include <iostream>
using namespace std;

// found = true
// Notfound = false
bool linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            // found
            return true;
        }
    }
    return false;
};
int main()
{
    int arr[5] = {2, 4, 1, 53, 86};
    int target = 86;
    int size = 5;
    bool ans = linearSearch(arr, size, target);

        if (ans == 1)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}