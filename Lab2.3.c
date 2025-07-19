#include<stdio.h>
int maxLeft,maxRight;
int maxCrossingSubarray(int A[],int low,int mid,int high)
{
    int leftSum,sum,i,j,rightSum;
    leftSum = -1000000;
    sum=0;
    for(i=mid;i>=low;i--)
      {
        sum = sum + A[i];
        if(sum>leftSum)
          {
            leftSum = sum; maxLeft = i;
          }
      }
      rightSum = -1000000;
      sum=0;
      for(j=mid+1;j<=high;j++)
        {
          sum = sum + A[j];
          if(sum>rightSum)
            {
              rightSum = sum;
              maxRight = j;
            }
        }
        return (maxLeft,maxRight,leftSum+rightSum);
}
int maximumSubarray(int A[], int low, int high)
{
    int mid,leftSum,leftLow,leftHigh,rightLow,rightHigh,rightSum, crossLow,crossHigh,crossSum;
    if(high == low)
      {
        return(low,high,A[low]);
      }
    else
      {
        mid= ((low+high)/2);
      }
    leftLow,leftHigh,leftSum = maximumSubarray(A,low,mid);
    rightLow,rightHigh,rightSum = maximumSubarray(A,mid+1,high);
    crossLow,crossHigh,crossSum = maxCrossingSubarray(A,low,mid,high);
    if((leftSum>=rightSum)&&(leftSum>=crossSum))
        return(leftLow,leftHigh,leftSum);
    else if((rightSum>=leftSum)&&(rightSum>=crossSum))
        return(rightLow,rightHigh,rightSum);
    else
        return(crossLow,crossHigh,crossSum);
}
int main()
{
    int size=0,k,maxSum=0;
    printf("Enter size of array:");
    scanf("%d",&size);
    int A[size];
    for(k=0; k<size; k++)
      {
        printf("A[%d]= ",k);
        scanf("%d",&A[k]);
      }
      maxSum = maximumSubarray(A, 0, size - 1);
      printf("\nleft: %d\n",maxLeft);
      printf("right:%d\n",maxRight);
      printf("Maximum Sum is:%d\n",maxSum);
}
