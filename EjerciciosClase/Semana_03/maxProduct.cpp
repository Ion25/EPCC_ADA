#include <iostream>
using namespace std;

int main() {
    int n, x;
    int ant_max, max = 1;
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> x;
        if (x > max) {
            ant_max = max;
            max = x;
        }
    }
    
    cout << ant_max*max << endl;

    return 0;
}