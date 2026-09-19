#include<iostream>
using namespace std;

bool palindrome(int n){
    int original =n;
    int newno=0;
    while(n>0){
        int lastdigit = n % 10;
        newno = newno * 10 + lastdigit;
        n=n/10;
    }
    if(original == newno){
        return true;
    }else{
        return false;
    }
}

char nextletter(char x){
    return x +1;
}

int sumofdigit(int n){
    int sum =0;
    while(n>0){
        int lastdigit = n%10;
        sum = sum +lastdigit;
        n=n/10;
    }
    return sum;
}


int main(){ 
    cout<<palindrome(121)<<endl;
    cout<<nextletter('d')<<endl;
    cout<<sumofdigit(12345)<<endl;
}