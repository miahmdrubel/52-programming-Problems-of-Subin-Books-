#include <iostream>
using namespace std;

int main()
{
    int t;
    char num[100];

    cout << "How Many Number You want to enter:->";
     cin >> t;

     for(int i=0; i<t; i++)
     {

       int j=0;

       do{
        cin >> num[j];
        j++;
       }while(num[j]=='\n');


       for(int k=0; num[k] !='\0'; k++)
       {
           if(num[k] >='A' && num[k] <='Z')
           {
               cout << num[k] - 64;
           }
       }

     }

    return 0;
}
