

#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
char first_line[1001];
char second_line[2];
int n,count;

 printf("How Many Line You Want to Check:->");
  scanf("%d",n);

     scanf("%[^\n]",first_line);
     scanf("%s",second_line);

       for(int i=0;i<n; i++)
       {
           count = 0;

         for(int j=0;j< strlen(first_line); j++)
         {
               if(second_line[0] == first_line[i])
               {
                count++;
               }
         }

         if(count == 0)
         {
          printf("'%c' is not Present.\n",second_line[0]);

         }else
         {
           printf("Occurance of '%c' in '%s' = %d\n",second_line[0],first_line,count);
         }
       }



	return 0;
}


