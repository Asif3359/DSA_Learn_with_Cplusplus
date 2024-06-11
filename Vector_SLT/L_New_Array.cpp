#include <bits/stdc++.h>

using namespace std;

vector<int> concatenateArrays(int N, vector<int>& A, vector<int>& B) {
    vector<int> C;
    // Concatenate B followed by A
    for (int i = 0; i < N; i++) {
        C.push_back(B[i]);
    }
    for (int i = 0; i < N; i++) {
        C.push_back(A[i]);
    }
    return C;
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    // vector<int> C = concatenateArrays(N, A, B);
    vector<int> C(B); 
    C.insert(C.end(), A.begin(), A.end()); 

    for (int i = 0; i < C.size(); i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}
