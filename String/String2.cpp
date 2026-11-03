#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//input an char array

int main(){
    char word[10];
    cin>>word;  //ignore the space and take input till space is encountered

    cout<<"Your word was:"<<word<<endl;
    cout<<"Length of your word is:"<<strlen(word)<<endl;  
    return 0;


    //in order to take input with space/sentences, we can use getline() function. 
    //It takes 3 arguments, 
    //1-array name 
    //2-size of the array
    //3-the delimiter character, which is space by default.(optional) , it ignores the content after delimiter

    char sentence[100];

    cin.getline(sentence,100);  //takes input till enter key is pressed

    cout<<"Your sentence was : "<<sentence<<endl;
    cout<<"Length of your sentence is: "<<strlen(sentence)<<endl;
}