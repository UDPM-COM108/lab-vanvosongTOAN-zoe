#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char luachon;
    printf(" ______________________________\n");
    printf("|PHAM NGUYEN THIEN TOAN PS49327|\n");
    printf("|------------------------------|\n");
    printf("______________MENU______________\n");
    do{
    printf("Vui lòng chọn yêu cầu bạn muốn:\n");
    printf("0.exit (kết thúc chương trình)\n");
    printf("1.Chương trình tính học lực.\n");
    printf("2.Chương trình tính phương trình bậc nhất.\n");
    printf("3.Chương trình tính phương trình bậc 2.\n");
    printf("4.Chương trình tính điện lực.\n");

    scanf(" %c", &luachon);

   switch (luachon){
        case '1': {
            double dtb;//diemtrungbinh
            printf("Nhập điểm trung bình cùa bạn: ");
            scanf("%lf", &dtb);//nhập 
            if(dtb>9){//đk xs
                printf("------------------Bạn là xuất sắc------------------\n");//out xs
            }else if (dtb>8){//đk giỏi
                printf("------------------Bạn là giỏi------------------\n");//out giỏi
            }else if (dtb>7){//đk khá
                printf("------------------Bạn là khá------------------\n");//out khá
            }else if (dtb>5){//đk tb
                printf("------------------Bạn là trung bình------------------\n");//out tb
            }else{
                printf("------------------Bạn là yếu------------------\n");//out yếu
            }
            break;
        }
        case '2': {
            float a0, b0;//heso ab
            printf("Nhập hệ số a: ");//nhap a
            scanf("%f", &a0);

            printf("Nhập hệ số b: ");//nhap b
            scanf("%f", &b0);

            if (a0 == 0) {
                if (b0 == 0) {
                    printf("Phương trình vô số nghiệm.\n");
                } else {
                    printf("Phương trình vô nghiệm.\n");
                }
            } else {
                float x = -b0 / a0;
                printf("Nghiệm của phương trình là: x = %.2f\n", x);// xuat ket qua
            }
            break;
        }
        case '3': {
            float a1, b1, c1;//dat abc
            printf("Nhập a, b, c (cách nhau bởi dấu cách): ");// nhap abc
            scanf("%f %f %f", &a1, &b1, &c1);

            if (a1 == 0) {
                if (b1 == 0) {
                    if (c1 == 0) {
                        printf("Phương trình có vô số nghiệm.\n");
                    } else {
                        printf("Phương trình vô nghiệm.\n");
                    }
                } else {
                    printf("Phương trình bật 1 có nghiệm: x = %.2f\n", -c1 / b1);
                }
            } else {
                float delta = b1*b1 - 4*a1*c1;
                if (delta < 0) {
                    printf("Phương trình vô nghiệm thực.\n");
                } else if (delta == 0) {
                    printf("Phương trình có hai nghiệm kép: x = %.2f\n", -b1 / (2*a1));
                } else {
                    float x1 = (-b1 + sqrt(delta)) / (2*a1);
                    float x2 = (-b1 - sqrt(delta)) / (2*a1);
                    printf("Phương trình có hai nghiệm phân biệt:\n");
                    printf("x1 = %.2f\n", x1);
                    printf("x2 = %.2f\n", x2);
                }
            }
            break;
        }
        case '4': {
            int kwh;//dat kwh
            double cost = 0;

            printf("Nhập số điện tiêu thụ (kWh): ");//nhap ky dien
            scanf("%d", &kwh);

            if (kwh <= 0) {
                printf("Số kwh phải lớn hơn 0.\n");//xuat neu loiu
                return 0;
            }

            if (kwh <= 50) {
                cost = kwh * 1678;
            } else if (kwh <= 100) {
                cost = 50 * 1678 + (kwh - 50) * 1734;
            } else if (kwh <= 200) {
                cost = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
            } else if (kwh <= 300) {
                cost = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
            } else if (kwh <= 400) {
                cost = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
            } else {
                cost = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
            }

            printf("Số tiền phải đóng: %.0f đồng\n", cost);// xuat ket qua
            break;
        }
        case '0':
            break;
        default: 
            printf("Yêu cầu lỗi, vui lòng chọn lại\n.");
            break;

    }
    }while (luachon != '0');


    return 0;
}