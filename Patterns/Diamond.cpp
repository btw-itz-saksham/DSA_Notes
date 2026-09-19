#include <iostream>
using namespace std;

int main(){
    //upper pyramid

    int n;
    cout<<"Enter value of n";
    cin>>n;

    //outer loop for upper pyramid from 1 to n
    for (int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }

        //stars
        for(int j=1;j<=(2*i)-1;j++){
            cout<<"* ";
        }

        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        cout<<endl;
    }
    //outer loop for lower pyramid from n to 1
    for (int i=n-1;i>=1;i--){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }

        //stars
        for(int j=1;j<=(2*i)-1;j++){
            cout<<"* ";
        }

        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        cout<<endl;
    }
    

    return 0;
}