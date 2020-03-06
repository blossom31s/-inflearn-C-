#include <stdio.h>
#include <stdlib.h>

typedef struct Struct1 {
    int value1;
    int value2;
} Struct1;

typedef struct Struct2 {
    int a1;
    int a2;
} Struct2;

int main(int argc, char *argv[]) {

    // 정적할당(stack영역) : 변수, 배열, 구조체 등
    int data1 = 100;
    int data2[] = {1, 2, 3};
    printf("data1 : %d byte\n", sizeof(data1));
    printf("data2 : %d byte\n", sizeof(data2)); // 배열 전체의 크기는 12 byte 이지만, 배열의 주소 값을 저장하는 공간의 크기를 구하게 되서 4 byte가 출력됨

    Struct1 st;
    printf("st : %d byte\n", sizeof(st));

    printf("--------------------------------------------------\n");

    // 동적할당(heap영역) : 포인터 변수
    int * pt1 = (int *)malloc(4);
    *pt1 = 300;
    printf("*pt1 : %d\n", *pt1);

    // 배열의 동적할당
    int * pt2 = (int *)malloc(4 * 3);
    for(int i=0 ; i<3 ; ++i) {
        pt2[i] = 10 * (i + 1);
    }
    for(int i=0 ; i<3 ; ++i) {
        printf("pt2[%d] : %d\n", i, pt2[i]);
    }

    // 포인터 형식의 배열의 동적할당
    int * pt3 = (int *)malloc(4);
    for(int i=0 ; i<3 ; ++i) {
        *(pt3 + i) = 1 * (i + 1);
    }
    for(int i=0 ; i<3 ; ++i) {
        printf("*(pt3 + %d) : %d\n", i, pt3[i]);
    }

    // 구조체의 동적할당
    Struct2 * pt4 = (Struct2 *)malloc(sizeof(Struct2));
    (*pt4).a1 = 3;
    (*pt4).a2 = 6;
    printf("(*p4).a1 : %d\n", (*pt4).a1);
    printf("(*p4).a2 : %d\n", (*pt4).a2);

    free(pt1);
    free(pt2);
    free(pt3);
    free(pt4);

    return 0;
}
