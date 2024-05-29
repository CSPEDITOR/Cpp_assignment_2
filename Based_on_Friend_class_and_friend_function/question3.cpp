// 3. WAP to difference between sum of all even and odd numbers in an array of 10 numbers using friend
// function?
#include <iostream>
using namespace std;

class ArraySum {
private:
    int arr[10];

public:
    void getArray() {
        cout << "Enter 10 numbers: ";
        for (int i = 0; i < 10; i++) {
            cin >> arr[i];
        }
    }

    friend int findDifference(ArraySum);
};

int findDifference(ArraySum obj) {
    int evenSum = 0, oddSum = 0;
    for (int i = 0; i < 10; i++) {
        if (obj.arr[i] % 2 == 0) {
            evenSum += obj.arr[i];
        } else {
            oddSum += obj.arr[i];
        }
    }
    return evenSum - oddSum;
}

int main() {
    ArraySum obj;
    obj.getArray();
    int diff = findDifference(obj);
    cout << "Difference between sum of even and odd numbers: " << diff << endl;
    return 0;
}
