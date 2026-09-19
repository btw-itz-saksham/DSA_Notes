#include <iostream>
using namespace std;

//For loop

int main(){
    //printing numbers 1 to n.
    //getting sum of n naturql numbers.
    //getting factorial of n numbers.

    int n;
    int sum =0;
    int fact =1;

    cout<<"Enter the value of n"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        cout<<i<<"\t";
        sum+=i;
        fact*=i;
    }
    cout<<"\nThe sum of "<<n<<" numbers is :"<< sum;
    cout<<"\nThe sum of "<<n<<" numbers using formula is :"<< n*(n+1)/2;
    cout<<"\nThe factorial of "<<n<<" numbers is :"<< fact;

    return 0;
}