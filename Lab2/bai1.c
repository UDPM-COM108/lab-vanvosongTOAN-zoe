#include <stdio.h>
int main(){
    float a,b;
    //giới thiệu bài làm
    printf("Bài 1: Thực hành chương trình +- 2 số\n");


    printf("Đây là chương trình tính tổng hiệu hai số của Toàn Thiên Phạm(PS49327).\n");//giới thiệu người làm
    
    printf("Vui lòng nhập số thứ nhất muốn tính tổng hiệu: ");//thông báo yêu cầu nhập số thứ nhất
    scanf("%f", &a);

    printf("Vui lòng nhập số thứ hai muốn tính tổng hiệu: ");//thông báo yêu cầu nhập số thứ hai
    scanf("%f", &b);

    //thực hiện phép tính
    float tong= a+b;
    float hieu= a-b;

    //xuất kết quả
    printf("Tổng của hai số là: %.1f\n",tong);
    printf("Hiệu của hai số là: %.1f\n", hieu);
    return 0;
}