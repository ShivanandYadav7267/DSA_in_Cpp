#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*Min and Max Algorithm
std::min: Return the smaller of two values
std::max: Return the larger of two values
std::min_element: Finds the smallest element in a range
std::max_element: Finds the largest element in a range
*/

int main (){

int a = 20;
int b = 30;

cout<<"Max value is "<<max(a,b)<<endl;
cout<<"Min value is "<<min(a,b)<<endl;

vector<int> arr;
arr.push_back(10);
arr.push_back(230);
arr.push_back(30);
arr.push_back(400);
// auto it = min_element(arr.begin(), arr.end());
//  cout<< *it<<endl;

  auto it = max_element(arr.begin(), arr.end());
cout<< *it<<endl;



    return 0;
}