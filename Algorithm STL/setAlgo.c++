#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



/*Set Algorithm:

std::set_union: Computes the union of two sorted ranges.

std::set_intersection: Computes the intersection of two sorted ranges.

std::set_difference: Computes the difference between two sorted ranges.

std::set_symmetric_difference: Computes the symmetric difference of two sorted ranges.
*/

int main(){


vector<int> array = {10,20,30,40,50,60};
vector<int> arr;
arr.push_back(10);
arr.push_back(20);
arr.push_back(30);
arr.push_back(400);

vector<int> result;

set_symmetric_difference(array.begin(), array.end(), arr.begin(), arr.end(),
inserter(result, result.begin()));

for(int a: result){

    cout<<a<<" ";
}cout<<endl;
/*
set_difference(array.begin(), array.end(), arr.begin(), arr.end(),
inserter(result, result.begin()));

for(int a: result){
    
cout<<a<<" ";
}cout<<endl;
*/
/*
set_intersection(array.begin(), array.end(), arr.begin(), arr.end(),
inserter(result, result.begin()));

for(int a: result){
    
cout<<a<<" ";
}cout<<endl;
*/
/*
set_union(array.begin(), array.end(), arr.begin(), arr.end(),
inserter(result, result.begin()));

for(int a: result){
    
cout<<a<<" ";
}cout<<endl;
*/

    return 0;
}