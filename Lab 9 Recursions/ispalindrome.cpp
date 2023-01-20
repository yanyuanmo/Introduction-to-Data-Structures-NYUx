#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

bool helper(string s, int idx) {
    if ((s.length()%2==0&&(idx+1)>s.length()/2) || (s.length()%2==1&&idx==s.length()/2)) {
        return true;
    }
    else {
        if (s[idx]==s[s.length()-idx-1]) {
            return helper(s, idx+1);
        }
        else {
            return false;
        }
    }
}

bool is_palindrome(int test) {
    string s = to_string(test);
    return helper(s, 0);
}