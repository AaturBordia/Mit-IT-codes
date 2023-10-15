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
    cout << "Enter the direction of movement (0 for left, 1 for right): ";
    int direction;
    cin >> direction;
    int total_movement = 0;
    sort(requests.begin(), requests.end());
    int index = lower_bound(requests.begin(), requests.end(), head) - requests.begin();
    if (index == requests.size()) {
        index--;
        direction = 0;
    } else if (index == 0) {
        direction = 1;
    }
    while (!requests.empty()) {
        // move in the current direction and service requests
        while (index >= 0 && index < requests.size()) {
            total_movement += abs(requests[index] - head);
            head = requests[index];
            requests.erase(requests.begin() + index);
            if (requests.empty()) {
                cout << "Total head movement: " << total_movement << endl;
                return 0;
            }
        }
        // reverse direction if necessary
        if (direction == 0) {
            index++;
        } else {
            index--;
        }
        // move to the first remaining request in the opposite direction
        if (index < 0 || index >= requests.size()) {
            if (direction == 0) {
                index = 0;
            } else {
                index = requests.size() - 1;
            }
        }
    }
}
