#include<iostream>
using namespace std;

 int main(){

 int t,n;

   cout<<"How many Square you want to make:->";
    cin >> t;

      for(int i=1; i<=t; i++)

      {
      cout<<"\nCase"<< i << ":->";
      cin >> n;

         for(int j =1;j<=n; j++)
         {
             for(int k=1; k<=n; k++)
             {
               cout << "*";
             }
             cout << endl;
         }
         cout << endl;

      }
return 0;
}
