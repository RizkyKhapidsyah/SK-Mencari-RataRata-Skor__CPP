#include <iostream>
#include <conio.h>

using namespace std;

void getScore(float& score) {
    cout << "\n Masukkan nilai score : ";
    cin >> score;
}

float  findLowest(float arr[]) {
    float lowest = arr[0];

    for (int i = 1; i < 5; i++) {
        if (lowest > arr[i]) {
            lowest = arr[i];
        }
    }

    cout << "\n Score terendah adalah : " << lowest;

    return lowest;
}

void calcAverage(float arr[]) {

    float lowest = findLowest(arr);
    float avg = 0;

    for (int i = 0; i < 5; i++) {
        if (arr[i] != lowest)
            avg = avg + arr[i];
    }

    avg = avg / 4;
    cout << "\n Score rata-rata adalah : " << avg;
}

int main() {
    float arr[5];

    for (int i = 0; i < 5; i++) {
        getScore(arr[i]);
    }

    calcAverage(arr);

    _getch();
    return 0;
}