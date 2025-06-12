#include <iostream>
#include <deque>
using namespace std;

int main(){


    deque<int> dq;

    dq.push_back(10);
    //10
    dq.push_front(10);
    //10,10
    dq.push_back(20);
    //10,10,20
    dq.push_front(20);
    //20,10,10,20

    cout<<dq.size()<<endl;

    // for(auto it = dq.begin(); it != dq.end();  it++){
    //     cout<<*it<<" ";
    // }

    deque<int> dq1;

    dq1.push_back(1);
    dq1.push_back(2);
    dq1.push_back(3);
    dq1.push_back(4);
    dq1.push_back(5);
    dq1.push_back(6);
    dq1.push_back(7);

cout<<"Before swaping : ";
deque<int> :: iterator it = dq.begin();
while (it != dq.end())
{
  cout<<*it<<" ";
  it++;
}

    dq.swap(dq1);



    cout<<"After swaping : ";
deque<int> :: iterator it2 = dq.begin();
while (it2 != dq.end())
{
  cout<<*it2<<" ";
  it2++;
}



dq.clear();
cout<<endl<<"dq size is : "<<dq.size();

dq.insert(dq.end(), 30348);
cout<<endl<<dq[7];


    return 0;
}