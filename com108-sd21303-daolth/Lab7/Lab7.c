#include <stdio.h>
#include <string.h>
int main(){
//bai 1
char chuoi[100];
printf("xin mời nhập chuỗi: \n");//yêu cầu input
fgets(chuoi,sizeof(chuoi),stdin);//input
chuoi[strcspn(chuoi,"\n")]=0;
int i=0,n=0,p=0;
while(chuoi[i++]!='\0'){
if (chuoi[i-1]=='a'||chuoi[i-1]=='i'||chuoi[i-1]=='e'||chuoi[i-1]=='u'||chuoi[i-1]=='o')
n++;
else
p++;
}
printf("chuỗi %s có chứa %d nguyên âm và %d phụ âm.\n",chuoi,n,p);
//bài 2
char userSys[] = "admin";
int passSys = 12345;
char user[100];
int pass;
printf("Tên đăng nhập: \n");
scanf("%s",user);
printf("Mật khẩu: \n");
scanf("%d",&pass);
if(strcmp(user,userSys)==0 && pass==passSys){
    printf("Đăng nhập thành công.\n");
    }else{
        printf("Sai mật khẩu hoặc tên đăng nhập.\n");
    }
//bài 3
char s[5][20];
int i3,j;
char temp[20];
printf("Nhập 5 chuỗi: \n");
while(getchar() != '\n');
for(i3=0;i3<5;i3++){
    fgets(s[i3],sizeof(s[i3]),stdin);
    s[i3][strcspn(s[i3], "\n")]=0;
}
    for (i = 1; i < 5; i++) {
        for (j = 1; j < 5; j++) {
            if (strcmp(s[j - 1], s[j]) > 0) {
                // Hoán vị các chuỗi
                strcpy(temp, s[j - 1]);
                strcpy(s[j - 1], s[j]);
                strcpy(s[j], temp);
            }}}
printf("Chuỗi sau khi sắp xếp: \n");
for(i3=0;i3<5;i3++){
    printf("%s\n",s[i3]);
}

return (0);
}