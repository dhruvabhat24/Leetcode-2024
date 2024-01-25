#include<stdio.h>
#include<string.h>


int max(int a,int b)
{
    return a>b?a:b;
}
int longestCommonSubsequence(char * text1, char * text2){
    int c=0;
   int l1=strlen(text1);
   int l2=strlen(text2);
   int arr[l1+1][l2+1];
   for(int i=0;i<=l1;i++)
   {
       for(int j=0;j<=l2;j++)
       {
           if(i==0||j==0)
           arr[i][j]=0;
           else if(text1[i-1]==text2[j-1])
           arr[i][j]=1+arr[i-1][j-1];
           else 
           arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
          
       }
   }
for(int i=0;i<=l1;i++)
{
    for(int j=0;j<=l2;j++)
    {
        if(arr[i][j]>c)
        c=arr[i][j];
    }
}
return c;

}
