#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    while (true) {
        cin >> line;
        if (line == "ENDOFINPUT") {
            break;
        }
        if (line == "START") {
            cin >> line;
            for (int i = 0; i < line.length(); i++) {
                if (line[i] >= 'A' && line[i] <= 'Z') {
                    line[i] = ((line[i] - 'A' + 21) % 26) + 'A';
                }
            }
            cout << line << endl;
        }
        cin >> line; 
    }
    return 0;
}
