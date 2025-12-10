#include <stdio.h>
#include <math.h>
//void để đc cộng điểm
void bai1() {
    int min, max;
    printf("Nhập min: ");
    scanf("%d", &min);
    printf("Nhập max: ");
    scanf("%d", &max);

    int i = min;
    float tong = 0;
    int biendem = 0;
    float trungbinh = 0;

    while (i <= max) {
        if (i % 2 == 0) {
            tong += i;
            biendem++;
        }
        i++;
    }

    if (biendem > 0) {
        trungbinh = tong / biendem;
        printf("Trung bình cộng các số chẳn tử %d den %d la: %.2f\n", min, max, trungbinh);
    } else {
        printf("Không có số chẳn trong khoảng [%d, %d]\n", min, max);
    }
}

void bai2() {
    int x, biendem2 = 0;
    printf("Nhập x: ");
    scanf("%d", &x);

    if (x < 2) {
        printf("%d không phải là số nguyên tố\n", x);
        return;
    }

    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            biendem2++;
        }
    }

    if (biendem2 == 0) {
        printf("%d là số nguyên tố\n", x);
    } else {
        printf("%d không phải là số nguyên tố\n", x);
    }
}

void bai3() {
    int x;
    printf("Nhập X: ");
    scanf("%d", &x);

    int checkscp = 0;
    for (int i = 1; i <= sqrt(x); i++) {
        if (i * i == x) {
            checkscp = 1;
            break;
        }
    }

    if (checkscp) {
        printf("%d là số chính phương\n", x);
    } else {
        printf("%d không phải là số chính phương\n", x);
    }
}

void doiNhiPhan(int n) {
    if (n > 1) {
        doiNhiPhan(n / 2);
    }
    printf("%d", n % 2);
}

void bai4() {
    int n;
    printf("Nhập số thập phân: ");
    scanf("%d", &n);

    printf("Số nhị phân: ");
    if (n == 0) {
        printf("0");
    } else {
        doiNhiPhan(n);
    }
    printf("\n");
}

// Menu
int main() {
    int luachonmenu;
    do {
        printf(" ______________________________\n");
        printf("|PHAM NGUYEN THIEN TOAN PS49327|\n");
        printf("|------------------------------|\n");
        printf("______________MENU______________\n");
        printf("1. TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2\n");
        printf("2. XÁC ĐỊNH SỐ NGUYÊN TỐ\n");
        printf("3. XÁC ĐỊNH SỐ CHÍNH PHƯƠNG\n");
        printf("4. CHUYỂN ĐỔI SỐ THẬP PHÂN SANG NHỊ PHÂN\n");
        printf("0. Exit\n");
        printf("Nhập lựa chọn của bạn: ");
        scanf("%d", &luachonmenu);

        switch (luachonmenu) {
            case 1:
            bai1();
            break;
            case 2:
            bai2();
            break;
            case 3:
            bai3();
            case 4:
            bai4();
            break;
            break;
            case 0:
            printf("Hẹn gặp lại.\n"); break;
            default:
            printf("Lựa chọn không hợp lệ!\n");
        }
    } while (luachonmenu != 0);

    return 0;
}