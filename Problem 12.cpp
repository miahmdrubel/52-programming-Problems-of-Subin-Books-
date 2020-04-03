#include<iostream>
using namespace std;

int main()
{

    int n,t;
  cout<<"How many Numbers Factorial You Want to Find:->";
    cin >> n;

     int mod,zero_count =0;

      for(int i =1; i<=n; i++)
      {
         int fac = 1;
         cin >> t;
          for(int j=t;j>=1;j--)
          {
              fac = fac * j;


         while(fac >0)
         {
             mod = fac % 10;
              if(mod == 0)
              {
                  zero_count++;
              }else{
               break;
              }

              fac = fac /10;
         }


          }

         cout << zero_count <<endl;
     }
    return 0;
}
