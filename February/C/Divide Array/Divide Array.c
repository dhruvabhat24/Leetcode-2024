int** divideArray(int* nums, int n, int k, int* returnSize, int** returnColumnSizes) {
    int freq[100001]={0};
    int xMax=0, xMin=INT_MAX;
    for(register int i=0; i<n; i++){
        int x=nums[i];
        freq[x]++;
        if (x>xMax ) xMax=x;
        if (x<xMin ) xMin=x;
    }
    *returnSize=n/3;
    int** ans=(int**)malloc(*returnSize*sizeof(int*));
    *returnColumnSizes=(int*)malloc(*returnSize*sizeof(int));
    int count=0, i=0;
    for(register int x=xMin; x<=xMax; x++){
        for(; freq[x]>0; freq[x]--, count=(count+1)%3){
            if (count==0){
                (*returnColumnSizes)[i]=3;
                ans[i]=(int*)malloc(3*sizeof(int));
            }
            ans[i][count]=x;
            if (count==2){
                if (x-ans[i][0]>k){
                    *returnSize=0;
                    return NULL;
                }
                i++;
            }
        }
    }
    return ans;
}
