#include <iostream>
#include <string>
#include "functions.h"
using namespace std;

int main() {

    string word = "broccoli";
    string sentence = "I sometimes eat broccoli. The interesting thing about broccoli is that there are four interesting things about broccoli. Number One. Nobody knows how to spell it. Number Two. No matter how long you boil it, it's always cold by the time it reaches your plate. Number Three. It's green. #broccoli";
    bleep(word, sentence);

    for (int i = 0; i < sentence.size(); i++) {
        cout << sentence[i];
    }
    cout << "\n";

}