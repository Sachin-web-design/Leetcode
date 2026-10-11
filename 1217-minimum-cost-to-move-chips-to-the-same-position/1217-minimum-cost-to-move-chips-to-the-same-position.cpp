class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int evencost = 0, oddcost = 0;

        for (int i : position) {
            if (i % 2 == 0) {
                evencost++;
            } else {
                oddcost++;
            }
        }

        return min(evencost, oddcost);
    }
};