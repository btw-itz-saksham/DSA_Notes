#include <iostream>
#include <algorithm>
using namespace std;

// in built sort

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
}

int main()
{

    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + 5); // inbuilt sort function in accending order

    print(arr, 5);
    cout<<endl;

    sort(arr, arr + 5, greater<int>()); // inbuilt sort function in decending order

    print(arr, 5);

    return 0;
}