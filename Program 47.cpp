
#include <bits/stdc++.h>
using namespace std;


void removeDuplicates(int arr[], int n)
{

    int i;

    // Initialise a set
    // to store the array values
    set<int> s;

    // Insert the array elements
    // into the set
    for (i = 0; i < n; i++) {

        // insert into set
        s.insert(arr[i]);
    }

    set<int>::iterator it;

    // Print the array with duplicates removed
    cout << "\nAfter removing duplicates:\n";
    for (it = s.begin(); it != s.end(); ++it)
        cout << *it << " ";
    cout << '\n';
}


int main()
{
    int a[] = {1,2,4,7,9,10};
    int b[] ={1,2,3,4,7,8,9,10};
    int c[14],d[14];
    int i,j,temp,min,m;
    static int k=0;




    for(i=0; i<6; i++)
    {
        c[k] = a[i];
        k++;
    }

 for(j=0; j<8; j++)
    {
       c[k] = b[j];
        k++;
    }

    cout <<"Before Sorting Concated Array:->";
    for(int l=0; l<k; l++)
    {
        cout << c[l] <<' ';
    }

    cout << endl;

    int n = sizeof(c)/sizeof(c[0]);

    sort(c, c+n, greater<int>());

    cout << "Array after sorting : \n";
    for (int i = 0; i < n; ++i)
    {
     cout << c[i] << " ";
    }
    removeDuplicates(c, n);


    return 0;
}
