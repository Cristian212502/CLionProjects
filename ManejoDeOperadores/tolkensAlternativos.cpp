#include <iostream>
#include <bitset>
#include <iomanip>
using namespace std;
int main() {

    int a = 85;
    int b = 112;

    cout <<setw(14) << "a = " << bitset<8>(a) << endl;
    cout <<setw(14) << "b = " << bitset<8>(b) <<endl;

    int c = a bitor b;
    cout << setw(14) << "a bitor b = " << bitset<8>(c) << endl;

    c = a bitand b;
    cout << setw(14) << "a bitand b = " << bitset<8>(c) << endl;


    c = a xor b;
    cout << setw(14) << "a xor b = " << bitset<8>(c) << endl;


    c = compl(a);
    cout << setw(14) << "NOT a = " << bitset<8>(c) << endl;


    bool p = true;
    bool q = false;


    bool logical_or = p or q;
    std::cout << std::setw(14) << "p or q = " << logical_or << endl;


    bool logical_and = p and q;
    cout << setw(14) << "p and q = " << logical_and << endl;

    return 0;
}