#include<stdio.h>
#include<string.h>
#include<stdio.h>

int countSubstrings(char * s)
{
    int res = 0;
    int left = 0;
    int right = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        left = i;
        right = i;
        while (left >= 0 && right < len && s[left] == s[right]) {
            res++;
            left--;
            right++;
        }
        left = i;
        right = i + 1;
        while (left >= 0 && right < len && s[left] == s[right]) {
            res++;
            left--;
            right++;
        }
    }
    return res;
}

