#include <iostream>
using namespace std;

int main()
{
    int t,i,j,n;

    cout << "How many Case You Want to Test:->";
    cin >> t;

    for(i=1; i<=t; i++)
    {

        cout << "How Long you Want to increase the Series->";
        cin >>n;

        for(j=n; j>=3; j--)
        {
            cout << "2^" << j << " + ";
        }
        cout << "2 + 1" << endl;


    }








    return 0;
}
