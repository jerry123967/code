#include<stdio.h>

int sum(int month1,int month2,int month3)
{
  int sum=month1+month2+month3;
  return sum;
}



int main()
{
   int income1=sum(10,20,15);
   int income2=sum(20,30,17);
   int income3=sum(19,17,20);
   int income4=sum(23,21,19);

   int max=income1;
   int season=1;
   if (income2>income1)
   {
     max=income2;
     season=2;
   }
    
    
    else if (income3>income1)
   {
     max=income3;
     season=3;
   }


    else if (income4>income1)
   {
     max=income4;
     season=4;
   }

    else
   {
    printf("四个季度收入相等\n");
   }
   
   printf("第%d个季度营业额最高,总额为%d\n",season,max);


   return 0;

}

