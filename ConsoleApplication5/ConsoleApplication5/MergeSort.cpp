#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
	int i, j, k;
	int n1 = mid - left + 1;
	int n2 = right - mid;

	/* create temp arrays */
	int *L = new int[n1];
	int *R = new int[n2];

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
		L[i] = arr[left + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[mid + 1 + j];

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray 
	j = 0; // Initial index of second subarray 
	k = left; // Initial index of merged subarray 
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of L[], if there
	are any */
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there
	are any */
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int arr[], int left, int right)
{
	if (left < right)
	{
		// Same as (l+r)/2, but avoids overflow for 
		// large l and h 
		int mid = left + (right - left) / 2;

		// Sort first and second halves 
		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);

		merge(arr, left, mid, right);
	}
}

void main()
{
	//--------------------------------MergeSort
	//--------------------------------Data size 10
	int arr1[10];
	//--------------------------------Random
	for (int i = 0; i < 10; i++)
	{
		arr1[i] = rand() % 1000 + 1;
	}
	int s = sizeof(arr1) / sizeof(arr1[0]);
	cout << "Unsorted Array: ";
	for (int i = 0; i < 10; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << endl;
	mergeSort(arr1, 0, s - 1);

	cout << "Sorted Array: ";
	for (int i = 0; i < 10; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << endl;

	//-------------------------------Sorted
	int v = 1;
	for (int i = 0; i < 10; i++)
	{
		arr1[i] = v;
		v++;
	}
	mergeSort(arr1, 0, s - 1);

	//--------------------------------Reverse
	for (int i = 0; i < 10; i++)
	{
		arr1[i] = v;
		v--;
	}
	mergeSort(arr1, 0, s - 1);



	//------------------------------Data size 100
	//------------------------------Random
	int arr2[100];
	for (int i = 0; i < 100; i++)
	{
		arr2[i] = rand() % 1000 + 1;
	}
	s = sizeof(arr2) / sizeof(arr2[0]);
	mergeSort(arr2, 0, s - 1);

	//------------------------------Sorted
	v = 1;
	for (int i = 0; i < 100; i++)
	{
		arr2[i] = v;
		v++;
	}
	mergeSort(arr2, 0, s - 1);

	//---------------------------Reverse
	for (int i = 0; i < 100; i++)
	{
		arr2[i] = v;
		v--;
	}

	mergeSort(arr2, 0, s - 1);



	//---------------------------Data size 1000
	//---------------------------Random
	int arr3[1000];
	for (int i = 0; i < 1000; i++)
	{
		arr3[i] = rand() % 1000 + 1;
	}
	s = sizeof(arr3) / sizeof(arr3[0]);
	mergeSort(arr3, 0, s - 1);

	//---------------------------Sorted
	v = 1;
	for (int i = 0; i < 1000; i++)
	{
		arr3[i] = v;
		v++;
	}

	mergeSort(arr3, 0, s - 1);

	//-------------------------Reverse
	for (int i = 0; i < 1000; i++)
	{
		arr3[i] = v;
		v--;
	}

	mergeSort(arr3, 0, s - 1);



	//-------------------------Data size 10000
	//-------------------------Random
	int arr4[10000];
	for (int i = 0; i < 10000; i++)
	{
		arr4[i] = rand() % 10000 + 1;
	}
	s = sizeof(arr4) / sizeof(arr4[0]);
	mergeSort(arr4, 0, s - 1);

	//------------------------Sorted
	v = 1;
	for (int i = 0; i < 10000; i++)
	{
		arr4[i] = v;
		v++;
	}

	mergeSort(arr4, 0, s - 1);

	//-----------------------Reverse
	for (int i = 0; i < 10000; i++)
	{
		arr4[i] = v;
		v++;
	}

	mergeSort(arr4, 0, s - 1);



	//--------------------------Data size 100000
	//--------------------------Random
	int arr5[100000];
	for (int i = 0; i < 100000; i++)
	{
		arr5[i] = rand() % 100000 + 1;
	}
	s = sizeof(arr5) / sizeof(arr5[0]);
	mergeSort(arr5, 0, s - 1);

	//--------------------------Sorted
	v = 1;
	for (int i = 0; i < 100000; i++)
	{
		arr5[i] = v;
		v++;
	}

	mergeSort(arr5, 0, s - 1);

	//-------------------------Reverse
	for (int i = 0; i < 100000; i++)
	{
		arr5[i] = v;
		v--;
	}

	mergeSort(arr5, 0, s - 1);



	//-------------------------Data size 1000000
	//-------------------------Random
	int arr6[1000000];
	for (int i = 0; i < 1000000; i++)
	{
		arr6[i] = rand() % 1000000 + 1;
	}
	s = sizeof(arr6) / sizeof(arr6[0]);
	mergeSort(arr6, 0, s - 1);

	//-------------------------Sorted
	v = 1;
	for (int i = 0; i < 1000000; i++)
	{
		arr6[i] = v;
		v++;
	}
	mergeSort(arr6, 0, s - 1);

	//-------------------------Reverse
	for (int i = 0; i < 1000000; i++)
	{
		arr6[i] = v;
		v--;
	}
	mergeSort(arr6, 0, s - 1);

}
