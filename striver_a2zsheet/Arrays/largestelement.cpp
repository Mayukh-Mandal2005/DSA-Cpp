#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        arr.push_back(num);
    }

    int largest = arr[0];
    for(int i = 1; i < arr.size(); i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << "Largest element is: " << largest << endl;
    return 0;
}

// question link: https://www.naukri.com/code360/problems/largest-element-in-the-array-largest-element-in-the-array_5026279?leftPanelTabValue=PROBLEM
