#include <iostream>

using namespace std;

void BubbleSort(int *arr, int length);

int main(void)
{
	int array[10] = {5, 8, 3, 13, 6, 28, 23, 11, 35, 1};

	BubbleSort(array, 10);

	for (int i = 0; i < 10; i++)
	{
		cout<<array[i]<<endl;
	}

	return 0;
}


void BubbleSort(int *arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		for (int j = i; j < length; j++)
		{
			if (arr[j] < arr[i])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}
