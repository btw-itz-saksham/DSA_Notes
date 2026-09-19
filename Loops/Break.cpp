#include<iostream>
using namespace std;

int main(){
    int n;

    // while(true){
    //     cout<<"Enter numbers of yur choice\n";
    //     cin>>n;
    //     if(n %10 ==0){
    //         break;       // breaks the loops when the condition becomes true;
    //     }
    // }

//Similarly there us a continue keyword which skips an oteration when that ocndition is true.

    while(true){
        cout<<"Enter numbers of your choice\n";
        cin>>n;
        if(n %10 ==0){
            continue;       //it will skip multiple of 10 numbers
        }
        if(n == 0){
            break;
        }
        cout<<"you entered: "<<n<<endl;
    }


    return 0;
}
