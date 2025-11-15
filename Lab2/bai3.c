#include <stdio.h>
int main(){
    float bankinh;
    //giới thiệu bài làm
    printf("Bài 3: Xây dựng chương trình tính chu vui diện tích hình tròn\n");
    //giới thiệu người làm
    printf("Đây là chương trình tính tính chu vui diện tích hình tròn(PS49327).\n");

    //yêu cầu nhập chu vui hình tròn
    printf("Vui lòng nhập bán kính hình tròn: ");
    scanf("%f",&bankinh);

    #define PI 3.14159265//gán số pi chuẩn

    float chuvi=bankinh*2*PI;//tính chu vi
    float dientich=PI*bankinh*bankinh;

    //xuất kết quả
    printf("Chu vi hình tròn là:%.2f \n", chuvi);
    printf("Diện tích hình tròn là: %.2f \n", dientich);
    return 0;
}