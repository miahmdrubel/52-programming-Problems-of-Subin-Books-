#include<iostream>
#include<cmath>
using  namespace std;

  int main()
  {
      int num,t;
        cout<<"How many number You Want to Check:->";
          cin>> num;
        for(int i=1;i<=num;i++)
        {
            cin>>t;
          double sq_root = sqrt(t);
          double diffrence = ceil(sq_root) - floor(sq_root);
            if(diffrence<0.000001)
            {
                cout<<"Yes\n";
            }else{
              cout<<"NO.\n";
            }

        }

      return 0;
  }

