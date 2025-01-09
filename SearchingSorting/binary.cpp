#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Steps
// 1: array sort Asc / Dsc
// 2: first and last find
// 3: find mid of arr
// 4: if target is greter then arr[mid] : traverse right
// 5: if target is less then arr[mid] : traverse left

int binarySearch(vector<int> p, int target, int n)
{

    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (p[mid] == target)
        {
            return mid;
        }
        else if (target > p[mid])
        {
            start = mid + 1;
        }
        else if (target < p[mid])
        {
            end = mid - 1;
        }
        // mid update error aati he
        mid = (start + end) / 2;
    }

    return -1;
}
int firstOccurence(vector<int> p, int target, int n)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (p[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (target > p[mid])
        {
            start = mid + 1;
        }
        else if (target < p[mid])
        {
            end = mid - 1;
        }
        // mid update error aati he
        mid = (start + end) / 2;
    }

    return ans;
}
int lastOccurnce(vector<int> p, int target, int n)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (p[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (target > p[mid])
        {
            start = mid + 1;
        }
        else if (target < p[mid])
        {
            end = mid - 1;
        }
        // mid update error aati he
        mid = (start + end) / 2;
    }

    return ans;
}
int totalOccurence(vector<int>p,int target,int n){
    int firstOcc = firstOccurence(p,target,n);
    int lastOcc = lastOccurnce(p,target,n);
    int totalOcc = lastOcc - firstOcc + 1;

    cout<<"hi"<<totalOcc;
    return totalOcc;
}
int missingElem(vector<int>p,int n){
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = (start + end)/2;
    while (start<=end)
    {
        int diff = p[mid] - mid;

        if (diff == 1)
        {
            start = mid + 1;
        }else{
            ans = mid;
            end = mid - 1;
        } 
    }
    
     if (ans + 1 == 0) 
        {
            return n+1;
        }
        
    return ans + 1;
}

// int peakFromMountain(vector<int>p)


int maxPivotElem(vector<int> p, int target, int n){
    
}
int main()
{
    vector<int> p = {2,4,6,10,12};
    sort(p.begin(), p.end());
    int target = 383;
    int n = p.size();

    // int ans = binarySearch(p, target, n);
    // int ans = firstOccurence(p, target, n);
    // int ans = lastOccurence(p, target, n);
    // int ans = totalOccurence(p, target, n);
  
    int ans = missingElem(p,n);
    cout<<"Mising elem is : "<<ans;
    // if (ans == -1)
    // {
    //     cout << "Target Not Found!!";
    // }
    // else
    // {
    //     cout << "Target Found at Index : " << ans;
    // }  

    return 0;
}