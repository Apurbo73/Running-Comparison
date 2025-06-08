#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases
    while (T--) {
        int N;
        cin >> N; // Number of days

        vector<int> A(N), B(N);

        for (int i = 0; i < N; ++i)
            cin >> A[i]; // Alice's distances

        for (int i = 0; i < N; ++i)
            cin >> B[i]; // Bob's distances

        int happyDays = 0;

        for (int i = 0; i < N; ++i) {
            // Both are happy if neither ran more than twice the other's distance
            if (A[i] * 2 >= B[i] && B[i] * 2 >= A[i]) {
                happyDays++;
            }
        }

        cout << happyDays << endl;
    }

    return 0;
}
