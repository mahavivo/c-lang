#include <stdio.h>
 
void output(long int b, long int i){
    printf("\n%ld = 800 * %ld + 9 * %ld\n", b, i, i);
}
 
 
int main(){
 
    void output(long int b, long int i);
    long int a, b, i;
    a = 809;
    for(i = 10; i < 100; i++){
        b = i * a;
        if (b >= 1000 && b <= 10000 && 8 * i < 100 && 9 * i >= 100){
            output(b, i);
        }
    }
    return 0;
}