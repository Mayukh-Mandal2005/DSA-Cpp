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

    cout << "Enter d: ";
    int d;
    cin >> d;

    d = d % n;
    
    //Brute Force Approach
    //Putting values in temp
    vector<int> temp;
    for(int i = 0; i < d; i++){
        temp.push_back(arr[i]);
    }

    //Shifting the remaining values
    for(int i=d; i<n; i++){
        arr[i-d] = arr[i];
    }

    //Putting back the temp values
    for(int i = n-d; i < n; i++){
        arr[i] = temp[i-(n-d)];
    }

    for(auto it: arr){
        cout << it << " ";
    }
    cout << endl;

}
