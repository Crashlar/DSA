#include <iostream>
#include <vector>
using namespace std;

class Cricketer {
public:
    char name;
    int age;
    int avg_Score;
    int num_Test_Match;

    // Constructor
    Cricketer(char n, int a, int avg, int matches) {
        name = n;
        age = a;
        avg_Score = avg;
        num_Test_Match = matches;
    }

    void display() const {
        cout << "Name: " << name
             << ", Age: " << age
             << ", Avg Score: " << avg_Score
             << ", Test Matches: " << num_Test_Match << endl;
    }
};

int main() {
    vector<Cricketer> players = {
        Cricketer('V', 30, 80, 100),
        Cricketer('R', 28, 75, 90),
        Cricketer('K', 32, 78, 110),
        Cricketer('S', 27, 70, 85),
        Cricketer('M', 29, 82, 95),
        Cricketer('A', 31, 76, 105),
        Cricketer('T', 26, 68, 80),
        Cricketer('J', 33, 85, 120),
        Cricketer('N', 30, 74, 88),
        Cricketer('L', 25, 65, 70),
        Cricketer('D', 34, 90, 130),
        Cricketer('B', 28, 72, 92),
        Cricketer('E', 29, 77, 98),
        Cricketer('F', 31, 79, 102),
        Cricketer('G', 27, 69, 83),
        Cricketer('H', 32, 81, 108),
        Cricketer('I', 26, 66, 75),
        Cricketer('O', 35, 88, 125),
        Cricketer('P', 30, 73, 89),
        Cricketer('Q', 28, 71, 91)
    };

    
    for (int i = 0; i < players.size(); ++i) {
        cout << "Player " << i + 1 << ": ";
        players[i].display();
    }

    return 0;
}
