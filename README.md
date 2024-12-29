
#include <iostream>
#include <cmath>
using namespace std;

/* Debug Exercise //
int main() {
char c;
 cin>>c;
 if('a'<=c && // || //  c<= 'z'){
    cout<<0;
 }
else if('A'<=c &&// || // c<= 'Z'){
    cout<<1;
 }
 else{
    cout<<-1;
 }
 return 0;
}
*/

/*1.pattern //
*
**
***
****
*****

int main() {
int n;
cout<< "Give the number : ";
cin>>n;
for(int i=0; i<=n; i++){
    for(int p=0; p<=i; p++){
        cout << "*";
    }
    cout << endl;
}

    return 0;
}
*/
/*2.Pattern //
*****
****
***
**
*

int main()
{
    int n;
    cout << "Give the number : ";
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int p = 1; p <row; p++)
        {
            cout << " ";
        }
            for (int print = 0; print <= n - row; print++)
            {
                cout << "*";
            }
        
        cout << endl;
        
    }

    return 0;
}
*/

/*3.pattern //
*****
****
***
**
*

int main ()
{
int num;
cout << "Give the number : ";
cin>>num;
for(int row=0; row<=num; row++)
{
for(int col=1; col<=num-row; col++)
{
cout <<"*";
}
cout << endl;
}
return 0;
}
*/

/*4.Pattern //
    *
   **
  ***
 ****
*****

int main()
{
    int num;
   cout << "Give the number : ";
   cin>>num;
    for (int row=1; row<=num; row++)
    {
        for(int col=1; col<=num-row; col++)
        {
            cout << " ";
         }
            for(int print=1; print<=row; print++)
            {
                cout << "*";
            }

        cout << endl;
    }
        return 0;
}
*/

/*5.Pattern //
1
23
345
4567

int main()
{
    int n;
    int j = 0;
    cout << "Give the number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << j + k;
        }
        cout << endl;
        ++j;
    }

    return 0;
}
*/

/*6.Pattern //
   *
  ***
 *****
*******

int main()
{
    int m;
    cout << "Give the number :";
    cin >> m;
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < m - row-1; col++)
        {
            cout << " ";
        }
        for (int j = 0; j <= (2 * row); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
*/

/*7.
1+11+111+1111+11111+111111+1111111+.........n terms = sum !

int main()
{
    int n;
    int sum=0;
    
    cout << "How many terms in the series : ";
    cin>>n;
    for(int i=0; i<=n-1; i++)
    {
     // sum*10 + 1
        sum = sum + pow(10,i);
        
        
        cout << sum;
        if(i<n)
        {
        cout <<"+";
        }
        
    }
    
    cout <<"="<< sum;
    

    return 0;
}
*/

/*8. Find the product of sum n number from 1.
1*2*3*4*5*6*7*8*..........n term =  Total ;

int main()
{

    int n;
    int multi = 1;
    cout << "Give the terms of the series : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        multi *= i;
        cout << i;
        if (i < n)
        {
            cout << "*";
        }
    }
    cout << "=" << multi;

    return 0;
}
 */

/*9. Find the even number til n!

int main()
{
    int n;
    int p = 0;
    cout << "Give the number : ";
    cin >> n;
    for (int i = 2; i <= n; i += 2)
    {
        p += 1;
        cout << i << " ";
    }
    cout << endl<< "Total : " << p << " number is even";

    return 0;
}
 */

/*10. Hollow Rectangle
* * * * * * * * * * * * 
*                     *
*                     *
* * * * * * * * * * * *

int main()
{
    int length, width;
    cout << "How many length : ";
    cin >> length;
    cout << "How many width : ";
    cin >> width;
    for (int row = 0; row < length; row++)
    {
        for (int col = 0; col < width; col++)
        {
            if (row == 0 || row ==  length- 1)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col ==  width- 1)
                {
                    cout << "* ";
                }
                else{
                
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
 */

/*10. Hollow square
* * * * * 
*       *
*       *
* * * * *

int main()
{
    int length;
    cout << "How many length : ";
    cin >> length;
    // cout << "How many width : ";
    // cin >> width;
    for (int row = 0; row < length; row++)
    {
        for (int col = 0; col < length; col++)
        {
            if (row == 0 || row ==  length- 1)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col ==  length- 1)
                {
                    cout << "* ";
                }
                else{
                
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
 */
