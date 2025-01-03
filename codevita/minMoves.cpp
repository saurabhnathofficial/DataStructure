#include <iostream>
#include <vector>
#include <string>
using namespace std;

int justifyWords(int K, vector<string> &words, int N, int M) {
    int wordsPlaced = 0;       // Number of words successfully placed
    int currentLineLength = 0; // Current line length
    int linesUsed = 0;         // Number of lines used

    for (const string &word : words) {
        int wordLength = word.length();

        // Check if the word can fit in the current line
        if (linesUsed < N && (currentLineLength + wordLength + (currentLineLength > 0 ? 1 : 0) <= M)) {
            if (currentLineLength > 0) {
                currentLineLength += 1; // Add space between words
            }
            currentLineLength += wordLength;
            wordsPlaced++;
        } else {
            // Start a new line if available
            linesUsed++;
            if (linesUsed < N && wordLength <= M) {
                currentLineLength = wordLength; // Place the word on the new line
                wordsPlaced++;
            } else {
                break; // No more lines or word is too long
            }
        }
    }

    return wordsPlaced;
}

int main() {
    // Input
    int K;
    cin >> K;

    vector<string> words(K);
    for (int i = 0; i < K; ++i) {
        cin >> words[i];
    }

    int N, M;
    cin >> N >> M;

    // Output the maximum number of words that can be placed
    cout << justifyWords(K, words, N, M) << endl;

    return 0;
}
