#include <stdio.h>
#include <stdlib.h>

void test(int *v1, int *v2) {
    *v1 = 400;
    *v2 = 500;
}

void add(int a, int b) {
    printf("add : %d\n", a+b);
}

void minus(int a, int b) {
    printf("minus : %d\n", a-b);
}

void process(void (*fn)(int, int), int a, int b) {
    fn(a, b);
}

int main(int argc, char *argv[]) {
    // 다중 포인터
    int a1 = 100;
    int *a2 = &a1;
    int **a3 = &a2;
    printf("a1 : %d\n", a1);
    printf("*a2 : %d\n", *a2);
    printf("**a3 : %d\n", **a3);

    // 포인터 함수
    int a4, a5;
    test(&a4, &a5);
    printf("a4 : %d\n", a4);
    printf("a5 : %d\n", a5);

    // 함수 포인터
    process(add, 1000, 2000);
    process(minus, 2000, 1000);

    return 0;
}
