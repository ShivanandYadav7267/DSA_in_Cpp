#include <iostream>
#include <queue>
using namespace std;

int main (){


//creation

priority_queue<int> pq;

//max-heap -> maximum value -> Highest priority

pq.push(19);
//19
pq.push(16);
//19, 16
pq.push(49);
//49,19, 16
pq.push(12);
//49,19,16,12
pq.push(569);
//569,49,19,16,12
pq.push(166);
//569,166,49,19,16,12
pq.push(189);
//569,189,169,49,19,16,12


//top element -> Heighest priority
cout<<pq.top();


pq.pop();   //Heighest priority ->pop

cout<<endl<<pq.top();





///Min Priotity queue


priority_queue<int, vector<int>, greater<int>> pqMin;
pqMin.push(10);
pqMin.push(30);
pqMin.push(39);
pqMin.push(28);
pqMin.emplace
cout<<endl<<pqMin.top();




    return 0;
}