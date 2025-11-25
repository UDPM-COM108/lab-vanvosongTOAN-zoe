#include <stdio.h>

int main(){
    double dtb;
    printf("Nhap diem trung binh: ");
    scanf("%lf", &dtb);
    if(dtb>=9){
        printf("Xuat sac");
    }else if (dtb>=8){
        printf("Gioi");
    }else if (dtb>=7){
        printf("Kha");
    }else if(dtb>=5){
        printf("Trung Binh"); 
    }else{
        printf("Yeu!!!");
    }   
    return 0;
}