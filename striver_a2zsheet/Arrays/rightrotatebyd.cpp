#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int num;
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        arr.push_back(num);
    }

    cout << "Enter k: ";
    int k;
    cin >> k;

    k = k % n;

    //Brute force approach
    // vector<int> temp;
    // for(int i = n-k; i < n; i++){
    //     temp.push_back(arr[i]);
    // }

    // for(int i = n-k-1; i >= 0; i--){
    //     arr[i+k] = arr[i];
    // }

    // for (int i = 0; i < k; i++){
    //     arr[i] = temp[i];
    // }


    //Optimal approach
    reverse(arr.begin(), arr.end()-k);
    reverse(arr.end()-k,arr.end());
    reverse(arr.begin(), arr.end());
    for(auto it: arr){
        cout << it << " ";
    }
    cout << endl;
}
