#include <stdio.h>
#include <string.h>
int main(){
    float dai,rong;
    char donvi[3];//Lưu m hoặc cm
    //giới thiệu bài làm
    printf("Bài 2: Xây dựng chương trình tính chu vui diện tích hình chữ nhật");
    //giới thiệu người làm
    printf("Đây là chương trình tính tính chu vui diện tích hình chữ nhật(PS49327).\n");

    //yêu cầu đơn vị
    printf("Bạn sẽ tính bằng CM hay M: ");
    scanf("%2s", donvi);
    
    printf("Nhập chiều dài hình chữ nhật: ");//Yêu cầu nhập chiều dài
    scanf("%f", &dai);//Nhập chiều dài
    printf("Nhập chiều rộng hình chữ nhật: ");//Yêu cầu nhập chiều rộng hình chữ nhật
    scanf("%f",&rong);

    //đổi đơn vị
    if(strcmp(donvi, "cm")==0) {
        dai = dai/100;
        rong = rong/100;
    }

    //tính chu vi
    float chuvi= 2*(dai+rong);
    //tính diện tích
    float dientich=dai*rong;

    //xuất kết quả
    printf("Chu vi hình chữ nhật là : %.2fM\n", chuvi);
    printf("Diện tích hình chữ nhật là: %.2fM\n", dientich);
    return 0;
}