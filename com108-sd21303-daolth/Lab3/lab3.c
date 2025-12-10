#include <stdio.h>
#include <stdlib.h>// exit()

int main(){
    int luachon;
    do{
        printf("Chọn chương trình tính toán\n");
        printf("1. Tính học lực\n");
        printf("2. Giải phương trình bậc nhất\n");
        printf("3. Giải phương trình bậc hai\n");
        printf("4. Tính tiền điện\n");
        printf("0. Thoát\n");
        printf("Mời bạn nhập lựa chọn: ");
        scanf("%d",&luachon);
        switch (luachon){
            case 1:
                printf("Tính học lực:");
                double dtb;
                printf("Nhap diem trung binh: ");
                scanf("%lf", &dtb);
                if(dtb>=9){
                    printf("Xuat sac"); 
                }
                break;
            case 2:
                printf("Tính phương trình bậc nhất: ");
                break;
            case 3:
                printf("Tính phương trình bậc hai:");
                break;
            case 4:
                printf("Tính tiền điện - Coming soon:");
                break;
            case 0:
                printf("Thoát!!!");
                exit(0);
                break;
            default:
                printf("vui lòng chọn lại từ 1 đến 4. Hoặc chọn 0 để thoát\n");
                break;
        }
        printf("\n");
        if(luachon ==0){
            printf("Cảm ơn bạn và hẹn gặp lại");
            break;
        }
    }while (luachon!=0);
    return 0;
}