#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector initialisation

    vector<int> vec; //empty vec initialized
    vector<int> vec(12,1);  //vec initialize size 12 with 0s
    vector<int> vec = {2, 3, 4, 5, 6}; // vec initialized with values
    vector<int>vec2(vec); //vec2 initialzed with vec values

    // Insert Elements in vector
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    //delete last element in vector
    vec.pop_back();
    vec.emplace_back();

    //Printing first elem in vector
    cout<<vec.front();

    //Printing Last elem in vector
    cout<<vec.back();

    // *****other functions

    // erase , empty , insert , clear (costly functions)

    // -- erase will use for deleting element of vector from an spacifig address/index

    vec.erase(vec.begin());//delete begining elem
    vec.erase(vec.begin()+1); //delete specific index value 
    vec.erase(vec.begin(),vec.begin()+2); // delete between range

    // -- insert used for inserting value on specific index
    vec.insert(vec.begin()+1,99);

    // -- clear will used for clear the whole vector , it will clear vector but the vec.capacity(); exist of vector
    vec.clear();

    // -- empty will used for checking vector is empty or not it will return boolean
    cout<<vec.empty();
   
    // *****Vector iterator******

    cout<<*p.begin(); // For achieving first location
    cout<<*p.end(); // it will always points the last elems next position

    return 0;
}