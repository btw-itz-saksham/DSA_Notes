# include <iostream>
using namespace std;

// right angle triangle  number pattern

int main(){

    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    for(int row = 1; row<=n ;row++){
        for(int col = 1; col<=n ; col++){
            if(row>=col){
            cout<<col;
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}