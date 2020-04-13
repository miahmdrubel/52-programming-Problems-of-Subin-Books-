#include <iostream>
using namespace std;

int main()
{
    int n,num,temp,result,res;

     cout << "How many Case You Want to Test:->";
     cin >> n;

     for(int i=0; i<n; i++)
     {
         cin >> num;
         temp = num;


         while(temp !=0)
         {
         res =  temp % 10;
         temp = temp /10;


         cout << res;

         }
     }




    return 0;
}
