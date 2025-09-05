#include <stdio.h>
#include <string.h>
int main() {
    char a[100],b[100];
    printf("Nhap string thu nhat:\n ");
    scanf("%s",a);
    printf("Nhap string thu hai:\n ");
    scanf("%s",b);
    if(strlen(a)<=strlen(b)){
        if(strstr(b,a)){
            printf("Yes");
            return 0;
        }
    }
    if(strlen(b)<=strlen(a)){
        if(strstr(a, b)){
            printf("Yes");
            return 0;
        }
    }
    printf("No");
}
