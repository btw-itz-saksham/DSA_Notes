# include <iostream>
using namespace std;

//inverted right angle triangle  star pattern

int main(){

    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    for(int row = 1; row<=n ;row++){
        for(int col = 1; col<=n ; col++){
            if(row+col<=n+1){
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