#include<iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";

	cout << endl;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//1. Reverse the array
void reverse_array()
{
	int arr[]{ 2,70,100,10,55 };
	auto len = sizeof(arr) / sizeof(arr[0]);
	int temp;
	auto i = 0;
	auto j = len - 1;
	while (i < j)
	{
		swap(arr[i], arr[j]);
		i++;
		j--;
	}
	printArray(arr, len);
}

//2. Find the maximum and minimum element in an array
void find_min_max()
{
	int arr[]{ 2,70,100,10,55 };
	int min{ arr[0] }, max{ arr[0] };
	auto len = sizeof(arr) / sizeof(arr[0]);
	for (auto i = 0; i < len; i++)
	{
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}
	cout << "Maximum element in array : " << max << endl << "Minimum element in array : " << min << endl;
}

//3. Find the "Kth" max and min element of an array 
void find_Kth_min_max()
{
	int arr[]{ 2,70,100,10,55,32,12,6 };
	int min{ arr[0] }, max{ arr[0] };
	auto len = sizeof(arr) / sizeof(arr[0]);
	int k;
	cout << "Enter Kth value : " << endl;
	cin >> k;
	sort(arr, arr + len);
	printArray(arr, len);
	cout << "K'th smallest element is " << arr[k - 1] << endl;
	cout << "K'th largest element is " << arr[len - k] << endl;
}

//4. Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
void sort_012()
{
	int arr[]{0,2,1,2,0,1};
	auto len = sizeof(arr) / sizeof(arr[0]);
	int low = 0, high = len - 1, mid = 0,temp;

	while (mid <= high) {

		if (arr[mid] == 0)
		{
			swap(&arr[mid++], &arr[low++]);
		}

		else if (arr[mid] == 1)
			mid++;

		else
		{
			swap(&arr[mid], &arr[high--]);
		}
	}
	printArray(arr, len);
}

//5. Move all the negative elements to one side of the array 
void arrange()
{
	int arr[]{ 22,-1,89,-100,12,-10,-29,90 };
	auto len = sizeof(arr) / sizeof(arr[0]);
	int j = 0;
	for (auto i = 0; i < len; i++)
	{
		if (arr[i] < 0)
		{
			swap(arr[i], arr[j]);
			j++;
		}
	}
	printArray(arr, len);
}

// Find the Union and Intersection of the two sorted arrays.
void union_intersection()
{
	int arr1[]{ 22,-1,89,-100,12,-10,-29,90 };
	auto len1 = sizeof(arr1) / sizeof(arr1[0]);

	int arr2[]{ 22,-1,89,-100,10,43,53,27 };
	auto len2 = sizeof(arr2) / sizeof(arr2[0]);
	
	unordered_set<int> u;

	for (auto i = 0; i < len1; i++)
		u.insert(arr1[i]);

	for (auto j = 0; j < len2; j++)
		u.insert(arr2[j]);

	for (auto i = u.begin(); i != u.end(); i++)
		cout << *i << " ";
}
void main()
{
	
}