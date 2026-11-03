#include<iostream>
#include<string>
using namespace std;

//valid anagram

//1st approach is to sort both strings and check if they are equal or not. If they are equal then they are anagrams otherwise not.

//2nd approach is to use a frequency array of size 26 and count the frequency of each character in both strings. If the frequency of each character is same in both strings then they are anagrams otherwise not.

bool isAnagram(string str1, string str2){
    if(str1.length() != str2.length()){
        return false;
    }
    int count[26]={0};

    for(int i=0;i<str1.length();i++){
        int idx=str1[i]-'a';  // to get the index of character in frequency array
        count[idx]++;
    }

    for(int i=0;i<str2.length();i++){
        int idx=str2[i]-'a';
        if(count[idx]==0){  // if frequency of character in str2 is 0 then it means it is not present in str1
            return false;
        }
        count[idx]--;
    }
    return true;
}

int main(){

    string str1 ="anagram";
    string str2 ="nagaram";


    cout<<isAnagram(str1,str2);  // if isAnagram returns true then print Yes otherwise No


    return 0;
}