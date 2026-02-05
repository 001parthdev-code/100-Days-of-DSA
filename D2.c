/*Delete an Element from an Array

Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.

Input:
- First line: integer n
- Second line: n space-separated integers
- Third line: integer pos (1-based position to delete)

Output:
- Print the updated array with (n-1) elements, space-separated

Example:
Input:
5
10 20 30 40 50
2

Output:
10 30 40 50

Explanation: Delete position 2 (element 20), remaining elements shift left*/

#include <stdio.h>

int main()
{
    int n, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete (1-based): ");
    scanf("%d", &pos);

    // Shift elements LEFT to overwrite deleted element
    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    printf("Updated array: ");
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}


/*
arr[1] = arr[2]   → 30
arr[2] = arr[3]   → 40
arr[3] = arr[4]   → 50

Index:   0   1   2   3   4
Value:  10  30  40  50  50   ← junk at the end

Note: The last element (arr[n-1]) is now a duplicate of the last valid element, but since we are only printing n-1 elements, it does not affect the output. 
If we were to print all n elements, we would see the duplicate at the end, which is why we only print n-1 elements after deletion.

*/