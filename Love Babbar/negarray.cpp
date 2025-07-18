#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr = {1,2,3,-1,-3,0,6};
    vector<int> negative(arr.size());
    // std::transform applies the lambda to each element of arr and stores result in negative
    transform(arr.begin(), arr.end(), negative.begin(), [](int x) { return -x; });
    for (int x : negative) {
        cout << x << " ";
    }
    cout << endl;
}