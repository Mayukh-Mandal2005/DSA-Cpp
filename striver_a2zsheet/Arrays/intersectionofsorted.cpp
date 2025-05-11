#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the number of elements of array1: ";
    int n1;
    cin >> n1;
    vector<int> a;
    for (int i = 0; i < n1; i++)
    {
        int num;
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        a.push_back(num);
    }
    stable_sort(a.begin(), a.end());

    cout << "Enter the number of elements of array2: ";
    int n2;
    cin >> n2;
    vector<int> b;
    for (int i = 0; i < n2; i++)
    {
        int num;
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        b.push_back(num);
    }
    stable_sort(b.begin(), b.end());

    int i = 0, j = 0;
    vector<int> ans;

    while(i < n1 && j < n2){
        if(a[i] < b[j]){
            i++;
        }
        else if (b[j] < a[i])
        {
            j++;
        }
        else
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    for(auto it: ans){
        cout << it << " ";
    }
    cout << endl;
}
// problem link: https://www.naukri.com/code360/problems/intersection-of-2-arrays_1082149?leftPanelTabValue=PROBLEM
