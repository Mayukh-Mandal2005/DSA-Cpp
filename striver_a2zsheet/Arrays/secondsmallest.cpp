#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondSmallest(vector<int> &arr){
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for (int i = 1; i < arr.size(); i++)
    {
        if(arr[i] < smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && arr[i] < ssmallest){
            ssmallest = arr[i];
        }
    }
    return ssmallest;

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
    int ssmallest = secondSmallest(array);
    cout << "Second Smallest element:" << ssmallest << endl;
}

// problem link: https://www.naukri.com/code360/problems/ninja-and-the-second-order-elements_6581960
