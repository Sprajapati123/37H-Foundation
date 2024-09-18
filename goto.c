// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int pin = 1111;
  int attempt = 0;
  int input;
  
  retry:
  printf("Enter pin: ");
  scanf("%d",&input);
  
  if(pin == input){
      printf("Access Granted");
  }else{
      attempt++;
      printf("Invalid pin, Attempt %d of 3\n",attempt);
      if(attempt<3){
          goto retry;
      }else{
          printf("Too many attempts, Try again later");
      }
  }
  
 
}