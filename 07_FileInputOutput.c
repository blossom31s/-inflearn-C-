#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    FILE *fp;

    // 파일 쓰기
    fp = fopen("data.txt", "w+");
    fprintf(fp, "%s", "abcd");
    fclose(fp);

    // 내용 추가하기
    fp = fopen("data.txt", "a+");
    fprintf(fp, "%s", " kkkkkk");
    fclose(fp);

    // 내용 읽어오기
    fp = fopen("data.txt", "r");
    char a1[255];
    // fscanf(fp, "%s", a1);
    fscanf(fp, "%[^\n]", a1); // 읽어올 내용에 띄어쓰기가 있는 경우
    printf("%s\n", a1);
    fclose(fp);

    return 0;
}
