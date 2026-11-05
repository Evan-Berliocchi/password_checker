#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    cout << "Enter your password: ";
    string password;
    getline(cin, password);

    while (password.empty()) {
        cout << "You must enter at least one character" << endl;
        cout << "Enter your password: ";
        getline(cin, password);
    }

    int score = 0;

    if (password.length() >= 12) {
        score += 3;
    } else {
        score -= 4;
    }

    bool has_lower = false;
    bool has_upper = false;
    bool has_digit = false;
    bool has_punct = false;
    bool has_consecutive = false;

    for (size_t i = 0; i < password.length(); i++) {
        unsigned char c = password[i];

        if (islower(c)) has_lower = true;
        if (isupper(c)) has_upper = true;
        if (isdigit(c)) has_digit = true;
        if (ispunct(c)) has_punct = true;

        if (!has_consecutive && i < password.length() - 1 && password[i] == password[i + 1]) {
            has_consecutive = true; 
        }
    }

    if (has_lower) score++;
    if (has_upper) score++;
    if (has_digit) score++;
    if (has_punct) score++;
    if (has_consecutive) score -= 2;

    if (score < 0) {
        score = 0;
    }

    if (score >= 0 && score <= 2) {
        cout << "Your password is weak, it is strongly recommended that you change it!" << endl;
    } else if (score >= 3 && score <= 4) {
        cout << "Your password is medium, it is strongly recommended that you change it!" << endl;
    } else if (score >= 5 && score <= 6) {
        cout << "Your password is strong, it can still be improved" << endl;
    } else if (score == 7) {
        cout << "Your password is robust, keep in mind that nothing is infallible" << endl;
    }

    return 0;
}
