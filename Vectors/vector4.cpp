#include<iostream>
#include<vector>
using namespace std;

//Pair Sum for  a sorted vector
//we had to return the index of the pair of index of element which is equal to the target sum

vector <int> targetSum(vector<int> arr, int n , int target){

    int start =0 ;
    int end = n-1;
    

    while(start < end){

        int currentSum = arr[start] + arr[end];

        if(currentSum == target){
            return {start,end};
        }
        else if(target < currentSum){
            end --;
        }else{
            start++;
        }
    }
    return {-1,-1};
}



int main(){
    vector <int> vec1={2,7,11,15};
    int n = vec1.size();

    vector<int> ans = targetSum(vec1, n, 26);

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}