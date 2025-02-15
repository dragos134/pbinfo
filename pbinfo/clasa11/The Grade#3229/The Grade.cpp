#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <algorithm>

using namespace std;

const int MOD = 1e9 + 7;

// Cache pentru factoriale
unordered_map<int, long long> factCache;

// Funcție pentru a calcula factorialul modulo MOD
long long factorial(int n) {
    if (factCache.find(n) != factCache.end()) {
        return factCache[n];
    }
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result = (result * i) % MOD;
    }
    factCache[n] = result;
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q, P;
    cin >> Q >> P;

    multiset<int> A;
    unordered_map<int, int> freq; // Frecvența elementelor din A

    for (int q = 0; q < Q; ++q) {
        int type, x;
        cin >> type >> x;

        if (type == 0) {
            A.insert(x);
            freq[x]++;
        } else if (type == 1) {
            auto it = A.find(x);
            if (it != A.end()) {
                A.erase(it);
                freq[x]--;
                if (freq[x] == 0) {
                    freq.erase(x);
                }
            }
        }

        // Verificăm dacă elementele din A pot fi plasate în S
        vector<int> elements(A.begin(), A.end());
        sort(elements.rbegin(), elements.rend());

        long long minSum = 0;
        int lastPos = 0;

        for (size_t i = 0; i < elements.size(); ++i) {
            int x = elements[i];
            if (i == 0) {
                // Primul element trebuie să respecte f >= x
                minSum += x;
                lastPos = x;
            } else {
                // Distanța minimă față de elementul anterior este x
                minSum += x;
                lastPos += x;
            }
        }

        if (minSum > P) {
            cout << -1 << "\n";
            continue;
        }

        // Calculăm numărul de configurații
        long long configurations = 1;
        for (const auto& pair : freq) {
            int count = pair.second;
            configurations = (configurations * factorial(count)) % MOD;
        }

        cout << configurations << "\n";
    }

    return 0;
}