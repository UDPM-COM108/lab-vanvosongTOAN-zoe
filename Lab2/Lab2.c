#include <stdio.h>
#include <string.h>
int main(){
 //bài 1   
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
//bài 2    
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
    float chuvihcn= 2*(dai+rong);
    //tính diện tích
    float dientichhcn=dai*rong;
    //xuất kết quả
    printf("Chu vi hình chữ nhật là : %.2fM\n", chuvihcn);
    printf("Diện tích hình chữ nhật là: %.2fM\n", dientichhcn);
//bài 3
        float bankinh;
    //giới thiệu bài làm
    printf("Bài 3: Xây dựng chương trình tính chu vui diện tích hình tròn\n");
    //giới thiệu người làm
    printf("Đây là chương trình tính tính chu vui diện tích hình tròn(PS49327).\n");
    //yêu cầu nhập chu vui hình tròn
    printf("Vui lòng nhập bán kính hình tròn: ");
    scanf("%f",&bankinh);
    #define PI 3.14159265//gán số pi chuẩn
    float chuviht=bankinh*2*PI;//tính chu vi
    float dientichht=PI*bankinh*bankinh;
    //xuất kết quả
    printf("Chu vi hình tròn là:%.2f \n", chuviht);
    printf("Diện tích hình tròn là: %.2f \n", dientichht);
//bài 4
    float toan,ly,hoa;
    //giới thiệu bài là
    printf("Bài 4: Xây dựng chương trình tính điểm trung bình\n");
    //giới thiệu người làm
    printf("Đây là chương trình tính tính điểm trung bình của ToanThienPham(PS49327).\n");
    //Yêu cầu nhập điểm theo môn
   do{ printf("Vui lòng nhập điểm toán của bạn: ");
    scanf("%f",&toan);
        if(toan<0||toan>10)
            printf("Điểm số không hợp lệ. Vui lòng điền lại(0-10)\n");//in nếu nỗi
    }while(toan<0||toan>10);    
    do{printf("Vui lòng nhập điểm lý của bạn: ");
    scanf("%f", &ly);
        if(ly<0||ly>10)
            printf("Điểm số không hợp lệ. Vui lòng điền lại(0-10)\n");//in nếu lỗi
    } while(ly<0||ly>10);   
    do{printf("Vui lòng nhập điểm hóa của bạn: ");
    scanf("%f",&hoa);
        if(hoa<0||hoa>10)
            printf("Điểm số không hợp lệ. Vui lòng điền lại(0-10)\n");//in nếu lỗi
    } while(hoa<0||hoa>10);
    //tính điểm trung bình 
    int hs_toan=3,hs_ly=2,hs_hoa=1;
    float dtb=(toan*hs_toan+ ly*hs_ly+hoa*hs_hoa)/(hs_toan+hs_ly+hs_hoa);
    //xuất điểm trung bình
    printf("Điểm trung bình là: %.2f\n",dtb);
//bài 5
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
    return 0;
}