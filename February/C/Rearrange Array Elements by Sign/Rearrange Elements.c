int* rearrangeArray(int* nums, int numsSize, int* returnSize) {
   int* new=(int*)malloc(numsSize*sizeof(int));
int i,p=0,n=1;
for(i=0;i<numsSize;i++)
{
    if(nums[i]>0)
    {
        new[p]=nums[i];
        p=p+2;

    }
    else if(nums[i]<0)
    {
        new[n]=nums[i];
        n=n+2;
    }
}
*returnSize= numsSize;
return new;
free(new); 
}

