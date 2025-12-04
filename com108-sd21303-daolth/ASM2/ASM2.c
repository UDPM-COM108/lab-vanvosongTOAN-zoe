#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//-------------------- struct & hàm hỗ trợ --------------------
typedef struct {
    char hoten[50];
    float diem;
    char hocluc[20];
} sinhvien;

void xeploai(sinhvien *s) {
    if (s->diem >= 9.0) strcpy(s->hocluc, "Xuất sắc");
    else if (s->diem >= 8.0) strcpy(s->hocluc, "Giỏi");
    else if (s->diem >= 6.5) strcpy(s->hocluc, "Khá");
    else if (s->diem >= 5.0) strcpy(s->hocluc, "Trung bình");
    else strcpy(s->hocluc, "Yếu");
}

void sapxep(sinhvien a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i].diem < a[j].diem) {
                sinhvien temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

void xuat(sinhvien a[], int n) {
    printf("\n%-25s %-10s %-15s\n", "Họ tên", "Điểm", "Học lực");
    for (int i = 0; i < n; i++)
        printf("%-25s %-10.2f %-15s\n", a[i].hoten, a[i].diem, a[i].hocluc);
}

//-------------------- CÁC CASE --------------------
//bài 1
void case1() {
    int x1;
    printf("Nhập vào số nguyên X: ");
    if (scanf("%d", &x1) != 1) {
        printf("Nhập không hợp lệ!\n");
        while (getchar() != '\n');
        return;
    }
    while (getchar()!='\n');

    printf("Số %d là số nguyên.\n", x1);

    if (x1 < 2) printf("Không phải số nguyên tố.\n");
    else {
        int check = 1;
        for (int i = 2; i <= sqrt(x1); i++)
            if (x1 % i == 0) check = 0;
        printf(check ? "Là số nguyên tố.\n" : "Không phải số nguyên tố.\n");
    }

    if (x1 < 0) printf("Không phải số chính phương.\n");
    else {
        int y = sqrt(x1);
        printf(y*y == x1 ? "Là số chính phương.\n" : "Không phải số chính phương.\n");
    }
}
//bài 2
void case2() {
    int x2, y2;
    printf("Nhập X: ");
    if (scanf("%d", &x2) != 1){ while(getchar()!='\n'); return; }
    printf("Nhập Y: ");
    if (scanf("%d", &y2) != 1){ while(getchar()!='\n'); return; }
    while (getchar()!='\n');

    int uscln = 1;
    int min = x2 < y2 ? x2 : y2;

    for (int i = 1; i <= min; i++)
        if (x2 % i == 0 && y2 % i == 0) uscln = i;

    int bscnn = (x2 * y2) / uscln;
    printf("USCLN = %d, BSCNN = %d\n", uscln, bscnn);
}
//bài 3
void case3() {
    int hat, ve;
    printf("Bắt đầu: ");
    if(scanf("%d",&hat)!=1){while(getchar()!='\n'); return;}
    printf("Kết thúc: ");
    if(scanf("%d",&ve)!=1){while(getchar()!='\n'); return;}
    while(getchar()!='\n');

    int gio = ve - hat;
    float tien = 0;

    if (gio <= 3) tien = gio * 150000;
    else tien = 3*150000 + (gio - 3) * 150000 * 0.7;

    if (hat >= 14 && hat <= 17) tien *= 0.9;

    printf("Tổng giờ: %d, Tiền: %.0f\n", gio, tien);
}


//chạy menu-

int main() {
    char boDem[10];
    int luachon;

    do {
        printf(" ______________________________\n");
        printf("|PHAM NGUYEN THIEN TOAN PS49327|\n");
        printf("|------------------------------|\n");
        printf("______________MENU______________\n");
        printf("0.exit (kết thúc chương trình)\n");
        printf("1.Kiểm tra số nguyên.\n");
        printf("2.Tìm ƯớC số chung & bội số chung.\n");
        printf("3.Tính tiền Karaoke.\n");
        printf("4.Tính tiền điện.\n");
        printf("5.Đổi tiền.\n");
        printf("6.Tính lãi suất vay.\n");
        printf("7.Vay tiền mua xe.\n");
        printf("8.Sắp xếp sinh viên.\n");
        printf("Vui lòng chọn yêu cầu: ");
        scanf("%d",&luachon);

        switch(luachon) {
            case 1:
                case1();
                    break;
            case 2:
                case2();
                    break;
            case 3:
                case3();
                    break;
            case 0:
                printf("Hẹn gặp lại!!\n"); break;
            default:
                printf("Lỗi, vui lòng chọn lại.\n");
        }

    } while (luachon != 0);

    return 0;
}
