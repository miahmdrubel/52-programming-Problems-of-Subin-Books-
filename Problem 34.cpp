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
         for(int j=1; j<=n3; j++)
         {
             if( j % n1 == 0)
             {
                 if(j % n2 == 0)
                 {
                      cout << j << endl;

                 }

             }
         }
    }

    return 0;
}
