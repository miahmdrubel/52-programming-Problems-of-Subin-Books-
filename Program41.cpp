#include <iostream>
using namespace std;

int main()
{
    int t,i,j,k,fact;
    long long int n;
    double result;

    cout <<"How many Case You Want to Test:->";
    cin >> t;

    for(i=1; i<=t; i++)
   {
        cin >> n;

         result =0.0;
        for(j=1; j<=n; j++)
        {

             fact =1;
          for(k=j; k>=1; k--)
          {
              fact *=k;
          }

            result +=(double)j/fact;
        }
        cout <<"Result:->" << result << endl;
    }
    return 0;
}
