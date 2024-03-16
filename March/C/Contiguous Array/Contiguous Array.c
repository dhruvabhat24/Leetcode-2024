int findMaxLength(int* nums, int numsSize) {
  int result=0, sum=0, temp, map[numsSize*2+1], i;
    memset(map, 0xFF, (numsSize*2+1)*sizeof(int)); map[numsSize]=0;

    for(int i=0, sum=0; i<numsSize; i++) {
        sum+=(nums[i]?1:-1); temp=0;

        if(map[sum+numsSize]!=-1){
            temp=(i+1)-map[sum+numsSize];
        }else{ map[sum+numsSize]=i+1; }

        result=result>=temp?result:temp;
    }

    return result;
}

