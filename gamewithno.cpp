//  You are given an array arr[], you have to re-construct an array arr[].
// The values in arr[] are obtained by doing Xor of consecutive elements in the array.

// Example 1:

// â€‹Input : arr[ ] = {10, 11, 1, 2, 3}
// Output : 1 10 3 1 3
// Explanation:
// At index 0, arr[0] xor arr[1] = 1
// At index 1, arr[1] xor arr[2] = 10
// At index 2, arr[2] xor arr[3] = 3
// ...
// At index 4, No element is left So, it will remain as
// it is.
// New Array will be {1, 10, 3, 1, 3}.

// â€‹Example 2:

// Input : arr[ ] = {5, 9, 7, 6} 
// Output :  12 14 1 6 
 

// Your Task:
// This is a function problem. The input is already taken care of by the driver code. You only need to complete the function game_with_number() that takes an array (arr), sizeOfArray (n), and return the array re-constructed array arr. The driver code takes care of the printing.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).

 

// Constraints:

// 1 ≤ N ≤ 105

// 1 ≤ arr[i] ≤ 107



int* game_with_number(int arr[], int n)
{
    
    // Complete the function
    int *new_arr=new int[n];
    for(int i=0;i<n-1;i++){
        new_arr[i]=arr[i]^arr[i+1];
    }
    new_arr[n-1]=arr[n-1];
    return new_arr;
}
