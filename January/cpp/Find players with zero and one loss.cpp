class Solution {
public:
    std::vector<std::vector<int>> findWinners(std::vector<std::vector<int>>& matches) {
        std::unordered_map<int, int> loser;
        std::unordered_set<int> played;

        for (const auto& match : matches) {
            loser[match[1]]++;
            played.insert(match[0]);
            played.insert(match[1]);
        }

        std::vector<int> noLoss;
        std::vector<int> oneLoss;

        for (int player : played) {
            if (loser.find(player) == loser.end()) {
                noLoss.push_back(player);
            } else if (loser[player] == 1) {
                oneLoss.push_back(player);
            }
        }

        std::sort(noLoss.begin(), noLoss.end());
        std::sort(oneLoss.begin(), oneLoss.end());

        return {noLoss, oneLoss};
    }
};
