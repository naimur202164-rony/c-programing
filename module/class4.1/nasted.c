#include <stdio.h>

int main()
{

    int a, b;

    scanf("%d %d", &a, &b);


    if(b!=0){
        if(a%b==0){
            printf("%d is divisiable by %d\n");
        }else{
             printf("%d is not divisiable by %d\n");
        }
    }else{
        printf("You can not diveded by 0\n");
    }
}