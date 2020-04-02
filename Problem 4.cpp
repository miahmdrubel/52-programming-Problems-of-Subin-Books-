#include<iostream>
using namespace std;

int main(){
    int num,t;
      cout << "How Many Number You Want to Enter:->";
      cin >> num;
       cout << endl;

  for(int i=1; i<=num; i++){
      cout << i << "number:";
        cin >> t;
     cout <<"\nCase" << i <<":->";
       for(int j=1; j <=t; j++){
            if(t%j==0){
                cout << j <<"\t";
            }
         }
        cout<< endl;
  }

return 0;
}
