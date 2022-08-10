#include <stdio.h>

int main()
{
    const int n = 10;
    int values[n];
    // values[0]=1;
    // values[1]=2;
    // values[3]=3;

    for (int i = 0; i < 10; i++)
    {
        values[i] = i + 1;
    }


    for(int i=0;i<n;i++){
        printf("values[%d]=%d\n",i,values[i]);
    }

}