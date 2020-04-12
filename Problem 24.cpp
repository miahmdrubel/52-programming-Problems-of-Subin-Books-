#include <iostream>
using namespace std;

int main()
{
 int t,num[100],n;

 cout << "How many array You W  ant to Test:->";
 cin >> t;

   for(int i=0; i<t; i++)
   {
       cout <<"\n How many number You Want to take input:->";
       cin >> n;
       for(int j=0; j<n; j++)
       {
           cin >> num[j];
       }

       for(int k=1; k <=n; k+=2)
       {
           cout << num[k] <<"\t";
       }
   }

return 0;
}
