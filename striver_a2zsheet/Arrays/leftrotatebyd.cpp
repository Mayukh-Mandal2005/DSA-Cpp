#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// void leftRotate(vector<int> &arr, int d){
//     reverse(arr.begin(), arr.begin() + d); // Reverse the first 'd' elements
//     reverse(arr.begin() + d, arr.end());  // Reverse the last 'n-d' elements
//     reverse(arr.begin(), arr.end());     // Reverse the entire array
// }

//Reverse function to reverse an array from a start index value to end index value
void Reverse(vector<int> &arr, int start, int end){
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    vector<int> arr;
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        arr.push_back(num);
    }

    cout << "Enter d: ";
    int d;
    cin >> d;

    d = d % n;

    //Brute Force Approach
    //Putting values in temp
    // vector<int> temp;
    // for(int i = 0; i < d; i++){
    //     temp.push_back(arr[i]);
    // }

    //Shifting the remaining values
    // for(int i=d; i<n; i++){
    //     arr[i-d] = arr[i];
    // }

    //Putting back the temp values
    // for(int i = n-d; i < n; i++){
    //     arr[i] = temp[i-(n-d)];
    // }

    //Optimal Approach: done in the leftRotate array function or the reverse function
    // leftRotate(arr, d);
    Reverse(arr,0,d-1);
    Reverse(arr,d,n-1);
    Reverse(arr,0,n-1);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
}

// problem link: https://www.naukri.com/code360/problems/rotate-array_1230543?leftPanelTabValue=PROBLEM&nps=true
