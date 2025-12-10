#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
//struct==================================================================
typedef struct {
    char hoten[50];
    float diem;
    char hocluc[20];
} sinhvien;

void xeploai(sinhvien *s);
void sapxep(sinhvien a[], int n);
void xuatSV(sinhvien a[], int n);

typedef struct {
    int tu, mau;
} PhanSo;

int gcd(int a, int b);
PhanSo rutgon(PhanSo x);
PhanSo cong(PhanSo a, PhanSo b);
PhanSo tru(PhanSo a, PhanSo b);
PhanSo nhan(PhanSo a, PhanSo b);
PhanSo chia(PhanSo a, PhanSo b);
void xuatps(PhanSo x);
//bai 1==================================================================
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
//bai 2==================================================================
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
//bai 3==================================================================
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
//bai 4==================================================================
void case4() {
    int kwh;
    printf("Nhập số kwh: ");
    if(scanf("%d",&kwh)!=1){while(getchar()!='\n'); return;}
    while(getchar()!='\n');

    float tien = 0;
    if(kwh<=50) tien=kwh*1678;
    else if(kwh<=100) tien=50*1678+(kwh-50)*1734;
    else if(kwh<=200) tien=50*1678+50*1734+(kwh-100)*2014;
    else if(kwh<=300) tien=50*1678+50*1734+100*2014+(kwh-200)*2536;
    else if(kwh<=400) tien=50*1678+50*1734+100*2014+100*2536+(kwh-300)*2834;
    else tien=50*1678+50*1734+100*2014+100*2536+100*2834+(kwh-400)*2927;

    printf("Tiền điện: %.0f\n", tien);
}
//bai 5==================================================================
void case5() {
    int tien;
    printf("Nhập tiền: ");
    if(scanf("%d",&tien)!=1){while(getchar()!='\n'); return;}
    while(getchar()!='\n');

    int m[]={500,200,100,50,20,10,5,2,1};
    int s[9]={0};

    for(int i=0;i<9;i++){
        if(tien>=m[i]){
            s[i] = tien / m[i];
            tien %= m[i];
        }
    }

    printf("Đổi ra:\n");
    for(int i=0;i<9;i++)
        if(s[i] > 0)
            printf("%d x %d\n", s[i], m[i]);
}
//bai 6==================================================================
void case6() {  
    float vay;
    printf("Vay: ");
    if(scanf("%f",&vay)!=1){while(getchar()!='\n'); return;}
    while(getchar()!='\n');

    float goc = vay / 12, conlai = vay;

    printf("Tháng | Gốc | Lãi | Tổng | Còn\n");
    for(int t=1; t<=12; t++){
        float l = conlai * 0.05;
        float tong = goc + l;
        conlai -= goc;

        printf("%2d | %.0f | %.0f | %.0f | %.0f\n",
               t, goc, l, tong, conlai);
    }
}
//bai 7==================================================================
void case7() {
    float p;
    printf("Phần trăm: ");
    if(scanf("%f",&p)!=1){while(getchar()!='\n'); return;}
    while(getchar()!='\n');

    float xe = 500000000;
    float vay = xe * p / 100;
    float truoc = xe - vay;

    int months = 24 * 12;
    float rate = 0.072 / 12;

    float hang = (vay * rate) / (1 - pow(1+rate, -months));

    printf("Trả trước: %.0f, Hàng tháng: %.0f\n", truoc, hang);
}
//bai 8==================================================================
void case8() {
    sinhvien ds[100];
    int n;

    printf("Số sinh viên: ");
    if(scanf("%d",&n)!=1){while(getchar()!='\n'); return;}
    while(getchar()!='\n');

    for(int i=0;i<n;i++){
        printf("Họ tên %d: ", i+1);
        fgets(ds[i].hoten, sizeof(ds[i].hoten), stdin);
        ds[i].hoten[strcspn(ds[i].hoten, "\n")] = 0;

        printf("Điểm: ");
        if(scanf("%f",&ds[i].diem)!=1){while(getchar()!='\n'); return;}
        while(getchar()!='\n');

        xeploai(&ds[i]);
    }

    sapxep(ds, n);
    xuatSV(ds, n);
}
//bai 9==================================================================
void case9() {
    int s1,s2;
    printf("Số1: "); if(scanf("%d",&s1)!=1){while(getchar()!='\n'); return;}
    printf("Số2: "); if(scanf("%d",&s2)!=1){while(getchar()!='\n'); return;}
    while(getchar()!='\n');

    srand(time(NULL));
    int l1=rand()%15+1, l2=rand()%15+1, trung=0;

    if(s1==l1 || s1==l2) trung++;
    if(s2==l1 || s2==l2) trung++;

    printf("Kết quả: %02d-%02d\n", l1, l2);

    if(trung==0) printf("Chúc may mắn!\n");
    else if(trung==1) printf("Trúng giải nhì!\n");
    else printf("Trúng giải nhất!\n");
}
//bài 10==================================================================
void case10() {
    PhanSo a,b;
    printf("Phân số 1 (tu mau): "); if(scanf("%d%d",&a.tu,&a.mau)!=2){while(getchar()!='\n'); return;}
    printf("Phân số 2 (tu mau): "); if(scanf("%d%d",&b.tu,&b.mau)!=2){while(getchar()!='\n'); return;}
    while(getchar()!='\n');

    printf("Tổng: ");   xuatps(cong(a,b)); printf("\n");
    printf("Hiệu: ");   xuatps(tru(a,b)); printf("\n");
    printf("Tích: ");   xuatps(nhan(a,b)); printf("\n");
    printf("Thương: "); xuatps(chia(a,b)); printf("\n");
}
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
void xuatSV(sinhvien a[], int n) {
    printf("\n%-25s %-10s %-15s\n", "Họ tên", "Điểm", "Học lực");
    for (int i = 0; i < n; i++)
        printf("%-25s %-10.2f %-15s\n", a[i].hoten, a[i].diem, a[i].hocluc);
}
int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}
PhanSo rutgon(PhanSo x){
    int g = gcd(abs(x.tu), abs(x.mau));
    x.tu /= g;
    x.mau /= g;
    return x;
}
PhanSo cong(PhanSo a, PhanSo b){
    PhanSo kq;
    kq.tu = a.tu*b.mau + b.tu*a.mau;
    kq.mau = a.mau*b.mau;
    return rutgon(kq);
}
PhanSo tru(PhanSo a, PhanSo b){
    PhanSo kq;
    kq.tu = a.tu*b.mau - b.tu*a.mau;
    kq.mau = a.mau*b.mau;
    return rutgon(kq);
}
PhanSo nhan(PhanSo a, PhanSo b){
    PhanSo kq;
    kq.tu = a.tu*b.tu;
    kq.mau = a.mau*b.mau;
    return rutgon(kq);
}
PhanSo chia(PhanSo a, PhanSo b){
    PhanSo kq;
    kq.tu = a.tu*b.mau;
    kq.mau = a.mau*b.tu;
    return rutgon(kq);
}
void xuatps(PhanSo x){
    printf("%d/%d", x.tu, x.mau);
}
//main==================================================================
int main() {
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
        printf("9.Xây dựng game FPOLY-LOTT (2/15)\n");
        printf("10.Xây dựng chương trình tính toán phân số\n");
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
            case 4:  
                case4(); 
                    break;
            case 5:  
                case5(); 
                    break;
            case 6:  
                case6(); 
                    break;
            case 7:  
                case7(); 
                    break;
            case 8:  
                case8(); 
                    break;
            case 9:  
                case9(); 
                    break;
            case 10: 
                case10(); 
                    break;
            case 0: 
                printf("Hẹn gặp lại!!\n"); break;
            default: 
                printf("Lỗi, vui lòng chọn lại.\n");
        }
    } while (luachon != 0);

    return 0;
}
