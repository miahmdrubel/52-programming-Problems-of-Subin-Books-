#include <iostream>
using namespace std;

int main()
{
    int t,n1,n2,n3;

    cout << "How many Case You Want to Test:->";
    cin >> t;

    for(int i=1; i<=t; i++)
    {
        cin >> n1 >> n2 >> n3;
         for(int j=n1; j<=n2; j++)
         {
             if( j % n3 == 0)
             {
                 cout << j << endl;
             }
         }
    }




    return 0;
}
