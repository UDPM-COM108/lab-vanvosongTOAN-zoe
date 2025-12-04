#include <stdio.h>

int main() {
//bài 1
    int n;
    printf("Nhập số phần tử: ");
    scanf("%d", &n);

    int mang[n];
    for(int i = 0; i < n; i++){
        printf("Nhập mảng[%d]: ", i);
        scanf("%d", &mang[i]);
    }

    float tong = 0;
    int count = 0;

    for(int i = 0; i < n; i++){
        if(mang[i] % 3 == 0){
            tong += mang[i];
            count++;
        }
    }

    if(count == 0){
        printf("Không có số nào chia hết cho 3");
    } else {
        float tb = tong / count;
        printf("Trung bình các số chia hết cho 3 = %.2f", tb);
    }
    
    
//bài 2
    int n2;
    printf("Nhập số phần tử: ");
    scanf("%d", &n2);

    int mang2[n2];
    for(int i2 = 0; i2 < n2; i2++){
        printf("Nhập mảng[%d]: ", i2);
        scanf("%d", &mang2[i2]);
    }

    int max = mang2[0];
    int min = mang2[0];

    for(int i2 = 1; i2 < n2; i2++){
        if(mang2[i2] > max) max = mang2[i2];
        if(mang2[i2] < min) min = mang2[i2];
    }

    printf("Giá trị lớn nhất: %d\n", max);
    printf("Giá trị nhỏ nhất: %d\n", min);

// bài 3
    int n3;
    printf("Nhập số phần tử: ");
    scanf("%d", &n3);

    int mang3[n3];
    for(int i3 = 0; i3 < n3; i3++){
        printf("Nhập mảng[%d]: ", i3);
        scanf("%d", &mang3[i3]);
    }

    for(int i3 = 0; i3 < n3 - 1; i3++){
        for(int j3 = i3 + 1; j3 < n3; j3++){
            if(mang3[i3] < mang3[j3]){
                int temp = mang3[i3];
                mang3[i3] = mang3[j3];
                mang3[j3] = temp;
            }
        }
    }

    printf("Mảng sau khi sắp xếp giảm dần:\n");
    for(int i3 = 0; i3 < n3; i3++){
        printf("%d ", mang3[i3]);
    }

//bài 4
    int n4, m4;
    printf("Nhập số hàng (n): ");
    scanf("%d", &n4);
    printf("Nhập số cột (m): ");
    scanf("%d", &m4);

    int mang4[n4][m4];

    for(int i4 = 0; i4 < n4; i4++){
        for(int j4 = 0; j4 < m4; j4++){
            printf("Nhập mảng[%d][%d]: ", i4, j4);
            scanf("%d", &mang4[i4][j4]);
        }
    }

    printf("\nMa trận bình phương:\n");
    for(int i4 = 0; i4 < n4; i4++){
        for(int j4 = 0; j4 < m4; j4++){
            printf("%6d", mang4[i4][j4] * mang4[i4][j4]);
        }
        printf("\n");
    }

    return 0;
}
