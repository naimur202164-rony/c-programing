#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);

    int abs;
    if(num>=0){
        abs=num;
    }else{
        abs=-num;
    }

    printf("%d",abs);   
}