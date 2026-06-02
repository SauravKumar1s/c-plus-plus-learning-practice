#include <iostream>
#include <vector>

using namespace std;

void reverseArray(vector<int>& arr)
{
    int n = arr.size();

    // temporary array to store reversed array
    vector<int> temp(n);

    // copying elements from arr to temp in reverse order
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[n - 1 - i];
    }

    // copying elements from temp back to arr
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    vector<int> arr = {1, 4, 3, 2, 6, 5};

    reverseArray(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}