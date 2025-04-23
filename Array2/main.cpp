#include <iostream>
#include <algorithm>
using namespace std;

/*Find Unique Number
int printUniqueNumber(int arr[], int n){
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans = ans ^ arr[i];
    }
    return ans;

}


int main(){

int arr[] = {10,10,20,30,40,50,50,30,40};
int size = sizeof(arr)/sizeof(arr[0]);

int ans = printUniqueNumber(arr, size);
cout<<"Unique number is : "<<ans<<endl;

return 0;
}
*/

/*No of zeros and One
void printZerosAndOne(int arr[], int size)
{

    cout << "No of zeos is : ";
    for (int i = 0; i < size; i++)
    {
        int currentElement = arr[i];
        if (currentElement == 0)
        {

            cout << arr[i]<<" ";
        }
    }
    for (int i = 0; i < size; i++)
    {
        int currentElement = arr[i];
        if (currentElement == 1)
        {
            cout << arr[i]<<" ";
        }
    }
}

int main()
{

int arr[10] = {0, 0, 1, 1, 1, 1, 1, 0, 0, 1};
    int size = 10;

    printZerosAndOne(arr, size);
    return 0;
}
*/

/*Print sort
void shortZeroOne(int arr[], int n){

int zerosCount = 0;
    int oneCount = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            zerosCount++;
        }if(arr[i] == 1){
            oneCount++;
        }
    }

                //first methode

          // fill(arr,arr+zerosCount, 0);
          // fill(arr+zerosCount,arr+n,1);



           //OR   // Second methode

           for(int i = 0; i<zerosCount; i++){
            arr[i] = 0;
        }
        for(int i=zerosCount; i<n; i++){
            arr[i] = 1;
        }

        cout <<"Total number of zeros is : "<<zerosCount<<endl;
        cout <<"Total number of one is : "<<oneCount<<endl;


}

int main(){

int arr[] = {0,1,0,0,0,1,1,0,0,1};
    int size = sizeof(arr)/sizeof(arr[0]);


    //third method
    //sort(arr,arr+size);


    //function call
    shortZeroOne(arr, size);



    for(int i=0; i<size; i++){

    cout<<arr[i];
    if(i<size-1){
        cout<<", ";
    }
}

return 0 ;
}
*/

// int main(){

//     return 0;
// }

/*Find all pairs
void printAllPairs(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cout << arr[i]<< "," << arr[j]  <<"  ";
        }
        cout<<endl;
    }
}

int main()
{

int arr[] = {10, 20, 30, 40};
    int size = 4;

    printAllPairs(arr, size);

    return 0;
}
*/

/*
10,10  20,10  30,10  40,10
10,20  20,20  30,20  40,20
10,30  20,30  30,30  40,30
10,40  20,40  30,40  40,40

void printAllPairs(int arr[], int n)
{

int i = 0;
do
{

       for (int j = 0; j < n; j++)
     {
            cout << arr[j] << "," << arr[i] << "  ";
     }

             cout << endl;

    i++;

    }
    while (i < n);
}

int main()
{

int arr[] = {10, 20, 30, 40};
int size = 4;

printAllPairs(arr, size);

return 0;
}

*/

/*Find Two Sum Pairs equal to target value 


bool checkTwoSum(int arr[], int n, int target)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            if (arr[i] + arr[j] == target)
            {

                return true;
            }
        }
    }

    return false;
}

int main()
{

    int arr[] = {10, 45, 13, 20, 30};

    int n = sizeof(arr)/sizeof(arr[0]);

    bool ans = checkTwoSum(arr, n, 35);

    if (ans == true)
    {
        cout << "Target found";
    }
    else
    {
        cout << "Target Not found";
    }

    return 0;
}
*/

/*Find two sum  by using pair inbuit

pair <int ,int> checkTwoSum(int arr[], int n, int target)
{
    pair<int, int> ans = make_pair(-1,-1);

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            if (arr[i] + arr[j] == target)
            {

            ans.first = arr[i];
            ans.second = arr[j];
            return ans;

            }
        }
    }

    return ans;
}

int main()
{

    int arr[] = {10, 5, 13, 20, 30};

    int n = sizeof(arr)/sizeof(arr[0]);

    pair<int, int>  ans = checkTwoSum(arr, n, 35);

    if (ans.first == -1 && ans.second == -1){
        cout<< " Pairs not found";
    }else{
        cout<< " Pairs found : "<<ans.first<<","<<ans.second;
    }
    return 0;
}
*/

/*Sum of two pairs

void checkTwoSum(int arr[], int n, int target, int arr[])
{


for (int i = 0; i < n; i++)
    {

    for (int j = 0; j < n; j++)
        {

        if (arr[i] + arr[j] == target)
            {

            ans[0] = arr[i];
            ans[1] = arr[j];
            return 0;

            }
        }
    }

    return 0;
}

int main()
{

    int arr[] = {10, 5, 13, 20, 30};

    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 35;

    pair<int, int>  ans = checkTwoSum(arr, n, target,);

    if (ans.first == -1 && ans.second == -1){
        cout<< " Pairs not found";
    }else{
        cout<< " Pairs found : "<<ans.first<<","<<ans.second;
    }
    return 0;
}
*/

/*Print all triplate pairs 

void printAllTriplate(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                cout << arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
                count++;
            }
        }
    }
    cout << "Total Pairs is : " << count;
}

int main()
{

    int arr[] = {10, 20, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);

    printAllTriplate(arr, size);

    return 0;
}
*/

/*Print three sum array


void threeSum(int arr[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            for (int k = j+1; k < size; k++)
            {
                if(arr[i] + arr[j] + arr[k] == target){
                    cout << arr[i] << ", " << arr[j] << ", " << arr[k] << endl;

                }

            }
        }
    }

}

int main()
{

int arr[] = {10, 20, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 70;

    threeSum(arr, size, target);

    return 0;
}
*/

/*Rotate the array

void rotateArray(int arr[], int size, int shift)
{

    int finalshift = shift % size;
    if (finalshift == 0)
    {
        return;
    }

    int temp[100000];
    int index = 0;
    for (int i = size - finalshift; i < size; i++)
    {
        temp[index] = arr[i];
        index++;
    }
    // shift array element by finalshift
    for (int i = size - 1; i >= 0; i--)
    {
        if(i-finalshift >=0){
            arr[i] = arr[i - finalshift];
        }

    }
    // comp temp element by original element
    for (int i = 0; i < finalshift; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int shift = 3;

    cout << "Before : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i < size - 1)
        {
            cout << ", ";
        }
    }
    rotateArray(arr, size, shift);

    cout << endl<< "After : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i < size - 1)
        {
            cout << ", ";
        }
    }
    return 0;
}
*/
