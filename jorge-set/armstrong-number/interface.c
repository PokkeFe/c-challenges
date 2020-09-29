#include "armstrong.h"
#include <stdio.h>

void logTest(int num);

int main() {
    printf("---- Starting Tests ----\n");
    int testNum = 12;
    int test[] = {1, 2, 5, 9, 15, 20, 153, 360, 400, 407, 1634, 100000};

    for(int i = 0; i < testNum; i++) {
        logTest(test[i]);
    }

}


void logTest(int num) {
    char *resstr;
    int resint = is_armstrong(num);

    switch(resint) {
        case 1:
            resstr = "true";
            break;
        case 0:
            resstr = "false";
            break;
        case 2:
            resstr = "err";
            break;
    } 

    printf("%d : %s\n", num, resstr);
}