#include <stdio.h>
int main(){
    float ab,bc,ca;
    //giới thiệu bài là
    printf("Bài 5: Xây dựng chương trình tính chu vui tam giác vuông\n");
    //giới thiệu người làm
    printf("Đây là chương trình tính tính chu vi tam giác vuông của ToanThienPham(PS49327).\n");

    //Yêu cầu nhập độ dài cạnh
    printf("Vui lòng nhập độ dài cạnh AB: ");
    scanf("%f",&ab);
    printf("Vui lòng nhập độ dài cạnh BC: ");
    scanf("%f",&bc);
    printf("Vui lòng nhập đồ dài cạnh CA: ");
    scanf("%f",&ca);

    //tính chu vui tam giác vuông
    float chuvi = ab+bc+ca;
    float dientich = ab*ca/2; 
    
    
    
    
    
    //xuat ket qua
    printf("Chu vi tam giác là: %.1f\n",chuvi);
    printf("Diện tích tam giác là: %.1f\n",dientich);
    return(0);
}
