#include <stdio.h>
int Prime(int a){
    int i;
    if(a<2){
        return 0;
    }
    for(i=2; i*i<=a; i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n; int count=0;
    printf("Nhap n day: ");
    int a[n];
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("Nhap so nguyen vao day a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        if(Prime(a[i])){
            printf("%d", a[i]);
            count=1;
        }
		}
	if(count==0){
		printf("Khong co so nguyen trong day");
	}
    }
