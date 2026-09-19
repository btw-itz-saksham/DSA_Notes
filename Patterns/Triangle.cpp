# include <iostream>
using namespace std;

//Normal right angle triangle star pattern

int main(){

    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    for(int row = 1; row<=n ;row++){
        for(int col = 1; col<=n ; col++){
            if(col<=row){
            cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}