#include <stdio.h>



int main(){
    char ch;
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='u'){
        printf("vowel");
    }else{
        printf("consonent");
    }
}