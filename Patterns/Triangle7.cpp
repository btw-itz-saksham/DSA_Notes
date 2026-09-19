#include <iostream>
using namespace std;

//Another logic forInverted right angle star pattern triangle

int main(){

    int n;
    cout<<"Enter n";
    cin>>n;

    for(int i=1;i<=n;i++){

        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        //stars
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

   
    return 0;
}