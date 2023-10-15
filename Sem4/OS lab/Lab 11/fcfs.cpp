#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int head, n;
    cout << "Enter the initial position of head: ";
    cin >> head;
    cout << "Enter the number of disk requests: ";
    cin >> n;
    vector<int> requests(n);
    cout << "Enter the disk requests: ";
    for (int i = 0; i < n; i++) {
        cin >> requests[i];
    }
    int total_movement = 0;
    for (int i = 0; i < n; i++) {
        total_movement += abs(requests[i] - head);
        head = requests[i];
    }
    cout << "Total head movement: " << total_movement << endl;
    return 0;
}
