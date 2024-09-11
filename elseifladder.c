#include <stdio.h>

int main(){
    int marks;

    printf("Enter marks: ");
    scanf("%d",&marks);

    if(marks >= 90){
       printf("Congratulations! You got A+ grade");
    }else if(marks>=80 && marks<90){
        printf("You got A grade");
    }else if(marks >=70 && marks<80){
        printf("You got B grade");
    }else if(marks>=60 && marks<70){
        printf("You got C grade");
    }else{
        printf("Sorry! You failed");
    }


}