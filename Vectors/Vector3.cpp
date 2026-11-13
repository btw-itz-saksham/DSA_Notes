#include<iostream>
using namespace std;
#include<vector>


//operators with vectors

int main(){

    vector<int> vec1 = {1,2,3,4,5};  

    cout<<"Size of v1: "<<vec1.size()<<endl;  //size of vector v1
    cout<<"Capacity of v1: "<<vec1.capacity()<<endl;  //capacity of vector v1

    vec1.push_back(6);  //adding an element at the end of vector v1

    cout<<"Size of v1 after adding an element: "<<vec1.size()<<endl;  
    cout<<"Capacity of v1 after adding an element: "<<vec1.capacity()<<endl; // capacity is doubled when the size exceeds the capacity

    //we can also use the pop_back() function to remove the last element of the vector
    vec1.pop_back();  //removing the last element of vector v1

    cout<<"Size of v1 after removing an element: "<<vec1.size()<<endl;  
    cout<<"Capacity of v1 after removing an element: "<<vec1.capacity()<<endl;  //capacity remains same after deletion
    return 0;
}