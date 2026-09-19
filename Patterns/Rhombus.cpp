#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    for(int i=1;i<=n;i++){
        //space
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        //star
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        //space//unnecessary
        for(int j=1;j<=i-1;j++){
            cout<<"  ";
        }
        cout<<endl;
    }

    return 0;
}