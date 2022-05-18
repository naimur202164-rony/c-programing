#include <stdio.h>

int main(){

        int arr[10];
        
    // Geting elements
    int i;
    for(i=0; i<10; i++)  
    {  
	    printf("element - %d : ",i);
        scanf("%d", &arr[i]);  
    }  
    // Printing the arrey elements

    for(int i=0;i<10;i++){
        printf("%d",arr[i]);
    }


}