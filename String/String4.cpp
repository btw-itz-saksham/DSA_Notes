#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//reverse a char array

void reverse(char arr[],int n){
    int s=0;
    int e= n-1;

    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

// valid palindrome

bool validpalindrome(char arr[], int n){

    int s=0;
    int e= n-1;

    while(s<e){
        if(arr[s]!=arr[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}


int main(){

    char arr[]="code";
    int n = strlen(arr);

    char arr1[] = "racecar";

    cout<<arr<<endl;
    reverse(arr,n);
    cout<<arr<<endl;

    cout<<validpalindrome(arr1,n)<<endl;

    return 0;
}