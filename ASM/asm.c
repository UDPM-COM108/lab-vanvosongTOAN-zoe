#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main() {
    char boDem[10];
    int luachon;//khai báo cho fgets
    do {
        printf(" ______________________________\n");
        printf("|PHAM NGUYEN THIEN TOAN PS49327|\n");
        printf("|------------------------------|\n");
        printf("______________MENU______________\n");
        printf("0.exit (kết thúc chương trình)\n");
        printf("1.Kiểm tra số nguyên.\n");
        printf("2.Tìm Ước số chung và bội số chung của 2 số.\n");
        printf("3.Chương trình tính tiền cho quán Karaoke.\n");
        printf("4.Tính tiền điện.\n");
        printf("5.Chức năng đổi tiền.\n");
        printf("6.Xây dựng chức năng tính lãi suất vay ngân hàng vay trả góp.\n");
        printf("7.Xây dựng chương trình vay tiền mua xe.\n");
        printf("8.Sắp xếp thông tin sinh viên.\n");
        printf("9.Xây dựng game FPOLY-LOTT (2/15)\n");
        printf("10.Xây dựng chương trình tính toán phân số\n");
        printf("Vui lòng chọn yêu cầu bạn muốn:\n");
        fgets(boDem, sizeof(boDem), stdin);             //dùng scanf lỗi hoài nên đổi hết qua fgets
        boDem[strcspn(boDem, "\n")] = 0; // bỏ \n
        luachon = atoi(boDem);
        switch(luachon) {
            case 1: {
                printf("Kiểm tra số nguyên\n");
                break;
            }
            case 2: {
                printf("Tìm ước số chung và bội số chung của hai số\n");
                break;
            }
            case 3: {
                printf("Chương trình tính tiền quán karoke\n");
                break;
            }
            case 4: {
                printf("Tính tiền điện\n");
            }
            case 5: {
                printf("Chức năng đổi tiền\n");
                break;
            }
            case 6: {
                printf("Tính lãi xuất vay ngân hàng trả góp\n");
                break;
            }
            case 7: {
               printf("Chương trình vay mua xe\n");
                break;
            }
            case 8: {
                printf("Sắp xếp thông tin sinh viên\n");
                break;
            }
            case 9: {
                printf("Xây dựng game FPOLY-LOTT\n");
                break;
            }
            case 10: {
                printf("Chương tình tính toán phân số\n");
                break;
            }
            case 0:
            printf("Hẹn gặp lại!!");
                break;
            default: printf("Lỗi, vui lòng chọn lại\n"); break;
        }
    } while(luachon!=0);
    return 0;
}
