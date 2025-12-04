#include <stdio.h>
#include <math.h>

int main(){
    int n, S = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        if(i % 2 != 0){
            S += i;
        }
    }
    printf("Tong so le: %d", S);
    return 0;
}
