class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int cnt[3] = {};

        for (int x : stones) {
            cnt[x % 3]++;
        }

        if (cnt[0] % 2 == 0) {
            // If the number of 0-mod-3 stones is even,
            // Alice wins whenever both 1 and 2 exist.
            return cnt[1] > 0 && cnt[2] > 0;
        }

        // If cnt[0] is odd, one remainder group must
        // outnumber the other by at least 3.
        return abs(cnt[1] - cnt[2]) > 2;
    }
};