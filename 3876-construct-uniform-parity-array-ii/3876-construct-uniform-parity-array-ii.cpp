class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int smallestOdd = INT_MAX;
        int smallestEven = INT_MAX;

        for (int i = 0; i < nums1.size(); i++) {
            if (nums1[i] % 2 != 0) {
                smallestOdd = min(smallestOdd, nums1[i]);
            }
            else {
                smallestEven = min(smallestEven, nums1[i]);
            }
        }

        // Already all odd or even
        if (smallestEven == INT_MAX || smallestOdd == INT_MAX) {
            return true;
        }

        

        // Mixed parity: make every even number odd
        return smallestOdd < smallestEven;
    }
};