# include <iostream>
using namespace std;

// floyds triangle star pattern

int main(){

    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    int num=1;

    for(int row = 1; row<=n ;row++){
        for(int col = 1; col<=n ; col++){
            if(row>=col){
            cout<<num;
            num++;
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}