class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> lost_count;
        vector<int> not_lost;
        vector<int> lost_once;

        for (const auto& match : matches) {
            lost_count[match[1]]++;
            not_lost.push_back(match[0]);
        }

        for (const auto& [player, count] : lost_count)
            if (count == 1)
                lost_once.push_back(player);

        sort(not_lost.begin(), not_lost.end());
        sort(lost_once.begin(), lost_once.end());
        
        not_lost.erase(unique(not_lost.begin(), not_lost.end()), not_lost.end());
        lost_once.erase(unique(lost_once.begin(), lost_once.end()), lost_once.end());

        auto it = remove_if(not_lost.begin(), not_lost.end(), [&](int player) {
            return lost_count[player] > 0;
        });
        not_lost.erase(it, not_lost.end());

        return {not_lost, lost_once};
    }
};
