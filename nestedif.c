#include <stdio.h>

int main(){
   int a,b,c,highest;

   printf("Enter first number:"),
   scanf("%d",&a);
   printf("Enter second number:"),  
   scanf("%d",&b);
   printf("Enter third number:"),  
   scanf("%d",&c);
/*
if(a>b && a>c)
*/
   if(a>b){
        if(a>c){
            highest = a;
        }else{
            highest = c;
        }
   }else{
     if(b>c){
        highest = b;
     }else{
        highest = c;
     }
   }

     printf("The highest number is %d",highest);

}