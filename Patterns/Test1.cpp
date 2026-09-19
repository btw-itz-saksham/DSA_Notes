#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    for(int i=0;i<=n;i++){
        //space
        for(int j= 0;j<=n-i;j++){
            cout<<"  "; 
        }
        //star
        for(int j = 0;j<(2*i)-1;j++){
            if((i-1==j)){
                cout<<i<<" ";
            }
            else{
                cout<<"1 ";
            }
        }
        //space
        for(int j= 0;j<=n-i;j++){
            cout<<"  "; 
        }
        cout<<endl;
    }

    for(int i=n;i>=1;i--){
        //space
        for(int j= 0;j<=n-i;j++){
            cout<<"  "; 
        }
        //star
        for(int j = 0;j<(2*i)-1;j++){
            if((i-1==j)){
                cout<<i<<" ";
            }
            else{
                cout<<"1 ";
            }
        }
        //space
        for(int j= 0;j<=n-i;j++){
            cout<<"  "; 
        }
        cout<<endl;
    }
    return 0;
}

