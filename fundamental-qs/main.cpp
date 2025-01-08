#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
#include <math.h>
#include <unordered_set>
using namespace std;

// Palindrom check

bool palindromCheck(int i) {
	string s = to_string(i);
	int end = s.length()-1;
	int start = 0;

	while(start<end) {
		if(s[start] != s[end]) {
			return false;
		}
		start++;
		end--;
	}
	return true;

}

// Calculate factorial

int factorial(int i) {
	int result = 1;
	while(i>0) {
		result *= i;
		i--;
	}
	return result;
}

// Reverse a String

void reverseStr(string s) {
	int start = 0;
	int end = s.length()-1;
	while(start < end) {
		swap(s[start],s[end]);
		start++;
		end--;
	}
}

// Maximum num in Arr

int maxArr(vector<int>&arr) {
	// auto max = max_element(arr.begin(),arr.end());  // using STL
	// return *max;
	int max = INT_MIN;
	for(int i = 0; i < arr.size(); i++) {
		if(arr[i]>max) {
			max = arr[i];
		}
	}
	return max;
}

// Minimum num in Arr

int minArr(vector<int>&arr) {

	// auto min = min_element(arr.begin(), arr.end()); // using STL
	// return *min;
	int min = INT_MAX;
	for(int i = 0; i < arr.size(); i++) {
		if(arr[i]<min) {
			min = arr[i];
		}
	}
	return min;
}

// Prime Number

bool primNumber(int i) {
	if(i <= 1) {
		return false;
	}
	for(int j = 2; j < sqrt(i); j++) {
		if(i%j == 0) {
			return false;
		}
	}
	return true;
}

// Sorting an Array
void sortArr(vector<int>&arr) {
	for(int i = 0; i < arr.size()-1; i++) {
		for(int j = i + 1; j < arr.size(); j++) {
			if(arr[i] > arr[j]) {
				swap(arr[i],arr[j]);
			}
		}
	}

}

// Merge Two sorted Array

void mergArr(vector<int>&p,vector<int>&s) {


	// p.insert(p.end(),s.begin(),s.end());    // using STL

	for(int i = 0; i < s.size(); i++) {
		p.push_back(s[i]);
	}
	sortArr(p);

}

// Sum of Digits

int sumOfDigits(int i) {
	int sum = 0;

	while(i>0) {
		sum += i%10;
		i /= 10;
	}
	return sum;
}

// Anagram check

bool anagramCheck(string s1,string s2) {

	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());

	if(s1.length() != s2.length()) {
		return false;
	}

	return s1 == s2;
}

// Remove Duplicates from an Array

void removeDpl(vector<int>&arr) {
	unordered_set<int>s;
	vector<int>result;
	
	for(auto i:arr){
	    if(s.find(i) == s.end()){
	        result.push_back(i);
	        s.insert(i);
	    }
	}
	for(auto k:result){
	    cout<<k;
	}

}
<<<<<<< Tabnine <<<<<<<
int main()//-
{//-
	vector<int>arr1 = {1,3,43,3,2,3,32,3};//-
// 	vector<int>arr2 = {0,6,7,5,8};//-
/**//+
 * @brief Removes duplicate elements from a vector and prints the result.//+
 *//+
 * This function takes a vector of integers as input, removes any duplicate elements,//+
 * and then prints the resulting vector. It uses an unordered set to keep track of//+
 * unique elements and a new vector to store the result.//+
 *//+
 * @param arr The input vector of integers.//+
 *//+
 * @return This function does not return a value. It prints the result directly.//+
 *///+
void removeDpl(vector<int>& arr) {//+
    unordered_set<int> s;//+
    vector<int> result;//+

//  mergArr(arr1,arr2);//-
//-
//  for(auto i:arr1){//-
//     cout<<i;//-
//   }//-
//-
// string s1,s2;//-
// cin>>s1>>s2;//-
//-
// cout<<anagramCheck(s1,s2);//-
//-
	removeDpl(arr1);//-
    for (auto i : arr) {//+
        if (s.find(i) == s.end()) {//+
            result.push_back(i);//+
            s.insert(i);//+
        }//+
    }//+
    for (auto k : result) {//+
        cout << k;//+
    }//+
}
>>>>>>> Tabnine >>>>>>>// {"conversationId":"95b73632-228a-4b7e-94f5-2f7b561c09db","source":"instruct"}