#include <iostream>
#include <vector>
#include <string>
using namespace std;

int justifyWords(int K, vector<string> &words, int N, int M) {
    int wordsPlaced = 0;
    int currentLineLength = 0;
    int linesUsed = 1;

    for (const string &word : words) {
        int wordLength = word.length();
        
        // First check if word is too long for the line limit
        if (wordLength > M) {
            continue;  // Skip words that are too long
        }

        // Check if the word can fit in the current line
        if (currentLineLength + wordLength + (currentLineLength > 0 ? 1 : 0) <= M) {
            // Add the word to the current line
            if (currentLineLength > 0) {
                currentLineLength += 1; // Add a space
            }
            currentLineLength += wordLength;
            wordsPlaced++;
        } else {
            // Need a new line
            if (linesUsed >= N) {
                break;  // No more lines available
            }
            linesUsed++;
            currentLineLength = wordLength;
            wordsPlaced++;
        }
    }

    return wordsPlaced;
}

int main() {
    int K;
    cin >> K;

    vector<string> words(K);
    for (int i = 0; i < K; ++i) {
        cin >> words[i];
    }

    int N, M;
    cin >> N >> M;

    cout << justifyWords(K, words, N, M) << endl;

    return 0;
}