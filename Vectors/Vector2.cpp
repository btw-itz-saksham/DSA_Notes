#include<iostream>
using namespace std;
#include<vector>

//vectors are dynamic arrays that can grow and shrink in size upon runtime.
// They are implemented as a template class in C++ STL.

int main(){

    vector<int> vec1;  //creating an empty vector of integers

    vector<int> vec2 = {1,2,3,4,5};  //creating a vector of integers with initial values

    cout<<"Size of v1: "<<vec1.size()<<endl;  //size of vector v1
    cout<<"Size of v2: "<<vec2.size()<<endl;  //size of vector v2


    //one more syntax using costructor
    vector<int> vec3(10,-1);  //creating a vector of integers with size 10 and initial value -1
    cout<<"Size of v3: "<<vec3.size()<<endl;  //size of vector v3


    //to access the elements of vector we use the same syntax as we use for arrays
    cout<<"Element at index 0 of v2: "<<vec2[0]<<endl;
    for(int i=0;i<vec2.size();i++){
        cout<<vec2[i]<<" ";
    }


    //we can also get the capacity of vector using the capacity() function
    //which is max elements that can be stored in the vector without reallocation

    cout<<"\nCapacity of v2: "<<vec2.capacity()<<endl;

    return 0;
}