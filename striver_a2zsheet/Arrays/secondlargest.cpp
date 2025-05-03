#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(vector<int> &arr){
    int largest = arr[0];
    int slargest = INT_MIN;
    for(int i = 1; i < arr.size(); i++){
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}

int main()
{
    vector<int> array;
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        array.push_back(num);
    }
    int slargest = secondLargest(array);
    cout << "Second Largest element:" << slargest << endl;
}

// problem link: https://www.naukri.com/code360/problems/second-largest-element-in-the-array_873375?leftPanelTabValue=PROBLEM
