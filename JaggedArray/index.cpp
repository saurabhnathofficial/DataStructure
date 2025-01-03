#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> arr;

    vector<int> vect1(3, 91);
    vector<int> vect2(7, 92);
    vector<int> vect3(2, 3);
    vector<int> vect4(4, 9);

    arr.push_back(vect1);
    arr.push_back(vect2);
    arr.push_back(vect3);
    arr.push_back(vect4);
 
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}