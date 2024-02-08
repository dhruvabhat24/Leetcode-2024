#include<stdio.h>
#include<stdlib.h>


int min(int a, int b){
    return (a<b) ? a:b;
}

int numSquares(int n) {
    int dp[n+1];
    for(int i=0; i<=n; i++) dp[i] = i;
    for(int i=1; i<=n; i++){
        for(int j=1; j*j<=i; j++){
            dp[i] = min(dp[i], 1+dp[i-j*j]);
        }
    }
    return dp[n];    
}


