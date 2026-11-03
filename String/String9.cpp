#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Count how many times lowercase vowels occurred in a String entered by the user.
int countVowels(string str)
{
    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    return count;
}

// You are given two strings s1 and s2 of equal length.
// A string swap is an operation where you choose two indices in a string (not necessarily different) and swap the characters at these indices.
// Return true if it is possible to make both strings equal by performing at most one
// string swap on exactly one of the strings. Otherwise, return false.

bool areAlmostEqual(string s1, string s2)
{

    if (s1.length() != s2.length())
    {
        return false;
    }

    vector<int> mismatch;

    for (int i = 0; i < s1.length(); i++)
    {

        if (s1[i] != s2[i])
        {
            mismatch.push_back(i);
        }
    }

    if (mismatch.size() == 0)
    {
        return true;
    }

    if (mismatch.size() != 2)
    {
        return false;
    }

    int i = mismatch[0];
    int j = mismatch[1];

    return s1[i] == s2[j] && s1[j] == s2[i];
}



int main()
{

    string str = "saksham";
    cout << countVowels(str) << endl;

    string s1 = "bank";
    string s2 = "kanb";

    cout << areAlmostEqual(s1, s2) << endl;

    return 0;
}