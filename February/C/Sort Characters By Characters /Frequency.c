#include<stdio.h>
#include<string.h>

char* frequencySort(char* s) {
    int status[75]={0};
    for(int i=0;s[i]!='\0';i++){
        status[s[i]-'0']++;
    }
    int i=0,index,max=-1;
    while(max!=0){
        index,max=-1;
        for(int k=0;k<75;k++){
            if(status[k]>max){
                max=status[k];
                index = k;
            }
        }
        status[index]=0;
        int n=max;
        while(n!=0){
            s[i++]=index+'0';
            n--;
        }
    }
    return s;
}
