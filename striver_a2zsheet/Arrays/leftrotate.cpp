#include <iostream>
#include <vector>
using namespace std;

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

    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    for(auto it : arr){
        cout << it << " ";
    }
    cout << endl;
}

// problem link: https://www.naukri.com/code360/problems/left-rotate-an-array-by-one_5026278?leftPanelTabValue=PROBLEM
