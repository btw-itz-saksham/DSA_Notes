#include <iostream>
using namespace std;

int main(){

    float pen;
    float pencil;
    float eraser;

    cout<<"Enter the price of pen : ";
    cin>>pen;

    cout<<"Enter the price of pencil : ";
    cin>>pencil;

    cout<<"Enter the price of eraser : ";
    cin>>eraser;

    float Bill = (pen +pencil+eraser);

    float gst = Bill*0.18;          // calculating  18% gst on total bill 

    float gstbill=Bill+gst;


    cout<<"The bill without gst is "<<Bill;
    cout<<"\nThe gst on your bill is "<<gst;
    cout<<"\nThe total bil with gst is "<<gstbill;

    return 0;

}