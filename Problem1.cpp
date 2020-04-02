#include<iostream>
using namespace std;

int main(){
   int t,i,n;
      cout << "How Many Number You Want to Enter:";
        cin >> t;

   for ( i=1; i <=t; i++){
        cout << i << "number is:";
       cin >> n;

          if( n % 2 == 0 ){
            cout << "Even.";
          }else{
            cout << "Odd";
         }
cout <<endl;
   }

return 0;
}
