#include "armstrong.h"
#include <math.h>

int is_armstrong(int num) {

    if(num < 1) {
        return 2;
    }

    int digits = 0, working_num = num, sum = 0, digit;
    int d_arr[12];
    while(working_num > 0) {
        digit = working_num % 10;
        working_num = working_num / 10;
        d_arr[digits] = digit;
        digits++;
    }

    for(int i = 0; i < digits; i++) {
        d_arr[i] = (int)pow((double)d_arr[i], (double)digits);
        sum += d_arr[i];
    }

    if(sum == num) {
        return 1;
    }
    return 0;
}