#include<stdio.h>

//Function to merge two sorted subarrays
void merge(int a[], int l, int mid, int h)
{
	int b[100];  // Temporary array
	int i = l;
	int j = mid + 1;
	int k = l;
	
	//Merge the two subarrays
	while (i <= mid && j<=h)
	{
		if (a[i] <= a[j])
		{
			b[k] = a[i];
			i++;
		}
		else
		{
			b[k] = a[j];
			j++;
		}
		k++;
	}
	
	// Copy remaining elements of left subarray
		while(i <= mid)
		{
			b[k] = a[i];
			i++;
			k++;
		}
	
		// Copy remaining elements of right subarray
		while(j <= h)
		{
			b[k] = a[j];
			j++;
			k++;
		}
		
		// Copy back to original array
		for (i = l; i <= h; i++)
		{
			a[i] = b[i];
		}
}
	
// Recursive Merge Sort function
void mergeSort(int a[], int l, int h)
{
	if (l < h)
	{
		int mid = (l + h) / 2;
		
		mergeSort(a, l, mid);       // Left half
		mergeSort(a, mid + 1, h);   // Right half
		merge(a, l, mid, h);        // Merge both halves
	}
}
	
// Main function
int main()
{
	int a[100], n, i;
	
	printf("Enter number of elements: ");
	scanf("%d", &n);
	
	printf("Enter elements:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	mergeSort(a, 0, n - 1);
	
	printf("Sorted array:\n");
	for(i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}

