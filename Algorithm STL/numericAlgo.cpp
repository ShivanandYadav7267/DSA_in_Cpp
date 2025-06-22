#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
using namespace std;

/* Numeric algorithms
std:: accumulate: Computes the sum of elemnts in a range
std:: inner_product: Computes the inner product of two ranges.
std:: partial_sum: Computes the partial sums of a range.
std:: iota: Fills a range with incrementing values.

*/

int main (){
/*
vector<int> arr = {10,20,30,40,50};

int totalSum = accumulate(arr.begin(), arr.end(), 0);
cout<<totalSum<<endl;



vector<int> arr2;
arr2.push_back(1);
arr2.push_back(2);
arr2.push_back(3);
arr2.push_back(4);
arr2.push_back(5);


int total = inner_product(arr.begin(),  arr.end(), arr2.begin(), 0);
cout<<total<<endl;
*/


/*Partial sum 
vector<int> arr2;

arr2.push_back(1);
arr2.push_back(2);
arr2.push_back(3);
arr2.push_back(4);
arr2.push_back(5);

vector<int> result(arr2.size());
partial_sum(arr2.begin(), arr2.end(), result.begin());

for ( int b : result){
    cout<<b<<" ";
}
*/


/*iota 
vector<int> array(10);

iota( array.begin(), array.end(), 1);

// for(int a : array){
    //     cout<<a<<" ";
// }

for(int i= 0; i<5; i++){
    
for(int j = 4-i; j>=0; j--){
    cout<<array[j]<<" ";
}

cout<<endl;
}
*/

/*pattern
for(int i= 0; i<6; i++){
    
for(int j = 5-i; j>=0; j--){
    cout<<j<<" ";
}

cout<<endl;
}
*/



    return 0;
}