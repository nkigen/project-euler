#include<stdio.h>
#include<stdint.h>
#define MAX 4000000

int main() {
    unsigned long i = 2;
    unsigned long prev = 1;
    unsigned long  tmp, sum=i;
    while(1) {
        tmp = i;
        i += prev;
        prev = tmp;
        if(i > MAX)
            break;
        if(!(i%2))
            sum+=i;
    }
    printf("%lld\n",sum);
    return 0;
}
