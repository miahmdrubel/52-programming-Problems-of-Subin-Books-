
#include <iostream>
using namespace std;

int main()
{
    int N,arr[100],found,t;

    cout << "How Many Case You  Want to Test:->";
    cin >> t;

for(int l=1; l<=t; l++)
{


    cout << endl << "How many Number You Want to Take As input:->";
    cin >> N;
cout << endl << "Input" << l << "Elements are:->"<< endl;

    for(int i=0; i< N -1; i++)
    {
        cin >> arr[i];
    }

    for(int j=1; j<=N; j++)
    {
        found = 0;

        for(int k=0; k< N -1; k++)
        {
            if( j ==arr[k])
            {
                found =1;
                break;
            }
        }

        if(found == 0)
        {
            cout << "Missing Number is:->" << j <<endl;
            break;
        }
    }
}

    return 0;
}

