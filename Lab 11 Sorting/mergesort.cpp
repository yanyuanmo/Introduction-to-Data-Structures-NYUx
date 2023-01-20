
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <cpluspluslabs.h>
using namespace std;

// void merge(int* a, int low, int mid, int hight)  //合并函数
// {
// 	int* b = new int[hight - low + 1];  //用 new 申请一个辅助函数
// 	int i = low, j = mid + 1, k = 0;    // k为 b 数组的小标
// 	while (i <= mid && j <= hight)  
// 	{
// 		if (a[i] <= a[j])
// 		{
// 			b[k++] = a[i++];  //按从小到大存放在 b 数组里面
// 		}
// 		else
// 		{
// 			b[k++] = a[j++];
// 		}
// 	}
// 	while (i <= mid)  // j 序列结束，将剩余的 i 序列补充在 b 数组中 
// 	{
// 		b[k++] = a[i++];
// 	}
// 	while (j <= hight)// i 序列结束，将剩余的 j 序列补充在 b 数组中 
// 	{
// 		b[k++] = a[j++];
// 	}
// 	k = 0;  //从小标为 0 开始传送
// 	for (int i = low; i <= hight; i++)  //将 b 数组的值传递给数组 a
// 	{
// 		a[i] = b[k++];
// 	}
// 	delete[]b;     // 辅助数组用完后，将其的空间进行释放（销毁）
// }

void merge_sort(int* a, int low, int hight) //归并排序
{
	if (low < hight)
	{
		int mid = (low + hight) / 2;
		merge_sort(a, low, mid);          //对 a[low,mid]进行排序
		merge_sort(a, mid + 1, hight);    //对 a[mid+1,hight]进行排序
		merge(a, low, mid, hight);       //进行合并操作
	}
}