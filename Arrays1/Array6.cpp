#include<iostream>
using namespace std;

// quick sort O(n log n) , O(1) extra space


int partition(int arr[], int start, int end){
    int pivot = arr[end];
    int i = (start - 1);

    for (int j = start; j < end ; j++){
        if (arr[j] <=pivot){         // checking if the current element is smaller than the pivot
            i++;
            swap(arr[i], arr[j]);    
        }
    }
    swap(arr[i + 1], arr[end]);      // move pivot element to its correct position
    return (i + 1);          // returning pivot idx
}

void quicksort(int arr[], int start, int end){

    // Base case: if start >= end, the array is already sorted
    if(start>end){
        return;
    }

    int pivotidx = partition(arr, start, end);     // pivot idx is the index of pivot element after partitioning

    quicksort(arr, start, pivotidx - 1);   // left part
    quicksort(arr, pivotidx + 1, end);          // right part
}

void printarr(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << ",";
    }
}

int main(){

    int arr[] = {6, 3, 7, 5, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printarr(arr, n);
    cout << endl;

    quicksort(arr, 0, n - 1);
    printarr(arr, n);

    return 0;
}