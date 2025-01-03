#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

// Represents the 7-segment patterns for digits and operators
map<string, char> patterns = {
    {"     *  ", '1'},
    {" *  *|_|", '2'},
    {" *  *| |", '3'},
    {"   |_| *", '4'},
    {" * |_ *|", '5'},
    {" * |_|_|", '6'},
    {" *   *  ", '7'},
    {" * |_|_|", '8'},
    {" * |_| |", '9'},
    {" * | |_|", '0'},
    {"   |_|  ", '+'},
    {"   |_   ", '-'},
    {"    _   ", '*'},
    {"   | |  ", '='},
    {"   |    ", '%'}
};

string getSegmentPattern(const vector<string>& display, int pos) {
    string pattern;
    for (int i = 0; i < 3; i++) {
        pattern += display[i].substr(pos * 3, 3);
    }
    return pattern;
}

long long evaluate(string expr) {
    long long result = 0;
    char op = '+';
    string num;
    
    for (char c : expr) {
        if (isdigit(c)) {
            num += c;
        } else {
            long long curr = stoll(num);
            num = "";
            
            switch (op) {
                case '+': result += curr; break;
                case '-': result -= curr; break;
                case '*': result *= curr; break;
                case '%': result %= curr; break;
            }
            op = c;
        }
    }
    
    if (!num.empty()) {
        long long curr = stoll(num);
        switch (op) {
            case '+': result += curr; break;
            case '-': result -= curr; break;
            case '*': result *= curr; break;
            case '%': result %= curr; break;
        }
    }
    
    return result;
}

string toggleLED(string pattern, int pos) {
    pattern[pos] = (pattern[pos] == '*') ? ' ' : '*';
    return pattern;
}

int findFaultySegment(int N, vector<string>& display) {
    string equation;
    
    // Convert display to equation string
    for (int i = 0; i < N; i++) {
        string pattern = getSegmentPattern(display, i);
        if (patterns.find(pattern) != patterns.end()) {
            equation += patterns[pattern];
        }
    }
    
    // Split equation into LHS and RHS
    size_t equalPos = equation.find('=');
    string lhs = equation.substr(0, equalPos);
    string rhs = equation.substr(equalPos + 1);
    long long expected = stoll(rhs);
    
    // Try toggling each LED in each character
    for (int i = 0; i < equalPos; i++) {
        string pattern = getSegmentPattern(display, i);
        
        // Try toggling each LED position
        for (int j = 0; j < 9; j++) {
            string newPattern = toggleLED(pattern, j);
            
            if (patterns.find(newPattern) != patterns.end()) {
                string newEquation = equation;
                newEquation[i] = patterns[newPattern];
                
                string newLHS = newEquation.substr(0, equalPos);
                if (evaluate(newLHS) == expected) {
                    return i + 1;  // Position is 1-based
                }
            }
        }
    }
    
    return -1;  // No solution found
}

int main() {
    int N;
    cin >> N;
    
    vector<string> display(3);
    for (int i = 0; i < 3; i++) {
        cin >> display[i];
    }
    
    cout << findFaultySegment(N, display) << endl;
    
    return 0;
}