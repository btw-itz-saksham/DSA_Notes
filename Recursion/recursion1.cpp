#include <iostream>
#include <vector>
using namespace std;

//factorial of a number 
int factorial(int x){
    if(x == 0){
        return 1; // base case
    }
    else{
        return x * factorial(x-1); // recursive call
    }
}



// print numbers in decreasing order from n to 1  
void Print(int n){

    if(n == 0){   // base case
        return ;
    }

    // if we change the function calling and printing order then we get teh numbers in accesding order
    cout<<n<<" ";   
    Print(n-1);    // recursive call
}



//Sum of n natural numbers
int sum(int x){
    if(x<=0){
        return 0;
    }
    return x + sum(x-1);
}

//nth fibonacchi sequence
int fib(int n){

    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}




//check if array is sorted in accending or not 
bool isSorted(int arr[],int n,int i){
    
    
    if(i == n-1){
        return true;
    }

    if(arr[i] > arr[i+1]){
        return false;
    }
    else{
        bool remainingPart = isSorted(arr,n,i+1);
        return remainingPart;
    }
}




//get the first occurance of a element in a vector
int firstoccurance(vector <int> arr , int i , int key){

    if(i == arr.size()){
        return -1;
    }

    if(arr[i] == key){
        return i;
    }

    return firstoccurance(arr,i+1 , key);

}



//get the last occurance of the element in a vector
int lastoccurance(vector <int>arr , int i , int key){

    if(i == arr.size()){
        return -1;
    }

    int idx = lastoccurance(arr,i+1 , key);

    if(idx == -1 && arr[i] == key){
        return i;
    }

    return idx;
}




//get x to the power of n  with O(n) time complexity
int power(int x , int n){
    if(n==0){
        return 1;
    }
    return x*power(x,n-1);
}




//get x to the power of n  with O(log n) time complexity
//to achieeve this we see our power is even or odd
//for example if 2^5 :: odd power
//then we can  break it into 2^2 * 2^2 * 2
//for example if 2^6 :: even power
//then we can break it into 2^3 * 2^3
//baically instead of calcualting x^n  we calculate x^(n/2) * x ^(n/2)  and devide it until it reaches base case 0
int fastPower(int x, int n) {

    if(n == 0){
        return 1;
    }

    int halfpow =fastPower(x,n/2);
    int halfpowsquare = halfpow * halfpow ;

    if(n % 2 != 0){
        return halfpowsquare * x ;
    }
    return halfpowsquare;
}



int main(){

    cout<<factorial(5)<<endl;

    Print(10);

    cout<<sum(100)<<endl;

    cout<<fib(10)<<endl;


    int arr[] = {1,2,3,4,10,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<isSorted(arr,n,0)<<endl;

    vector <int> vec ={1,2,3,3,3,4};
    
    cout<<firstoccurance(vec,0,3)<<endl;

    cout<<lastoccurance(vec,0,3)<<endl;

    cout<<power(2,10)<<endl;

    cout<<fastPower(2,10);

    return 0;
}