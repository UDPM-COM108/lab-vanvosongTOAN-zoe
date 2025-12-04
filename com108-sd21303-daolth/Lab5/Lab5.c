#include <stdio.h>

//bài 1 số lớn nhất
int timmax(int so1, int so2, int so3) {
    int max = so1;
    if (so2 > max) {
        max = so2;
    }
    if (so3 > max) {
        max = so3;
    }
    return max;
}

//bài 2 năm nhuận
int checknam(int nam) {
    int flag = 0;
    if (nam % 400 == 0) {
        flag = 1;
    } else if (nam % 4 == 0 && nam % 100 != 0) {
        flag = 1;
    }
    return flag;
}

//bài 3 hoán vị
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    printf("__________Đây là bài làm của Toàn Thiên Phạm__________\n");
    //gọi bài 1
    printf("Bài 1: : XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ.\n");
    int a, b, c;
    printf("Nhập số thứ nhất muốn tìm số lớn nhất: \n");
    scanf("%d", &a);
    printf("Nhập số thứ hai muốn tìm số lớn nhất: \n");
    scanf("%d", &b);
    printf("Nhập số thứ ba muốn tìm số lớn nhất: \n");
    scanf("%d", &c);
    int somax = timmax(a, b, c);
    printf("Số lớn nhất trong 3 số là: %d\n", somax);
    //gọi bài 2
    printf("Bài 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN\n");
    int nam;
    printf("Nhập năm muốn tính năm nhuận: ");
    scanf("%d", &nam);

    if (checknam(nam)) {
        printf("%d là năm nhuận\n", nam);
    } else {
        printf("%d không phải năm nhuận\n", nam);
    }
    //gọi bài 3
    printf("BÀI 3: XÂY DỰNG HÀM HOÁN VỊ\n");
    int x, y;
    printf("Nhập số thứ nhất muốn tính hoán vị: ");
    scanf("%d", &x);
    printf("Nhập số thứ hai muốn tính hoán vị: ");
    scanf("%d", &y);
    swap(&x, &y);
    printf("Sau khi hoán vị: x = %d, y = %d\n", x, y);
    return 0;
}
