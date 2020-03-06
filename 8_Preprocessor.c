#include <stdio.h>
#include <stdlib.h>

#define DATA1 100 // 전처리기에 의해 처리되는 부분, 변수가 아님
#define DATA2 200 // 전처리기에 의해 처리되는 부분, 변수가 아님
#define FN1() printf("FN1 call.\n");
#define FN2(a, b) printf("FN2 call : %d, %d\n", a, b);
#define FN3(a, b) printf("FN3 call : " #a ", " #b "\n");
#define FN4(a, b) \
    printf("FN4 call : "); \
    printf("a=" #a ", "); \
    printf("b=" #b "\n"); \

int main(int argc, char *argv[]) {

    printf("DATA1 : %d\n", DATA1); // 전처리기에 의해 처리됨
    printf("DATA2 : %d\n", DATA2); // 전처리기에 의해 처리됨

    int sum = DATA1 + DATA2;
    printf("DATA1 + DATA2 : %d\n", sum);

    #undef DATA1
    // printf("DATA1 : %d\n", DATA1); // undef로 사라진 값을 불러오려고 해서 오류가 발생함

    #ifdef DATA2
    printf("DATA2 is defined.\n");
    #endif

    #ifndef DATA3
    printf("DATA3 is not defined.\n");
    #endif

    #if DATA2 < 150
    printf("DATA2 is less than 150.\n");
    #elif DATA2 >= 150 && DATA2 <= 250
    printf("DATA2 is more than 150 and is less than 250.\n");
    #else
    printf("DATA2 is greater than 250.\n");
    #endif

    printf("--------------------------------------------------\n");

    printf("__DATE__ : %d\n", __DATE__);
    printf("__FILE__ : %d\n", __FILE__);
    printf("__TIME__ : %d\n", __TIME__);
    printf("__LINE__ : %d\n", __LINE__);
    printf("__STDC__ : %d\n", __STDC__);

    printf("--------------------------------------------------\n");

    FN1();
    FN2(10, 20);
    FN3(30, 40);
    FN4(50, 60);

    return 0;
}
