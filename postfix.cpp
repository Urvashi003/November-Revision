// #include<bits/stdc++.h>
#include<iostream>
#include<stack>
#include<string>
#include<cctype>
using namespace std;

int evaluatePostfix(string &str) {
    stack<int> s;
    for (char c : str) {
        if (isdigit(c)) {
            s.push(c - '0'); // Convert char to int
        } else {
            int val2 = s.top();
            s.pop();
            int val1 = s.top();
            s.pop();

            switch (c) {
                case '+': s.push(val1 + val2); break;
                case '-': s.push(val1 - val2); break;
                case '*': s.push(val1 * val2); break;
                case '/': s.push(val1 / val2); break; // Corrected line
            }
        }
    }
    return s.top();
}

int main() {
    string str = "78+9-10*";
    cout << evaluatePostfix(str) << endl;
    return 0;
}
