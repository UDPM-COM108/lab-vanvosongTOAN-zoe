#include <stdio.h>
#include <string.h>
struct nhanvien{
    int id;
    char hoten[50];
    float songaycong;
    float luong;
};
int main(){
int i,j;
struct nhanvien st[5];
const int luongCB = 1500000;
const int ngayCongQD = 25;
    for(i=0;i<5;i++){
        printf("Nhập mã nhân viên thứ %d \n",i+1);
        scanf("%d",&st[i].id);
        printf("Nhập họ tên nhân viên thứ %d \n",i+1);
        getchar();
        fgets(st[i].hoten,sizeof(st[i].hoten),stdin);
        st[i].hoten[strcspn(st[i].hoten, "\n")]=0;
        printf("Nhập số ngày công của nhân viên thứ %d \n",i+1);
        scanf("%f",&st[i].songaycong);
        if (st[i].songaycong < ngayCongQD) {
                st[i].luong = luongCB * 0.9;
        } else if (st[i].songaycong > ngayCongQD) {
    float luong1ngay = luongCB / ngayCongQD;
    int ngayDu = (int)st[i].songaycong - ngayCongQD;

    st[i].luong = luongCB + ngayDu * luong1ngay * 2;  
}  else {
            st[i].luong = luongCB;
        }
    }
    //bai2
    for(i = 0; i < 5-1; i++){
        for(j = i+1; j < 5; j++){
            if(st[i].luong > st[j].luong){
                struct nhanvien temp = st[i];
                st[i] = st[j];
                st[j] = temp;
}}}
    printf("danh sách|mã nv|họ tên|ngày công|lương\n");
    for(i = 0; i < 5; i++){
        printf("--------|%d|%s|%.0f|%.0f\n",
               st[i].id, st[i].hoten, st[i].songaycong, st[i].luong);
    }
    return (0);
}