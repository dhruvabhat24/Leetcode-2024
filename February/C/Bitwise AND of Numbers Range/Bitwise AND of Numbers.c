#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int rangeBitwiseAnd(int left, int right) {
  int shift = 0;
    while (left < right) {
        left >>= 1;
        right >>= 1;
        shift++;
    }
    return left << shift;  
}

