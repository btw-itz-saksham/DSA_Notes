// we must understand dynamic memory allocation in c++ before we can understand vectors.

//dynamic memory is allocated at runtime using the new keyword. 
//The new keyword allocates memory on the heap and returns a pointer to the allocated memory.

//memory leak is the condition when a programmer forgets to free the memory that was allocated on the heap. 
//This can lead to a situation where the program consumes more and more memory over time, eventually leading to a crash or slowdown of the system.

#include<iostream>
using namespace std;

void func(){
    int *ptr =new int ;
    *ptr = 2306;
    cout<<"The pointer points to"<<*ptr<<endl;
    
}

int main(){

    func();

    return 0;
}