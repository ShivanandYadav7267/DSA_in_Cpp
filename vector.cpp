#include <iostream>
#include <vector>
using namespace std;

/*
Member Functions:

begin(): Returns an iterator pointing to the first element in the list.

end(): Returns an iterator pointing to the past-the-end element in the list.

size(): Returns the number of elements in the list.

empty(): Checks if the list is empty (i.e., whether its size is 0).

front(): Accesses the first element in the list.

back(): Accesses the last element in the list.

push_back(const T& value): Adds an element to the end of the list.

pop_back(): Removes the last element from the list.

insert(iterator position, const T& value): Inserts a new element before the specified position in the list.

erase(iterator position) or erase(iterator first, iterator last): Removes one or more elements from the list starting at the specified position.

clear(): Removes all elements from the list, which are destroyed, and leaves it with a size of 0.

swap(other): Swaps the contents of the list with those of another list of the same type, including their sizes.

pop_front(): Removes the first element from the list.

push_front(const T& value): Adds an element to the beginning of the list.

remove(const T& value): Removes all elements from the list that are equal to the specified value.
*/

/*
int main (){
    vector<int> arr;
    // arr.reserve(2009);
    arr.push_back(10);
    arr.push_back(10);
    arr.push_back(10);
    arr.push_back(10);
    arr.push_back(10);

    
   
    arr.insert(arr.begin(),50);
     
    // cout<<arr[3]<<endl;
    // cout<<arr.front()<<endl;  ///50
    arr.erase(arr.begin(),arr.end());
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;



    // cout<<arr.front()<<endl;
    // cout<<arr.size();
    // cout<<endl<<arr.capacity();

    // cout<<*(arr.begin())<<endl;  //first element
    // cout<<arr.front()<<endl;   //first element
    
    // arr.push_back(122);     //insert value starting index
    // arr.push_back(121);       // insert value starting index  
    // arr.pop_back();

    // cout<<arr.back()<<endl;  // last element

    // cout<<arr.max_size()<<endl;
    // cout<<arr.size();
    // arr.clear();
    // cout<<endl<<arr.size();  //after clear function size will be zero 



    
//vector<char> okay(200);

//vector<int> distance(20, 933);



}
*/
/*For each loop and swap vector
int main (){

    vector<int> first = {10,20,30, 40, 50};
    vector<int> second = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    second.swap(first);

    cout<<second[4]<<" "<<first[4]<<endl;
    cout<<first.capacity()<<" "<<second.capacity()<<endl;
    for(int j : first){
        cout<<j<<" ";

    }
    cout<<endl;
for(int k: second){
    cout<<k<<" ";
}
    return 0;
}
*/
int main (){

    //traverse the vector 
   vector<int> arr = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};

   vector<int> ::iterator it = arr.begin();
   while(it != arr.end()){

    cout<<*it<<" ";
    it++;
   }



    return 0;
}