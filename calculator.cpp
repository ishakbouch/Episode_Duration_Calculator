#include <iostream>
using namespace std;

int main() {
    int a, b, h;
    float v;

    cout << "Episode duration in minutes: ";
    cin >> a;

    cout << "Number of episodes: ";
    cin >> b;

    h = (a * b) / 60;
    v = (((a * b) / 60.0) - h) * 60;

    cout << h << "h and " << v << "min";

    return 0;
}