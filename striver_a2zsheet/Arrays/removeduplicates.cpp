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

    int i = 0;
    for (int j = 1; j < arr.size(); j++)
    {
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }

    cout << "Length of array with unique elements: " << i+1 << endl;
}
