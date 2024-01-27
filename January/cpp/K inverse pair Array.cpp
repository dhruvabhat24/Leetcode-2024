constexpr long MODULUS = 1'000'000'007;

static int ANSWERS[1001][1001] = {};
static bool CALCULATED = false;

class Solution {
public:
    int kInversePairs(int in_n, int in_k) {
        if (CALCULATED) {
            return ANSWERS[in_n][in_k];
        }
        for (int n = 1; n <= 1000; n++) {
            const int* prev_row = ANSWERS[n - 1];
            int* out = ANSWERS[n];
            int* it = out;
            int* end = out + 1001;
            *it = 1;
            ++it;
            *it = n - 1;
            int prev = *it;
            ++it;
            int limit = min(1000, n * (n - 1) / 2);
            for (int k = 2; k <= limit; k++, ++it) {
                prev = *it = (prev + prev_row[k] - (k >= n ? prev_row[k - n] : 0) + MODULUS) % MODULUS;
            }
        }
        CALCULATED = true;
        return ANSWERS[in_n][in_k];
    }
};
