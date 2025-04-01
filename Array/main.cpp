#include <iostream>
#include <limits.h>
using namespace std;

/*
int main(){

int arr[4] = {0};

int brr[3] = {10,23,32};


cout << arr[3]<< endl;
cout<< brr[1]<<endl;

int jee[6];
fill(jee, jee+6, 25);

cout<< jee[0] <<" " << jee[1]<<" " << jee[2]<<" " << jee[3]<<" " << jee[4]<<" " << jee[5];
*/

/*
int arr[5];
for(int index = 0; index<5; index++){
    cout<<"Enter the value for the index : " << index << endl;
    cin>>arr[index];
}

for(int index = 0; index<5; index++){
    cout << arr[index] << " ";
}
*/
/*
return 0;
}

*/

/*
void printAge( int arr[] , int size){

for(int index = 0; index<size; index++){
    cout << arr[index]<< " ";
}
}
printAge(arr, size);

*/

/*  Q.
bool findTarget (int arr[], int size, int target){


for(int i=0; i<size; i++){

int currentElemement = arr[i];
if (currentElemement == arr[i]){
    return true;
}
}
return false;
}

int main(){



int arr[] = {10, 20, 30, 40, 50};
int size = 5;
int target = 20;

bool ans = findTarget(arr, size, target);
cout<<"ans : "<< ans;



return 0;
}
*/

/*  Q.  Find Linear Search



bool findTarget (int arr[], int size, int target){


for(int i=0; i<size; i++){

int currentElemement = arr[i];
if (currentElemement == arr[i]){
        return true;
    }
    }
    return false;
    }

int main(){

int arr[100];
int size;

cout<<"Enter the number of element "<< endl;
cin>>size;

for(int i=0; i<size; i++){
    cout<<"Enter the input value for index: "<<i<< endl;
    cin>>arr[i];
}

int target;
cout<<"Enter the target value : "<< endl;
cin>>target;



bool ans = findTarget(arr, size, target);
cout<<"ans : "<< ans;


return 0;
}
*/

/*  Q. Find Maximum Number


int findTarget(int arr[], int size)
{


        int maxAns = INT_MIN;
        for (int i = 0; i < size; i++)
        {
            maxAns = max(maxAns, arr[i]);
        }

        return maxAns;

}

int main()
{

    int arr[10];
    int size;

    cout << "Enter the number of element " << endl;
    cin >> size;

    for(int i=0; i<size; i++){
        cout<<"Enter the input value for index: "<<i<< endl;
        cin>>arr[i];
    }


        cout << "max number is  " << findTarget(arr,size) << endl;





    return 0;
}
 */

/* Q.  Print no of Zeros and One's


void printZerosAndOne(int arr[], int size){

   int zerosCount = 0;
   int onesCount = 0;
   for(int i=0; i<size; i++){
       int currentElement = arr[i];
       if(currentElement == 0){
           zerosCount++;
       }if(currentElement == 1){
           onesCount++;
       }
   }
   cout<<"No of zeros is : " << zerosCount<< endl;
   cout<<"No of ones is : " << onesCount<< endl;

}

int main(){


   int arr[10] = {0,0,1,1,1,1,1,0,0,1};
   int size = 10;

   printZerosAndOne( arr, size);
   return 0;
}
*/

/* Q. Print Extreme value
 */

void extremePrint(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i <= j)
    {
        if (i == j)
        {
            cout << arr[i] << " ";
            break;
        }
        else
        {

            cout << arr[i] << " ";
            i++;
            cout << arr[j] << " ";
            j--;
        }
    }
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;

    extremePrint(arr, size);

    return 0;
}
