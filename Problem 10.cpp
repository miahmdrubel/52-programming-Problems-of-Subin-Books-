   #include<iostream>
using namespace std;


 int main()
 {
     int match,Target_run,Current_run,Ball_left,Ball_Played;
     double Asking_Run_Rate,Current_Run_Rate;
     int Total_Over = 50;
     cout<<"How many match is tested:->";
       cin>> match;
        for(int i=1; i<=match; i++)
        {
            cin >> Target_run  >> Current_run >> Ball_left;
            Ball_Played = (Total_Over * 6) - Ball_left;
       Asking_Run_Rate =(((double)Target_run - (double)Current_run +1) / ((double)Ball_left))*6;
       Current_Run_Rate = ((double)Current_run / (double)Ball_Played)*6;

            cout<< "\t" << Current_Run_Rate;
            cout<< "\t" << Asking_Run_Rate;

        }
cout<<endl;
     return 0;
 }
