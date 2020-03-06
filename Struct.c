#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1개의 변수를 사용할 때
struct Student1 {
    int kor;
    int mat;
    int eng;
    char *name;
    int age;
} s1;

// 여러 개의 변수를 사용할 때
struct Student2 {
    int kor;
    int mat;
    int eng;
    char *name;
    int age;
};

// 비트 필드 비적용
struct Test1 {
    unsigned int a1;
    unsigned int a2;
};

// 비트 필드 적용
struct Test2 {
    unsigned int a1:1; // 1비트의 저장공간 설정
    unsigned int a2:1; // 1비트의 저장공간 설정
};

// typedef를 이용할 때
typedef struct Test3 {
    int a1;
    int a2;
} Test3;

int main(int argc, char *argv[]) {
    s1.kor = 100;
    s1.mat = 90;
    s1.eng = 80;
    s1.name = "hong";
    s1.age = 30;
    printf("stu.kor : %d\n", s1.kor);
    printf("stu.mat : %d\n", s1.mat);
    printf("stu.eng : %d\n", s1.eng);
    printf("stu.name : %s\n", s1.name);
    printf("stu.age : %d\n", s1.age);

    printf("--------------------------------------------------\n");

    struct Student2 s2;
    s2.kor = 90;
    s2.mat = 70;
    s2.eng = 80;
    s2.name = "lee";
    s2.age = 25;
    printf("stu.kor : %d\n", s2.kor);
    printf("stu.mat : %d\n", s2.mat);
    printf("stu.eng : %d\n", s2.eng);
    printf("stu.name : %s\n", s2.name);
    printf("stu.age : %d\n", s2.age);

    printf("--------------------------------------------------\n");

    // 배열로 구조체를 이용함
    struct Student2 s3[3];
    s3[0].kor = 100;
    s3[1].kor = 90;
    s3[2].kor = 80;
    for(int i=0 ; i<3 ; ++i) {
        printf("s3[%d].kor : %d\n", i, s3[i].kor);
    }

    printf("--------------------------------------------------\n");

    struct Test1 t1;
    struct Test2 t2;
    printf("t1 : %d\n", sizeof(t1));
    printf("t2 : %d\n", sizeof(t2));
    t1.a1 = 1;
    t2.a1 = 1;
    printf("t1.a1 : %d\n", t1.a1);
    printf("t2.a1 : %d\n", t2.a1);
    t1.a2 = 2; // "10" 모두 저장됨
    t2.a2 = 2; // 1비트짜리 공간이라서 "10" 중 왼쪽에 있는 1이 버려짐
    printf("t1.a2 : %d\n", t1.a2);
    printf("t2.a2 : %d\n", t2.a2);

    printf("--------------------------------------------------\n");

    Test3 t3;
    t3.a1 = 100;
    t3.a2 = 200;
    printf("t3.a1 : %d\n", t3.a1);
    printf("t3.a2 : %d\n", t3.a2);

    return 0;
}
