#include <iostream>
#include <vector>
#include <forward_list>
#include <list>
using namespace std;
/*

Type	                Description
Input Iterator	        Read-only access, single-pass (e.g., istream_iterator)
Output Iterator	        Write-only access, single-pass (e.g., ostream_iterator)
Forward Iterator        Read/write, multi-pass allowed (e.g., forward_list)
Bidirectional Iterator	Can move forward and backward (e.g., list, set, map)
Random Access Iterator	Fast access to any element using arithmetic (e.g., vector, deque)
*/

int main() {

    vector<int> arr = {10,20,30,40,50};
/*
vector<int>::iterator it = arr.begin();

for(int a: arr){
    cout<<a+7<<" ";
}
*/

/*Backward move
vector<int> :: iterator it = arr.end();
while(it != arr.begin()){
    it--;
    cout<<*it<<" ";
}
*/
//Random access
vector<int> :: iterator it = arr.begin() + 4;

cout<<*it<<endl;








// list<int> myList;
// myList.push_back(10);
// myList.push_back(20);
// myList.push_back(30);

//Forward move
/*
list<int>:: iterator it = myList.begin();
while (it != myList.end())
{
    //writing
    *it = *it + 2;
    //reading
    cout<< *it<<" ";
    //forward move
    it++;
    
}
*/

/*Backward move

list<int>:: iterator it = myList.end();
while (it != myList.begin())
{
    //Backward move
    it--;
    //writing
    *it = *it + 2;
    //reading
    cout<< *it<<" ";  
}
*/


    /*Forward_iterator
    forward_list<int> list;
    list.push_front(10);
    list.push_front(20);
    list.push_front(30);

    forward_list<int>:: iterator it = list.begin();
     while(it != list.end()){
        //cout<<*it<<" ";
*it = *it + 5;
        it++;
    } 
    
    it = list.begin();
    while(it != list.end()){
        cout<<*it<<" ";
        it++;
    }cout<<endl;
*/



/*
vector<string> language = {"Java", "C++", "python"};


vector<string> ::iterator itr = language.begin();

// cout<<*itr<<" ";

// for(itr = language.begin(); itr != language.end(); itr++){

//     cout<<*itr<<" ";  // output --> Java C++ python 
// }cout<<endl;
*/





    return 0;
}