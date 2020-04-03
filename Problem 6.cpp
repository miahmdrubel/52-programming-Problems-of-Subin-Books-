
#include<iostream>
using namespace std;

int main()
{
    int n,a;

    cout <<"How many numbers of Lines you want to enter:->";
       cin >> n;
    for(int i=1; i <=n; i++)
    {

             int sum =0;
       for(int j=1; j<=n; j++)
         {
             cin >> a;
              if((j==1) || (j==5))
              {
                  sum = sum + a;
              }
         }

                cout<< "\nSum = "<< sum << endl;
    }

    return 0;
}
