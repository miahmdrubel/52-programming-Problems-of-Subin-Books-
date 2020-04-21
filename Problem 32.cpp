#include <iostream>
using namespace std;

int main()
{
    int t,n1,n2;
    cout << "How many Case You Want to Test:->";
    cin >> t;

    for(int i=1; i<=t; i++)
    {
       cin >> n1 >> n2;

       if(n1 > n2)
       {
           cout << "Invalid !" << endl;
       }
       for(int j=n1; j<=n2; j=j+ n1)
       {
           cout << j << endl;
       }

    }


    return 0;
}
