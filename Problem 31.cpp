#include <iostream>
using namespace std;

int main()
{
    int t,num,sum;

    cout << "How many Case You Want to Test:->";
     cin >>t;

     for(int i=1; i<=t; i++)
     {
         cout << "Input" << i << ":->";
         cin >> num;

          for(int j=1; j<= num; j++)
          {
              sum =0;
              for(int k=1; k<j; k++)
              {

              if(j % k == 0)
              {
                  sum = sum + k;
              }
          }

          if( sum == j)
          {
          cout  << j  <<endl;
          }

     }
     }
    return 0;
}
