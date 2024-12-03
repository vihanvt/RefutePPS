#include <stdio.h>
int fibonacciSeries(int n) {
    long long first = 0, second = 1, next;
    if (n >= 1) {
        printf("%lld ", first);
    }
    if (n >= 2) {
        printf("%lld ", second);
    }
    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf("%lld ", next);
        first = second;
        second = next;
    }
}
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    fibonacciSeries(n);
    printf("\n");
    return 0;
}
 