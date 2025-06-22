#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/*
Iterators and Iterating Algorithms:

std::for_each: Applies a function to each element in a range.

std::find: Searches for a specific element in a range.

std::find_if: Searches for the first element that satisfies a given predicate.

std::count: Counts the occurrences of a value in a range.

std::count_if: Counts the elements that satisfy a given predicate.

std::sort: Sorts the elements in a range in ascending order.

std::reverse: Reverses the order of elements in a range.

std::rotate: Rotates elements in a range.

std::unique: Removes duplicate elements from a sorted range.

std::partition: Divides elements in a range into two groups based on a predicate.
*/

void printDouble(int a){
    cout<<2*a<<" ";
}
bool checkEven(int a){
    return a%2 == 0;
}

int main (){
/*
vector<int> arr = {10,20,30,40,50,60,70};

    rotate(arr.begin(), arr.begin()+4, arr.end());
    
    for(int a : arr){
        cout<<a<<" ";
    }
    */
/* */
vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
/*
auto it = partition(arr.begin(), arr.end(), checkEven);

for(int b : arr){
    cout<<b<<" ";
}
*/

/*
unique(arr.begin(), arr.end());

for(int a : arr){
    cout<<a << " ";
}
cout<<endl<<endl;
auto it = unique(arr.begin(), arr.end());
arr.erase(it, arr.end());

for (int a : arr){
    cout<<a<<" ";
}
*/



// sort(arr.begin(), arr.end());

// for(int a : arr){
//     cout<< a <<" ";
// }
// cout<<endl;
// reverse(arr.begin(), arr.end());

// for(int a : arr){
//     cout<<a<<" ";
//     }
   
// int it = count_if(arr.begin(), arr.end(), checkEven);
// cout<<it<<endl;


// int target = 4;
// int ans = count(arr.begin(), arr.end(), target);
// cout<<ans<<endl;

// for_each(arr.begin(), arr.end(), printDouble);  /// function call using for_each
// auto it = find_if(arr.begin(), arr.end(), checkEven);
// cout<<*it<<endl;
    return 0;
}