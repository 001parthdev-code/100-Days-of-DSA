/*Insert an Element in an Array

Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.

Input:
- First line: integer n
- Second line: n space-separated integers (the array)
- Third line: integer pos (1-based position)
- Fourth line: integer x (element to insert)

Output:
- Print the updated array (n+1 integers) in a single line, space-separated

Example:
Input:
5
1 2 4 5 6
3
3

Output:
1 2 3 4 5 6

Explanation: Insert 3 at position 3, elements [4,5,6] shift right*/

#include <stdio.h>

int main()
{
    int n, pos, x;

    // Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];  // size n+1 to allow insertion

    // Read array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Read position (1-based) and element
    printf("Enter position (1-based) and element to insert: ");
    scanf("%d", &pos);
    scanf("%d", &x);

    // Shift elements to the right (IMPORTANT)
    for (int i = n;  i >= pos; i--)
{
    arr[i + 1] = arr[i];
}
/*for (int i = pos - 1; i < n; i++)
{
    arr[i + 1] = arr[i];
}
    This will destroy data as we are overwriting elements before shifting them
    arr[3] = arr[2] → copies 4
    Array: 1 2 4 4 6

    arr[4] = arr[3] → copies 4 again
    Array: 1 2 4 4 4

*/

/*Correct Approach: Start from the end of the array and shift elements to the right
arr[5] = arr[4] → 6
arr[4] = arr[3] → 5
arr[3] = arr[2] → 4
1 2 4 4 5 6
arr[2] = 3
1 2 3 4 5 6
*/


    // Insert element
    arr[pos - 1] = x;

    // Print updated array
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
