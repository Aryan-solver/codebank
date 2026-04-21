#include <stdio.h>
int hcf(int a, int b) {
    if (b == 0){
        return a;}
    else{    
    return hcf(b, a % b);}
}
int lcm(int a, int b) {
    return (a * b) / hcf(a, b);
}
int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a <= 0 || b <= 0) {
        printf("Please enter positive integers.\n");
    } else {
        printf("HCF  = %d\n", hcf(a, b));
        printf("LCM = %d\n", lcm(a, b));
    }
    return 0;
}