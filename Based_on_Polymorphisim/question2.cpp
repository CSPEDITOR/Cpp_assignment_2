// 2) Write program to display following pattern using function overloading?
// Odd number based pyramid starts from value n received from user
//       n+1
//     n+3 n+6
//   n+5 n+10 n+15
// n+7 n+14 n+21 n+28
// even number based pyramid starts from value n received from user
//        n+2
//     n+4 n+6
//   n+6 n+10 n+14
// n+8 n+14 n+20 n+26
// user defined character suppose entered character is k
//    k
//   k k
//  k k k
// k k k k

#include <iostream>
using namespace std;
void displayPattern(char k) {
    cout << "             " << k << endl;
    cout << "         " << k << "       " << k << endl;
    cout << "     " << k << "       " << k << "       " << k << endl;
    cout << " " << k << "       " << k << "      " << k << "       " << k << endl;
}
void printPatternOdd(int n) {
    cout << "Pattern for odd value of n:" << endl;
    cout << "             " << n+1 << endl;
    cout << "         " << n+3 << "       " << n+6 << endl;
    cout << "     " << n+5 << "       " << n+10 << "       " << n+15 << endl;
    cout << " " << n+7 << "       " << n+14 << "      " << n+21 << "       " << n+28 << endl;
    cout << endl;
}

void printPatternEven(int n) {
    cout << "\nPattern for even value of n:" << endl;
    cout << "             " << n+2 << endl;
    cout << "         " << n+4 << "       " << n+8 << endl;
    cout << "     " << n+6 << "       " << n+12 << "       " << n+18 << endl;
    cout << " " << n+8 << "       " << n+16 << "      " << n+24 << "       " << n+32 << endl;
    cout << endl;
}

int main() {
    int oddN, evenN;
	char userChar = 'k';
    displayPattern(userChar);
    cout << endl;
    cout << "Enter an odd value for n: ";
    cin >> oddN;
    if (oddN % 2 == 0) {
        cout << "Please enter an odd value for n." << endl;
        return 1;
    }

    cout << "Enter an even value for n: ";
    cin >> evenN;
    if (evenN % 2 != 0) {
        cout << "Please enter an even value for n." << endl;
        return 1;
    }

    printPatternOdd(oddN);
    printPatternEven(evenN);

    return 0;
}
