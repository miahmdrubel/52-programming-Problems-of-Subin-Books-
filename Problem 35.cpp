#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int n,x1,y1,x2,y2,center;


    cout << "How many Case You Want to Test:->";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> x1 >> y1; // First Point
        cin >> center;   // Taking Input of Center
        cin >> x2 >> y2;  // Second Input

        int Result = sqrt((x2 - x1) * (x2 - x1) - (y2 -y1) * (y2 - y1));

        if( Result < center)
        {
            cout << "Point is not inside the Circle.\n";
        }

        else
        {
            cout << "Point is inside the Circle.\n";

        }
    }

    return 0;
}
