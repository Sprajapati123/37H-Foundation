#include <stdio.h>

int main(){
    char alphabet;
    printf("Enter any alphabet: ");
    scanf("%c",&alphabet);
    
    switch(alphabet){
        case 'a':
            printf("a is vowel\n");
        case 'e':
        printf("e is vowel\n");
        case 'i':
        printf("i is vowel\n");
        case 'o':
        printf("o is vowel\n");
        case 'u':
         printf("u is vowel\n");
        default:
        printf("not vowel");
    }
}