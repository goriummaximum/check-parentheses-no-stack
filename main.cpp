/*
CHECK PARENTHESES O(n) time O(1) SPACE, NOT USING STACK LOLLL!!!
*/

#include <iostream>
#include <string>

using namespace std;

bool is_parentheses(string &s) {
    int counter = 0;
    for (int i = s.size() - 1; i > -1; i--) {
        if (s[i] == ')') counter++;
        else if (counter > 0) counter--;
        else return false;
    }
    
    if (counter > 0) return false;
    return true;
}

int main()
{
    string test = "((((()()))))";
    cout << is_parentheses(test) << endl;
    
    return 0;
}
