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

         sum = 0;
          for(int j=1; j< num; j++)
          {
              if(num % j == 0)
              {
                  sum = sum + j;
              }
          }

          if( sum == num)
          {
          cout << endl <<"Yes," << num << " is a Perfect Number !" <<endl;
          }else{
           cout << "No" << num << "is not a Perfect Number ! " << endl;
          }
     }

    return 0;
}
