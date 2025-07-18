#include <iostream>
using namespace std;

void bubblesort(int arr[], int n){
    for(int i = n-1; i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubblesort(arr, n);
    for(int i = 0; i<n;i++){
        cout << arr[i] << " ";
    }
    printf("\n");
    return 0;
}

//Time Complexity: O(n^2) for avg and worst case
//                 O(n) for best case as there are no swaps happening and we are just traversing through the list
//This is an algorithm wherein we place the largest element at the last by swapping 2 adjacent elements together
