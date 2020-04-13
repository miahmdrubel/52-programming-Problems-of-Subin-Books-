#include <iostream>
using namespace std;

int main()
{
    int n,num,res,rem,temp = 0;
    cout << "How many Case You Want to Check:->";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        res = 0;
      cin >> num;

      temp = num;
      while(temp !=0)
      {

      rem = temp % 10;
      res += rem * rem * rem;
      temp/=10;
      }

      if(num == res)
      {
          cout << num << " is an Armstrong Number.\n";
      }else{
       cout << num << " is not an Armstrong Number.\n";

      }
    }







    return 0;
}
