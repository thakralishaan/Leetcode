//{ Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdbool.h>


// } Driver Code Ends
//User function Template for C

// Function to find majority element in the array
// a: input array
// size: size of input array
// int majorityElement(int arr[], int size)
// {
//     for (int i = 0; i < size; i++) {
//         int count = 1;
//         for (int j = i + 1; j < size; j++) {
//             if (arr[i] == arr[j]) {
//                 count++;
//             }
//         }
//         if (count > size / 2) {
//             return arr[i];
//         }
//     }
//     return -1;
// }     --> O(N2)

int majorityElement(int arr[], int size)
{
    int res = 0;
    int count = 1;
    
    for (int i = 1; i < size; i++) {
        if (arr[res] == arr[i]) {
            count++;
        }
        else {
            count--;
        }
        
        if (count == 0) {
            res = i;
            count = 1;
        }
    }
    
    count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[res] == arr[i]) {
            count++;
        }
    }
    
    if (count <= size / 2) {
        return -1;
    }
    
    return arr[res];
}


//{ Driver Code Starts.

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        
        for(int i = 0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        printf("%d\n", majorityElement(arr, n));
    }

    return 0;
}

// } Driver Code Ends