#BÀI 1: TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2
Input: nhập từ bàn phím 2 giá trị min, max
Output: Trung bình tổng của các số tự nhiên chia hết cho 2 từ min tới max
Khai báo 2 biến kiểu int: min,max
Khai báo biến int i = min
Khai báo biến và gán giá trị khởi đầu cho các biến: float tong = 0, bienDem = 0, trungBinh = 0
while( i <= max){
     Nếu (i % 2 == 0){
         tong += i;
         bienDem ++;
     }
}
trungBinh = tong/bienDem;
#Bài 2: XÁC ĐỊNH SỐ NGUYÊN TỐ
Input: Nhập vào từ bàn phím số x
Output: Kết luận x có phải là số nguyên tố hay không
int x //Lấy giá trị từ bàn phím
int count=0
int i
for(i=2;i<x;i++){
   if(x%i ==0){
      count++;
   }
}
if(count ==0){
   x là số nguyên tố
}else{
   x không phải số nguyên tố
}
#Bài 3: XÁC ĐỊNH SỐ CHÍNH PHƯƠNG
Input: Nhập vào từ bàn phím số x
Output: Kết luận x có phải là số chính phƣơng hay không?
[Ví dụ: 9 = 3 * 3]
int x //Lấy giá trị từ bàn phím
int count=0
int i
for(i=1;i<x;i++){
    if(i*i == x){
       x là số chính phƣơng;
       break;
    }
}
#Bài 4: XÂY DỰNG CHƯƠNG TRÌNH CHO CÁC BẠN TRÊN.