#include <iostream>
#include<vector>
#include <limits>
using namespace std;

/*
int main()
{

    // Declaring array
    //  int arr[3][2];

    // intialization
    // int arr[3][3] = {

    //     {1, 2, 3},
    //     {10, 20, 30},
    //     {9, 8, 7}};

    // cout<<arr[2][1];

    return 0;
}
*/

/*    // traverse entire array


int main(){

    int rowsize = 3;
    int colsize = 3;

     for (int i = 0; i < rowsize; i++)
     {
        for (int j = 0; j < colsize; j++)
        cout << arr[i][j] << " ";
        cout << endl;
      }
    }
*/

/* Terverse row to col
    Terverse col to row
    Diagonal 


int main()
{

    int array1[3][3] = {
        {10, 20, 30},
        {110, 120, 130},
        {210, 220, 230},
    };

    int row = 3;
    int col = 3;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }
    //output
    // 10 20 30 
    // 110 120 130
    // 210 220 230

    cout<< endl;


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array1[j][i] << " ";
        }
        cout << endl;
    }
    // output
    // 10 110 210
    // 20 120 220
    // 30 130 230
    
    cout<<endl<<"Diagonal elememt is : "<<endl;   

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(i == j){
                cout<<array1[i][j]<<" ";
                
            }else{
                cout<<" ";
            }
        }
        cout << endl;
    }
    cout<< endl;

    // Diagonal element
     cout<< "diagonal element  : ";
    for(int i = 0; i<col; i++){
       cout<<array1[i][i]<<" ";
    }

    return 0;
}
    */


    /*
    //other diagonal elemet
    int main(){

    int array1[3][3] = {
        {10, 20, 30},
        {110, 120, 130},
        {210, 220, 230},
    };

    

    for(int i = 0; i<3;){
        for(int j = 2; j>=0; j--) {
            cout<<array1[i][j]<<endl;
            i++;
        }
    }    
    return 0;
}
*/


/*Take input in 2D Array
int main(){

    int shiv[3][3];


    for(int row = 0; row<3; row++){

        for(int col = 0; col<3; col++){


            cout<<"Give the input for indexing ("<<row<<","<<col<<") : ";
            cin>>shiv[row][col];
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << shiv[i][j] << " ";
        }
        cout << endl;
    }



    return 0; 
}
*/


/*Target element is present their or not 
bool targetSearch(int shiva[][6], int rows, int column, int target){


    for(int i = 0; i<rows; i++){
        for(int j = 0; j<column; j++){
            if(shiva[i][j] == target){
                return true;
            }
        }
    }
    return false;
}
int main(){


    int shiva[4][6] = {

        {24,54,64354,34,232,25},
        {234,44,67,34,86,345},
        {32,234,34,34,85,67},
        {756,323,35,8,36,3985},
        
    };
    int row = 4;
    int col = 6;
    int target = 678;
int ans = targetSearch(shiva,row,col,target);

cout<< "Ans is : " << ans;
    return 0;
}
*/

/*Vector in 2D Array

int main(){

vector<vector<int>> arr(5, vector<int>(5,8338));

int rowsize = arr.size();
int column = arr[0].size();

for(int i = 0; i<rowsize; i++){
    for(int j = 0; j<column; j++){

        cout<< arr[i][j] << " ";

    }
    cout<<endl;
}




    return 0; 
}
*/
/*Find the target by Vector
bool vecArray(vector<vector<int>>arr,int target){
    
    int rowsize = arr.size();
    int column = arr[0].size();


    for(int i = 0; i<rowsize; i++){
        for(int j = 0; j<column; j++){
    
           if(arr[i][j] == target){
            return 1;
           }
    
        }
       
    
    }
return 0;
}


int main(){


     vector<vector<int> > arr(7, vector<int>(7,35));

int target = 35;
    int ans = vecArray(arr,target);


    cout<<"Ans is : "<< ans;

    return 0; 
}
*/

/*Find Minumum in 2d Array*/

int findMinIn2DArray(int arr[][6], int rowsize, int columnsize){

    int minValue = INT16_MAX;

    for(int i = 0; i<rowsize; i++){
        for(int j = 0; j<columnsize; j++){
            minValue = min(arr[i][j], minValue);
        }
    }

return minValue;
}

int main(){

int arr[4][6] = {

        {24,54,64354,34,232,25},
        {234,44,67,34,86,345},
        {32,234,34,34,85,67},
        {756,323,35,8,36,3985},
        
    };
int rowsize = 4;
int column = 6;

int ans = findMinIn2DArray(arr, rowsize, column);
cout<<"Minumum Value is = "<<ans;



    return 0;
}














