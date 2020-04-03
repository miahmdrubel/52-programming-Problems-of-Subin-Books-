#include<iostream>
using namespace std;

int main()
{

    int n,t;
  cout<<"How many Numbers Factorial You Want to Find:->";
    cin >> n;
     for(int i =1; i<=n; i++)
     {
         int fac = 1;
         cin >> t;
          for(int j=t;j>=1;j--)
          {
              fac = fac * j;
          }
           cout<< fac<<endl;
     }
    return 0;
}
