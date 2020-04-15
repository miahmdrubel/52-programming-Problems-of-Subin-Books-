// C++ program to print reverse of a string
#include <iostream>
#include <cstring>
using namespace std;

// Driver code
int main()
{
    int i,j,k,t,count,l;
    char s1[1001],s2[1001];

    cout << "How many Case You Want to Check:->";
    cin >> t;

    count=0;
    for( i=0; i<t; i++)
    {
       j = 0;
   do {
        cin >> s1[j];
        count++;
        j++;

    }while( getchar() != '\n' );


     l=0;
     for ( k=count-1; k>=0;k--)
     {

     s2[l] = s1[k];
     cout << s2[l];
     l++;
     }


  if(strcmp(s1,s2) == 0)
    {
        cout << "Yes,it is Palindrome.\n";
    }
    else
    {
        cout << "Sorry,It's not a Palindrome.\n";
    }

    cout << endl;

    }

    return (0);
}
