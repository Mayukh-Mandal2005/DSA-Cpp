#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i=0;i<=n-1;i++){
        int j = i;
        while (j>0 && arr[j-1]>arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
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
    insertion_sort(arr, n);
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
    printf("\n");
    return 0;
}

//Time Complexity: O(n^2) for avg and worst case
//                 O(n) for best case as there are no swaps happening and we are just traversing through the list
//Take an element and place it in its correct order in the list by comparing the current element with the left element.
