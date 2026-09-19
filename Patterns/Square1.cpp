#include <iostream>
using namespace std;

//Square number pattern

int main(){

    int n;  
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    for(int row=1;row<=n;row++){       // outer loops is the number of rows.
        for(int col=1;col<=n;col++){    //inner loops is the number of column.
            cout<<row<<" ";
        }
        cout<<endl;
    }
    return 0;
}