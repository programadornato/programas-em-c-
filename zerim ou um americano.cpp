#include <iostream>

using namespace std;

int main() {
    int jog1, jog2, jog3, jog4;
    cin >> jog1 >> jog2 >> jog3 >> jog4;

    int soma = jog1 + jog2 + jog3 + jog4;

    if (soma == 0) {
        cout << "nenhum" << endl;
    } else if (soma % 4 == 1) {
        cout << "jog1" << endl;
    } else if (soma % 4 == 2) {
        cout << "jog2" << endl;
    } else if (soma % 4 == 3) {
        cout << "jog3" << endl;
    } else {
        cout << "jog4" << endl;
    }

    return 0;
}
