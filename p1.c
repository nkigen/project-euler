#include<stdio.h>
#define MAX	1000

int main() {
    int i=0, sum=0;

    for(i=0; i<MAX; i++)
        if(!(i%3) || !(i%5))
            sum+=i;
    printf("%d\n",sum);
}
