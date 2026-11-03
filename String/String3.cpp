#include <iostream>
#include <cstring>
#include <string>
using namespace std;

// To upper case

void toUpperCase(char arr[],int n)
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] = arr[i] - 'a' + 'A';          // position + 'A'
        }
    }
}

int main()
{

    char arr[] = "ApPle";
    int n =strlen(arr);

    cout << arr << endl;
    toUpperCase(arr, n);
    cout<< arr << endl;

}