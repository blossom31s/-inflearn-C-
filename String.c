#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char c1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("c1 : %s\n", c1);
    
    char *c2 = (char*)"안녕하세요";
    printf("c2 : %s\n", c2);
    
    char c3[6] = "World";
    char c4[20];
    strcpy(c4, c1);
    printf("strcpy : %s\n", c4);

    strcat(c4, " ");
    strcat(c4, c3);
    printf("strcat : %s\n", c4);

    int len = strlen(c4);
    printf("strlen : %d\n", len);

    len = strlen("안녕하세요");
    printf("strlen : %d\n", len);

    return 0;
}
