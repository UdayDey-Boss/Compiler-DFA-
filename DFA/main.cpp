#include <iostream>
#include <string>
using namespace std;

class DFA {
private:
    int currentState;

    bool isFinalState(int state) {
        return (state == 3 || state == 4);
    }

    int nextState(int state, char input) {
        switch (state) {
            case 0:
                if (input == 'a') return 3;
                if (input == 'b') return 1;
                break;

            case 1:
                if (input == 'a') return 2;
                if (input == 'b') return 1;
                break;

            case 2:
                if (input == 'a') return 3;
                if (input == 'b') return 1;
                break;

            case 3:
                if (input == 'a') return 4;
                if (input == 'b') return 1;
                break;

            case 4:
                if (input == 'a') return 4;
                if (input == 'b') return 1;
                break;
        }
        return -1; // invalid input
    }

public:
    DFA() {
        currentState = 0;
    }

    bool verify(const string& s) {
        currentState = 0;

        for (char c : s) {
            currentState = nextState(currentState, c);
            if (currentState == -1)
                return false;
        }

        return isFinalState(currentState);
    }
};

int main() {
    DFA dfa;
    string input;

    cout << "----------------" << endl;
    cout << "Enter a string: ";
    cin >> input;

    if (dfa.verify(input))
        cout << "Accept" << endl;
    else
        cout << "Reject" << endl;

    return 0;
}
