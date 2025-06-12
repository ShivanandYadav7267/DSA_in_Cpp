#include <iostream>
#include <queue>
using namespace std;


int main () {

queue<int> myQueue;

myQueue.push(10);
myQueue.push(20);
myQueue.push(30);
myQueue.push(40);

cout<<myQueue.size();

myQueue.pop();

cout<<endl<<myQueue.size();

if(myQueue.empty() ==true){
    cout<<endl<<"Queue i empty.";
}else{
    cout<<endl<<"Queue is not empty.";
}
cout<<endl<<"front -> "<<myQueue.front();
cout<<endl<<"End -> "<<myQueue.back();
    return 0;



    queue<int> first;
    queue<int> second;

    first.swap(second);
}



