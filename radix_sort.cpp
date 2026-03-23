#include <stdio.h>
// Function to get maximum element
int getMax(int a[], int n)
{
    int max = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    return max;}
// Counting sort according to digit (exp)
void countSort(int a[], int n, int exp)
{
    int output[100];   // output array
    int count[10] = {0}; // count array (0–9 digits)
// Count occurrences of digits
    for(int i = 0; i < n; i++)
        count[(a[i] / exp) % 10]++;
 // Change count[i] so that it contains actual position
    for(int i = 1; i < 10; i++)
        count[i] += count[i - 1];
// Build output array (stable sorting)
    for(int i = n - 1; i >= 0; i--)
    {
        output[count[(a[i] / exp) % 10] - 1] = a[i];
        count[(a[i] / exp) % 10]--;}
// Copy output array to original array
    for(int i = 0; i < n; i++)
        a[i] = output[i];
}
// Main Radix Sort function
void radixSort(int a[], int n)
{
    int max = getMax(a, n);
// Do counting sort for every digit
    for(int exp = 1; max / exp > 0; exp *= 10)
        countSort(a, n, exp);
}
int main()
{
    int a[50], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
	printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    radixSort(a, n);
    printf("Elements after sorting:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
   return 0;
}
