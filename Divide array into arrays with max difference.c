int cmp(const void *a,const void *b)
{
    return *(int *)a-*(int *)b;
}

int** divideArray(int* nums, int numsSize, int k, int* returnSize, int** returnColumnSizes)
{
    qsort(nums,numsSize,sizeof(int),cmp);
    *returnSize=numsSize/3;
    int **arr=(int**)malloc(sizeof(int*)*(*returnSize));
    *returnColumnSizes=(int*)malloc(sizeof(int)*(*returnSize));
    for(int i=0,arrIdx=0;i<numsSize;i+=3)
    {
        if(nums[i+2]-nums[i]>k)
        {
            *returnSize=0;
            return NULL;
        }
        else
        {
            (*returnColumnSizes)[arrIdx]=3;
            arr[arrIdx]=(int*)malloc(sizeof(int)*3);
            arr[arrIdx][0]=nums[i];
            arr[arrIdx][1]=nums[i+1];
            arr[arrIdx++][2]=nums[i+2];
        }
    }
    return arr;
}
