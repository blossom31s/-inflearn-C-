#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Test1 {
    int a1;
    short a2;
    char a3;
};

union Test2 { // 공용체는 하나의 기억장소를 공유함
    int a1;
    short a2;
    char a3;
};

int main(int argc, char *argv[]) {
    struct Test1 t1;
    t1.a1 = 65535;
    printf("t1.a1 : %d\n", t1.a1);
    printf("t1.a2 : %d\n", t1.a2);
    printf("t1.a3 : %d\n", t1.a3);

    union Test2 t2;
    t2.a1 = 65535; // a1, a2, a3가 같은 기억장소를 공유함
    printf("t2.a1 : %d\n", t2.a1);
    printf("t2.a2 : %d\n", t2.a2);
    printf("t2.a3 : %d\n", t2.a3);

    return 0;
}
