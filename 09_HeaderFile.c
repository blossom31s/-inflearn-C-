#include <stdio.h>
#include <stdlib.h>
#include "headerEx.h"

extern int global_n1;
extern int global_n2;

/*
// "headerEx.h" 파일의 내용
#include <stdio.h>

int data1 = 100;
int data2[] = {1, 2, 3, 4, 5};
typedef struct Example {
    int value1;
    int value2;
} Example;

#define DATA3 300
#define DATA4 400

void function1() {
    printf("function1 call.\n");
}

void function2() {
    static int local_n3 = 300;
    local_n3++;
    printf("local_n3 : %d\n", local_n3);
}

void function3() {};
*/

/*
// "headerEx.c" 파일의 내용
#include <stdio.h>

int global_n1 = 1000;
int global_n2 = 2000;

void function3() {
    printf("global_n1 : %d\n", global_n1);
    printf("global_n2 : %d\n", global_n2);
}

int main(int argc, char *argv[]) {
    return 0;
}
*/

int main(int argc, char *argv[]) {

    // 사용자 정의 header 파일 사용 예시
    printf("data1 : %d\n", data1);
    printf("data2 : ");
    for(int i=0 ; i<5 ; ++i) {
        printf("%d ", data2[i]);
    }
    printf("\n");

    Example st;
    st.value1 = 1000;
    st.value2 = 2000;
    printf("st.value1 : %d\n", st.value1);
    printf("st.value2 : %d\n", st.value2);

    printf("DATA3 : %d\n", DATA3);
    printf("DATA4 : %d\n", DATA4);

    function1();

    printf("--------------------------------------------------\n");

    // 지역변수 auto는 보통 생략되어 있음
    auto int local_n1 = 100;
    auto int local_n2 = 200;
    printf("local_n1 : %d\n", local_n1);
    printf("local_n2 : %d\n", local_n2);

    // register는 RAM보다 훨씬 빠름
    printf("i : ");
    for(register int i=0 ; i<10 ; ++i) {
        printf("%d ", i);
    }
    printf("\n");

    for(int i=0 ; i<3 ; ++i) {
        function2(); // 함수 안에 static 변수가 정의되면 함수가 끝나도 소멸되지 않음
    }

    printf("--------------------------------------------------\n");

    function3();

    return 0;
}
