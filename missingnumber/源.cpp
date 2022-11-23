//missing number
#include <stdio.h>
#include <stdlib.h>


int num[4] = { 0,1,3 };
int x = 0;
int missingNumber(int* nums, int numSize)
{
	
	//跟[0,n]异或
	for (int i = 0; i <= numSize; i++)
	{
		x ^= i;
	}
	//再跟数组中的值异或
	for (int i = 0; i < numSize; i++)
	{
		x ^= nums[i];
	}
	return x;
	
}

int missingNumber2(int* nums2, int numSize2)
{
	int SUM = 0;
	int sum = 0;
	//完整求和
	for (int i = 0; i <= numSize2; i++)
	{
		SUM += i;
	}
	for (int i = 0; i < numSize2; i++)
	{
		sum += nums2[i];
	}
	x = SUM - sum;
	return x;
}
int main()
{
	//missingNumber(num, 3);
	missingNumber2(num, 3);
	printf("数组中消失的字符是:\n % d",x);
}