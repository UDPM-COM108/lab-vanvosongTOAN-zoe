#include <stdio.h>
#include <ctype.h>
int main(){
    double dtb;
    /*printf("Đây là Demo slide 3 của Toàn Thiên Phạm(PS49327).\n");//giới thiệu người làm 
    printf("Nhập điểm trung bình cùa bạn: ");
    scanf("%lf", &dtb);//nhập 
    if(dtb>9){//đk xs
        printf("------------------Bạn là xuất sắc------------------\n");//out xs
    }else if (dtb>8){//đk giỏi
        printf("------------------Bạn là giỏi------------------\n");//out giỏi
    }else if (dtb>7){//đk khá
        printf("------------------Bạn là khá------------------\n");//out khá
    }else if (dtb>5){//đk tb
        printf("------------------Bạn là trung bình------------------\n");//out tb
    }else{
        printf("------------------Bạn là yếu------------------\n");//out yếu
    }*/
    //demo switch
    printf("Phần 2: Switch\n");
    printf("Việt Nam có bao nhiêu dân tộc anh em: \n A. 52\n B. 53\n C.54\n D.55\n");
    printf("Hãy chọn đáp án (A/B/C/D)");
    char dapan;
    do{scanf(" %c",&dapan);
    dapan = tolower(dapan);
    switch(dapan){
        case 'a' : printf("bạn đã chọn sai\n");
        break;
        case 'b' : printf("bạn đã chọn sai\n");
        break;
        case 'c' : printf("bạn đã chọn đúng\n");
        break;
        case 'd' : printf("bạn đã chọn sai\n");
        break;
        default:
            printf("Lựa chọn không hợp lệ, vui lòng thử lại.\n");
    }
    }while(dapan!='c');

    return 0;
}
