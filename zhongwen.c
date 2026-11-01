/*#include <stdio.h>
int main(){

 int arr[10];
 int num,count=0;
 for(int i=0;i<10;i++){
 scanf("%d",&arr[i]);
 }

 scanf("%d",&num);
 
 for(int j=0;j<10;j++)
 {
    if(num>=arr[j]||num+30>=arr[j]){
       count++;
     }
     
 }
  printf("%d\n",count);  

    return 0;
}*/

           
/*#include<stdio.h>
int main(){
int l,m;
scanf("%d %d",&l,&m);
int u,v,num=0;
int arr[10000]={0};
for(int i=0;i<m;i++){
scanf("%d %d",&u,&v);
int j=u;  
while(j<=v){  
if(arr[j]==0){     
num++;     
arr[j]=1;     
    }  
j++;  
}
}
l=l+1-num;  
printf("%d",l);    
return 0; 
}*/
         
           
#include<stdio.h>
 int main()
 {

 int arr[7][2];
int i,j; 
 for(i=0;i<7;i++)
 {
  for(j=0;j<7;j++)
  {

   scanf("%d %d",&arr[i][j]);

  }

 }
 printf("%d",arr[i][j]);


 }          
                      
           
           
           
           


           
           
           
           
           
           
           
           
           
           
           
           
           