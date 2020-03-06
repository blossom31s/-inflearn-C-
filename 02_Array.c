#include <stdio.h>
#include <stdlib.h>

void test1(int v[]) {
    for(int i=0 ; i<3 ; ++i) {
        printf("v[%d] : %d\n", i, v[i]);
    }
}

void test2(int v[]) {
    for(int i=0 ; i<3 ; ++i) {
        printf("*(v+%d) : %d\n", i, *(v + i));
    }
}

int * test3() {
    static int v[3] = {7, 8, 9};
    return v;
}

int main(int argc, char *argv[]) {
    int array1[] = {1, 2, 3};
    int array2[] = {4, 5, 6};

    // 일반적인 배열함수 출력
    test1(array1);
    printf("--------------------------------------------------\n");

    // 주소 값을 이용한 배열함수 출력
    test2(array2);
    printf("--------------------------------------------------\n");

    // 포인터를 이용한 배열함수 출력
    int *array3 = test3();
    test2(array3);

    return 0;
}
