// Given an array A[] of N integers and an index Key. Your task is to print the element present at index key in the array.

 

// Example 1:

// Input:
// 5 2
// 10 20 30 40 50
// Output:
// 30
 

// Example 2:

// Input:
// 7 4
// 10 20 30 40 50 60 70
// Output:
// 50
 

// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function findElementAtIndex() which takes the array A[], its size N and an integer Key as inputs and returns the element present at index Key.


// Expected Time Complexity: O(1)
// Expected Auxiliary Space: O(1)

 

// Constraints:
// 1 ≤ N ≤ 100
// 0 ≤ Key ≤ N - 1
// 1 ≤ A[i] ≤ 100


class Solution{
    public:
    int findElementAtIndex(int a[], int n, int key) 
    {
        // Your code goes here
        
                for(int i=0;i<n;i++){
            
            if(i==key){
               return a[i];
            }
        }
           
        
    }
};