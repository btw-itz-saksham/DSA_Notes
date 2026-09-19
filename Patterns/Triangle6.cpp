#include <iostream>
using namespace std;

//Inverted right angle star pattern triangle

int main(){

    int n;
    cout<<"Enter n";
    cin>>n;

    for(int row =1;row<=n;row++){
        for(int col=1 ;col<=n;col++){
            if(row+col >= n+1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}