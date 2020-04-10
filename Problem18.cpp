#include<iostream>
using namespace std;


int main(){
 int n,i,j,k;
 char input,vowel[50],consonent[50];

    cout<<"How many Number of Line You Want to Enter:-> ";
      cin>> n;
        for( i=0; i<n; i++)
        {
            while('\n')
            {
                cin >> input;
                 if(input =='a' || input =='e' || input == 'i' || input = 'o' || input == 'u')
                 {
                     j = 0;
                     vowel[j] = input;
                     j++;
                 }

                  if(input !=='a' && input !=='e' && input !== 'i' && input != 'o' && input !== 'u')
                  {
                     k = 0;
                     consonent[k] = input;
                     k++;
                  }

            }
          for(j=0; vowel[j]!='\0'; j++)
          {
            cout<< vowel[j];
          }
          cout<<endl;

           for(k=0; vowel[k]!='\0'; k++)
            {
             cout<< consonent[k];
            }
          cout<<endl;

        }


return 0;
}
