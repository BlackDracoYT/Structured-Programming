#include<stdio.h>
int main() {
    int a,b,c=0;
    printf("Enter Number 1\n");
    scanf("%d", &a);
    printf("Enter Number 2\n");
    scanf("%d", &b);
    for(int i; i<b; i++){
        c = c+a;
    }
    printf("The Product is %d", c);
    return 0;
}