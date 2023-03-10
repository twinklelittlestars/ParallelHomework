//逐列访问元素的平凡算法
#include<iostream>
using namespace std;
int main()
{
	int arry[10][10] = { {7,10,3,10,8,6,3,7,1,10,},{7,9,2,4,1,10,2,9,8,9,},{10,2,7,4,8,9,9,9,8,1,},{4,2,7,1,7,4,1,6,2,10,},{1,10,8,4,7,9,2,6,9,10,},{4,2,4,4,4,7,3,6,2,4,},{4,10,7,5,3,7,6,1,6,7,},{8,9,10,1,9,9,8,3,5,9,},{10,6,10,5,2,3,3,4,2,2,},{7,7,10,10,10,3,3,3,1,5} };
	int a[10] = { 3,5,2,9,4,6,1,8,6,10 };
	int res[100];
	for (int j = 0; j < 10; j++)
	{
		res[j] = 0;
		for (int i = 0; i <10; i++)
		{
			res[j] += arry[i][j] * a[i];
		}
	}
	cout << "矩阵的每一列与固定向量的乘积是：";
	for (int i = 0; i < 10; i++)
	{
		cout << res[i] << " ";
	}
	return 0;
}
//在这种算法中，对矩阵是按照列来读取的，由于访问数组元素时，CPU不会每次只从内存中读取一个元素，而是读取一个区域的元素。假设二维数组的大小为（10 x 10），访问第一个元素时，CPU也会读取它的相邻元素，因为这个数组比较小，CPU一次就可以把所有元素缓存，因此无论是按行访问数组还是按列访问数组，CPU访问主存的数量都相同。随着数组元素越来越多，CPU缓存一次只能读取数组不到一行的数据，因此按列访问元素时每访问一个元素都要访问内存，因此速度就会慢很多。这种算法无疑不好

