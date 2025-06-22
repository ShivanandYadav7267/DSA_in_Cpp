#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*Searching and Finding Algorithm
std::binary_search : Chicks if value exists in a sorted range
std::lower_bund: Finds the finds the first element greate or equal to a value in a sorted range
std:: upper_bound: Finds the first element greater than a value in a sorted range
std::equal_range: Finds a range of elements equal to a bvalue in a sorted range

*/
int main () {

vector<int> arr;

arr.push_back(10);
arr.push_back(20);
arr.push_back(30);
arr.push_back(40);
arr.push_back(50);
 
 int target = 20;
// bool it = binary_search(arr.begin(), arr.end(), target);

// cout<< it<<endl;

//auto it = lower_bound(arr.begin(), arr.end(), target);

//auto it = upper_bound(arr.begin(), arr.end(), target);




cout<<*it<<endl;

    return 0;
}