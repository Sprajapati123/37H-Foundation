#include<stdio.h>

// int main(){
    //rules for declaring variable name
    /*
    1. variable name should not start with number
    2. variable name must not contain space 
       and comma
    3. variable name must not contain special 
    character(%,&,#) except underscore(_)
    4. variable name must not contain keyword
    5. Variable is case sensitive
    6. No repeat of variables
    */



    // int fir_st; //variable declaration
    // a = 50; //variable initialization

    // int b = 20; //variable declaration with initialization
    // b=50;



// constant variable read-only
    // const int c = 50; 

    //Datatypes

    //1. int  60,50,20
    //2. float 2.55, 1.682
    //3. char single character - M,F
    //4. void

    // int a = 9;
    // int x = 10;
    // int y = 30;
    // float b = 2.5;

    // char c = "M";
  
    // printf("%d,%f,%c",a,b,c);

    //operators
    //Arithematic operators
    // + - * / % 
    // float a = 9;
    // int b = 2;

    // float c = a/b;

    // printf("%1.1f",c);
int main(){
    int length;
    int width;
    printf("Enter length of triangle:\n");
    scanf("%d",&length);
    printf("Enter width of triangle: ");
    scanf("%d",&width);
    int area = length * width;
    printf("The area of triangle is %d",area);
}