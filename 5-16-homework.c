/*************************************************************************
	> File Name: 5-16-homework.c
	> Author: sudingquan
	> Mail: 1151015256@qq.com
	> Created Time: 四  5/16 23:25:36 2019
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int user(char **env) {
    for (int i = 0; env[i] != NULL; i++) {
        if (!strncmp(env[i], "USER", 4)) {
            if (!strncmp(env[i] + 5, "sudingquan", 10)) {
                return 1;
            }
        }
    }
    return 0;
}

int main(int argc, char *argv[],char **env) {
    if (!strcmp(argv[0], "./haizeix") && user(env)) {
        printf("success\n");
    } else {
        printf("fail\n");
    }
    return 0;
}
