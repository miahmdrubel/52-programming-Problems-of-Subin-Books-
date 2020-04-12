#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int n,a,b,c,s;
    double area;
    cout << "How many Area want to Calculate:->";
    cin >> n;

    for(int i=0; i<n; i++)
    {
       // area = 1;
       cin >> a >> b >> c;
       s = (a+b+c)/2;
      area = sqrt(s*(s-a)*(s-b)*(s-c));

      cout << "Area = " << area << endl;
    }

    return 0;
}

