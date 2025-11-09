#include <stdio.h>
int main(){
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
    
    return 0;
}