#include <stdio.h>

void f(int a[], int n) {
    int i;
    for (i = 0; i < n - 1; ++i) {
        a[i] += a[i + 1];
    }
}

int main() {
    int a[5] = {1, 2, 4, 6, 8};

    f(a, 5);

    printf("%d", a[4] - a[3]);

    return 0;
}