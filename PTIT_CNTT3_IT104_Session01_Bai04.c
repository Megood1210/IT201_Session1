#include <stdio.h>

// Cách 1
int sum1(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}
// Cách 2
int sum2(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Tong day so 1+2+...+n theo cach 1: %d\n", sum1(n));
    printf("Tong day so 1+2+...+n theo cach 2: %d\n", sum2(n));

    return 0;
}
// Độ phức tạp không gian của cách 1 là O(n)
// Độ phức tạp không gian của cách 2 là O(1)



