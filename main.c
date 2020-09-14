#include <stdio.h>
#include <stdlib.h>

int sum_sub_multi(int , int , int* , int* , int*);

int main()
{
     int a = 20 , b = 10 , sum , multi , sub , status;
     status = sum_sub_multi(a,b,&sum,&sub,&multi);

     if(status == 0)
     {
         printf("Thanks");
     }
     else
     {
         printf("sum = %d , sub = %d , multi = %d" , sum , sub , multi);
     }
    return 0;
}

int sum_sub_multi(int x , int y , int * sum , int * sub , int * multi)
{

  if(sum == NULL || sub == NULL || multi == NULL)
  {
      return 0;
  }
  else
  {
   *sum = x+y;
   *multi = x*y;
   *sub = x-y;
  }

     return 1;

}
