#include<iostream>
#include<string>
using namespace std;

//Practice question


class User{
    private:
    int id;
    string password;

    public:
    string username;

    User(int id){
        this->id = id;    // left one is object id and right one is parameter which was passed as an argument
    }

    //getter
    string getpass(){
        return password;
    }
    //setter
    void setpass(string password){
        this -> password=password;
    }
    

};


int main(){

    User u1(102);
    u1.username="saksham";
    u1.setpass("abcd");

    cout<<u1.username<<endl;
    cout<<u1.getpass();


    return 0;
}