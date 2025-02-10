#include <iostream>

using namespace std;

int main() {
    int i = 4, j = 7, k = 5, val1, val2;

    val1 = i * j / 2 + k % 2 - 3;
    val2 = (i * j / (2 + k)) % 2 - 3;

    cout << "val1 = " << val1 << endl; // outputs 12
    cout << "val2 = " << val2 << endl; // outputs -3

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.