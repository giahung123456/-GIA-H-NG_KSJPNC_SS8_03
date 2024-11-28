#include <stdio.h>

int main() {
    int n;

    
    printf("Nhap vao so nguyen n (kich thuoc ma tran vuong): ");
    scanf("%d", &n);

   
    if (n <= 0) {
        printf("Kich thuoc ma tran phai lon hon 0.\n");
        return 1;
    }

   
    int mtv[n][n];

    printf("Nhap gia tri cho cac phan tu trong ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap phan tu mmtv[%d][%d]: ", i, j);
            scanf("%d", &mtv[i][j]);
        }
    }

    printf("Ma tran vuong vua nhap:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mtv[i][j]);
        }
        printf("\n");
    }

   
}