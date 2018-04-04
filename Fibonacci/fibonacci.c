#include <stdlib.h>
#include <stdio.h>

int main(){
    int i;
    unsigned long long *p = (unsigned long long*)malloc(200*sizeof(unsigned long long));
    
    *p = 0; *(p+1) = 1;
    
    for( i = 2; i < 200; i++){
        *(p + i) = *(p+i-2) + *(p+i-1);
        printf("%lld, ", p[i]);
    }
    printf("\n");
    
    free(p);
    return 0;
}