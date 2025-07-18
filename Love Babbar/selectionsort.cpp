#include <iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i = 0; i<=n-2;i++){
        int min = i;
        for(int j=i; j<=n-1;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
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
    selection_sort(arr, n);
    for(int i = 0; i<n;i++){
        cout << arr[i] << " ";
    }
    printf("\n");
    return 0;
}

//Time Complexity: O(n^2) for all cases
// In this sorting algorithm, we find the minimum element in the list and place it at the beginning of the list and swap the element present at the beginning with the minimum element found. We repeat this process for all the elements in the list. This is how the selection sort algorithm works.
