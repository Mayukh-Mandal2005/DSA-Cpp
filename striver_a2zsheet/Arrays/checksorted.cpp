#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> &a){
    for (int i = 1; i < a.size(); i++)
    {
        if(a[i] >= a[i-1]){

        }
        else
        {
            return false;
        }
    }
    return true;

}

int main()
{
    vector<int> a;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cout << "Enter element " << i+1 << ": ";
        cin >> num;
        a.push_back(num);
    }
    bool sorted = isSorted(a);
    if(sorted){
        cout << "Array is sorted." << endl;
    }
    else
    {
        cout << "Array not sorted." << endl;
    }
}

// problem link: https://www.naukri.com/code360/problems/ninja-and-the-sorted-check_6581957?leftPanelTabValue=PROBLEM
