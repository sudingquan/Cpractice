/*************************************************************************
	> File Name: net.c
	> Author: sudingquan
	> Mail: 1151015256@qq.com
	> Created Time: 日  5/12 14:06:53 2019
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n1, n2, n3, n4;
    int x1, x2, x3, x4;
    int m1, m2, m3, m4;
    sscanf(argv[1], "%d.%d.%d.%d", &n1, &n2, &n3, &n4);
    sscanf(argv[2], "%d.%d.%d.%d", &x1, &x2, &x3, &x4);
    sscanf(argv[3], "%d.%d.%d.%d", &m1, &m2, &m3, &m4); 
    if (((n1 & m1) == (x1 & m1)) && ((n2 & m2) == (x2 & m2)) && ((n3 & m3) == (x3 & m3)) && ((n4 & m4) == (x4 & m4))) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
