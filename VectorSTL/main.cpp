#include <iostream>
#include <vector>
using namespace std;

/*
#include <algorithm>
#include <iterator>
#include <numeric> // for std::accumulate
#include <functional> // for std::greater
#include <string>   // for std::string
#include <list>     // for std::list
#include <deque>    // for std::deque
#include <array>    // for std::array
#include <set>      // for std::set
#include <map>      // for std::map
#include <unordered_map> // for std::unordered_map
#include <unordered_set> // for std::unordered_set
#include <stack>    // for std::stack
#include <queue>   // for std::queue
#include <bitset>  // for std::bitset
#include <cmath>   // for std::sqrt, std::pow, std::abs
#include <limits>  // for std::numeric_limits
#include <ctime>   // for std::time, std::clock
#include <cstdlib> // for std::rand, std::srand
#include <cassert> // for assert
#include <iomanip> // for std::setw, std::setprecision
#include <sstream> // for std::stringstream
#include <typeinfo> // for typeid
#include <initializer_list> // for std::initializer_list
#include <utility> // for std::pair, std::make_pair
#include <regex> // for std::regex
#include <thread> // for std::thread
#include <future> // for std::async, std::future
#include <condition_variable> // for std::condition_variable
#include <atomic> // for std::atomic
#include <chrono> // for std::chronow
#include <exception> // for std::exception
#include <stdexcept> // for std::runtime_error
#include <functional> // for std::function
#include <memory> // for std::shared_ptr, std::unique_ptr
#include <iterator> // for std::iterator
#include <locale> // for std::locale
#include <codecvt> // for std::wstring_convert
#include <cwchar> // for std::wcslen, std::wcscmp
#include <cwctype> // for std::iswalpha, std::iswdigit
#include <cctype> // for std::isalpha, std::isdigit
#include <cstring> // for std::strlen, std::strcmp
#include <csignal> // for std::signal
#include <csignal> // for std::signal
#include <cstdarg> // for std::va_list, std::va_start, std::va_end
#include <cstddef> // for std::size_t, std::ptrdiff_t
#include <cstdint> // for std::int32_t, std::uint32_t, std::int64_t, std::uint64_t
#include <cfloat> // for std::FLT_MAX, std::DBL_MAX, std::LDBL_MAX
#include <climits> // for std::INT_MAX, std::LONG_MAX, std::LLONG_MAX
#include <clocale> // for std::setlocale
#include <csetjmp> // for std::setjmp, std::longjmp
#include <cstdarg> // for std::va_list, std::va_start, std::va_end
#include <cstdint> // for std::int32_t, std::uint32_t, std::int64_t, std::uint64_t
#include <cstddef> // for std::size_t, std::ptrdiff_t
#include <cfloat> // for std::FLT_MAX, std::DBL_MAX, std::LDBL_MAX
#include <climits> // for std::INT_MAX, std::LONG_MAX, std::LLONG_MAX
#include <clocale> // for std::setlocale
#include <csetjmp> // for std::setjmp, std::longjmp
#include <cstdarg> // for std::va_list, std::va_start, std::va_end
#include <cstdint> // for std::int32_t, std::uint32_t, std::int64_t, std::uint64_t
#include <cstddef> // for std::size_t, std::ptrdiff_t
#include <cfloat> // for std::FLT_MAX, std::DBL_MAX, std::LDBL_MAX
#include <climits> // for std::INT_MAX, std::LONG_MAX, std::LLONG_MAX
#include <clocale> // for std::setlocale
#include <csetjmp> // for std::setjmp, std::longjmp
#include <cstdarg> // for std::va_list, std::va_start, std::va_end
#include <cstdint> // for std::int32_t, std::uint32_t, std::int64_t, std::uint64_t
#include <cstddef> // for std::size_t, std::ptrdiff_t
#include <cfloat> // for std::FLT_MAX, std::DBL_MAX, std::LDBL_MAX
#include <climits> // for std::INT_MAX, std::LONG_MAX, std::LLONG_MAX
*/
void coutnting(int a){

    for(int i =1; i<=a; i++){

        cout<<i <<" ";
    }
}

int main(){

int a = 39;

coutnting(a);
    return 0;
}

/*
void dynamicArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
*/

/*
int main()
{
    //static memory allocation

    int arr[5] = {1, 2, 3, 4, 5}; // static array of size 5
     staticArray(a, 5); // Pass the array and its size to the function




    //dynamic memory allocation

    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;

    int *arrDynamic = new int[n]; // dynamic array of size 5 & each element would be 0 or garbage value

    dynamicArray(arrDynamic, n);



    //vector in C++ STL
    vector<int> vec; // empty vector of integers

    while(1){
        int d;
        cout<<"Give the size of the vector : "<<endl;
        cin>>d;
        vec.push_back(d);
        cout << "size : " << vec.size() << "  Capacity : "<<vec.capacity()<<endl;
    }



    // vector in C++ STL

    vector<int> vec; // empty vector of integers

    vec.push_back(1); // add 1 to the end of the vector
    vec.push_back(2); // add 2 to the end of the vector
    vec.push_back(3); // add 3 to the end of the vector
    vec.push_back(4); // add 4 to the end of the vector
    print(vec);


    cout<<"First popup"<<endl;
    vec.pop_back(); // remove the last element of the vector
    print(vec);


    cout<<"Second popup"<<endl;
    vec.pop_back();
    print(vec);




   return 0;
}
*/

/*
void print(vector<int> vec)

{
    cout<<"Printing Vector : " <<endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << "  ";
    }
    cout<<endl;
}

int main()
{

    vector<int> vec;
    int n;
    cout << "Enter the size of the vector : " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int d;
        cout << "Give the volue of the vector : " << endl;
        cin >> d;
        vec.push_back(d);
    }
    print(vec);
    
    for(int i =0; i<20; i++){
        vec.push_back(30);
    }
    
    print(vec);
    
    return 0;
}
*/


/* Print vector array in different ways
void print(vector<int> okay) // pass by value

{
    // cout<<"Printing Vector : " <<endl;
    // int size = okay.size();                                  
    // for (int i = 0; i <size; i++)
    // {
    //     cout << okay.at(i)<< "  ";
    // }
    // cout<<endl;

    
                      //or
                      cout<<"printing Vector : " <<endl;
                      for(auto  th : okay){
                          cout<<th<<"  ";
                      }
                      cout<<endl;
}

int main(){

//vector<int>shiv;   //default with size 0
//vector<int>shiv1(5,100); //default with size 5 and all elements are 100   
//print(shiv1);


vector<int>thirdarray = {1,2,3,4,5}; //default with size 5 and all elements are 1,2,3,4,5

thirdarray.pop_back(); // remove the last element of the vector
print(thirdarray);


// cout<<thirdarray[0]<<endl; // access the first element of the vector
// cout<<thirdarray.front()<<endl; // access the first element of the vector
// cout<<thirdarray[thirdarray.size()-1]<<endl; // access the last element of the vector
// cout<<thirdarray.back()<<endl; // access the last element of the vector


return 0;
}

*/