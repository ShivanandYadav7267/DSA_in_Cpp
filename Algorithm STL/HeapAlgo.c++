#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*Heap Algorithm


std::make_heap: Converts a range into a max-heap
std::push_heap: Insert an element into a max-heap
std::pop_heap: Removes the largest element from a max-heap
std::sort_heap: Sorts a range that represents a max-heap
*/

int main(){

vector<int> array = {10,20,30,40,50,60};


make_heap(array.begin(), array.end());


/*
for(int a: array){
    cout<<a<<" ";
}

array.push_back(39);

push_heap(array.begin(), array.end());
cout<<endl;
for(int b: array){
    cout<<b<<" ";
}


//sort_heap(array.begin(), array.end());
*/

pop_heap(array.begin(), array.end());

for(int a: array){
    cout<<a<<" ";
}

    return 0;
}