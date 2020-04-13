#include <iostream>
using namespace std;

int main()
{
    int t,n,m;

    cout << "How Many Case You Can Check:->";
    cin >> t;

   for(int i=1; i<=t; i++)
    {
        cin >> n >> m;


        for(int j=1; j<=n; j++)
        {
            for(int k=1; k<=j; k++)
            {
                cout << m;
            }
            cout << endl;
        }

        for(int l=n-1; l>=1;l--)
        {
            for(int o=1; o<=l; o++)
            {

            cout << m;
            }
            cout<<endl;
        }
        cout << endl;

    }
    cout << endl;


 return 0;
}
