#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // delete duplicate elements
    // create another dynamic array and insert only uniques elements in it
    for (int i = 0; i < n; i++)
    {
        bool isDuplicate = false;

        // Check if arr[i] appears more than once
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (isDuplicate = false)
        {
            cout << arr[i] << " ";
        }
    }
}