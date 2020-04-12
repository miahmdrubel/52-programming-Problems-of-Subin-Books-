#include <iostream>
using namespace std;

int main()
{

    int t,count;
    double x;

    cout <<"How many Test Case will check:->";
    cin >> t;

    for(int i=0; i<t; i++)
    {
        cout << "How many kgs is Stored:->";
        cin >> x;

        count = 0;

        while(x > 1.00)
        {
            x = x/2;
            count++;
        }
        cout << count <<"Days.\n";
    }

    return 0;
}
