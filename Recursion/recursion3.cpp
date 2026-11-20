#include<iostream>
using namespace std;

//more recursion problems


//binary search problem using recursion
int binarySearch(int arr[],int start,int end,int key){
    
    if(start>end){
        return -1;
    }

    int mid = start+(end-start)/2;

    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid] >key){                          //left half 
        return binarySearch(arr,start,mid-1,key);
    }
    else{                                            //right half
        return binarySearch(arr,mid+1,end,key);
    }
}





//For a given integer array of size N. You have to find all the occurrences (indices) of a given element (Key) and print them.

void allOccurrences(int arr[],int key,int i,int n){

    if(i == n){
        return;
    }

    if(arr[i] == key){
        cout<<i<<",";
    }
    allOccurrences(arr,key,i+1,n);
}






//We are given a string S, we need to find the count of all contiguous substrings starting and ending with the same character. [Leetcode Premium Qs]
int countSubstrings(string s , int i, int j, int n){
    
    //base case
    if(n == 1){
        return 1;
    }
    if(n<=0){
        return 0;
    }

    int result = countSubstrings(s,i+1,j,n-1)+
                countSubstrings(s,i,j-1,n-1)-
                countSubstrings(s,i+1,j-1,n-2);
    
    if(s[i] == s[j]){
        result++;
    }
    return result;
}





//tower of hanoi problem using recursion
void towerofhanoi(int n,char src, char helper, char dest){

    if(n == 1){
        cout<<"transfer disk "<<n<<" from "<<src<<" to "<<dest<<endl;
        return;
    }

    towerofhanoi(n-1,src,dest,helper);   // moving n-1 disks from src to helper using dest as helper
    cout<<"transfer disk "<<n<<" from "<<src<<" to "<<dest<<endl;
    towerofhanoi(n-1,helper,src,dest);   // moving n-1 disks from helper to dest using src as helper
    

}


int main(){

    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<binarySearch(arr,0,n,5)<<endl;

    int arr2[]={3,2,4,5,6,2,7,2,2};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    allOccurrences(arr2,2,0,n2);

    cout<<endl;

    string str="abcab";
    int n3=str.size();
    cout<<countSubstrings(str,0,n-1,n3);
    cout<<endl;


    towerofhanoi(3,'S','H','D');


    return 0;
}