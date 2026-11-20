#include<iostream>
#include<string>
using namespace std;



//tiling problem
//find total wasy to tile a (2 X n) floor with (2 X 1) tiles.

int tilingProblem(int n){
    
    //Base case
    if(n == 0){        // no tiles places is one of the way therefore return 1
        return 1;
    }
    if(n == 1){        // only one tile can be placed therefore return 1
        return 1;
    }

    //vertically
    int ans1 = tilingProblem(n-1);       // 2 X (n-1) floor can be tiled in tilingProblem(n-1) ways

    //horizontally
    int ans2 = tilingProblem(n-2);       // 2 X (n-2) floor can be tiled in tilingProblem(n-2) ways

    return ans1 + ans2;
}





//remove dublicate characters from a string

string removeDublicate(string str , string ans ,int i, int map[26]){

    //base case
    if(str.size() == i){
        return ans;
    }

    char ch = str[i];
    int mapidx = (int) (ch - 'a');    // getting mapindexes   a-->0  b-->1 ...... z-->25


    if(map[mapidx] == true){     // dublicate character
        return removeDublicate(str,ans,i+1,map);
    }
    else{     
        map[mapidx]={true};                 // no dublicate
        return removeDublicate(str,ans+str[i], i+1,map);
    }
}




//friends pair-up problem
// total ways in which n friends can remain single or can be paired up.
// each friend can either stay single or can be paired up with any of the remaining friends.

//if we have example n=6 friends then we have two choices 
// single choice: 1 friend stays single and we have to find the ways for remaining 5 friends
// pair choice: 1 friend pairs up with any of the remaining 5 friends and we have to find the ways for remaining 4 friends
// single choice + pair choice = total ways for n friends
// f(n-1) + (n-1)*f(n-2) = total ways for n friends
//(n-1) means that the first friend can pair up with any of the remaining (n-1) friends

int friendsPairing(int n){

    //base case
    if(n == 1 || n == 0){
        return 1;       // only one way to stay single
    }
    if(n == 2){
        return 2;       // either both stay single or both pair up
    }

    //single choice
    int singleChoice = friendsPairing(n-1);

    //pair choice
    int pairChoice = (n-1) * friendsPairing(n-2);

    return singleChoice + pairChoice;

}






//binary string problem
//we had to print a binary string of size n without consecutive 1's


void printBinaryString(int n ,string ans ,int lastPlace){

    //base case
    if(n == 0){
        cout<<ans<<endl;
        return;
    }   

    if(lastPlace !=1){      // if last place is not 1 then we can place 1 or 0
        printBinaryString(n-1,ans+'1',1);
        printBinaryString(n-1,ans+'0',0);
    }
    else{                                   // if last place is 1 then we can only place 0
        printBinaryString(n-1,ans+'0',0);
    }
}

//2nd way without lastPlace variable

void printBinaryString(int n ,string ans ){

    //base case
    if(n == 0){
        cout<<ans<<endl;
        return;
    }   

    if(ans.size()-1 != '1'){      // if last place is not 1 then we can place 1 or 0
        printBinaryString(n-1,ans+'1');
        printBinaryString(n-1,ans+'0');
    }
    else{                                   // if last place is 1 then we can only place 0
        printBinaryString(n-1,ans+'0');
    }

}




int main(){

    cout<<tilingProblem(4)<<endl; // 5 ways to tile a (2 X 4) floor with (2 X 1) tiles


    string str = "aabccdeff";
    string ans = "";
    int map[26] = {false};
    cout<<removeDublicate(str,ans,0,map)<<endl;

    cout<<friendsPairing(4)<<endl; // 5 ways to pair up 4 friends

    printBinaryString(3,ans,0); // 5 binary strings of size 3 without consecutive 1's

    return 0;
}