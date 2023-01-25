class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2);
};
/***************************************************************/
vector<int> Solution::nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int> v(nums1.size(), 0);
    int size1 = nums1.size(), size2 = nums2.size(), i, j, foundI, found;
    for (i = 0; i < size1; ++i) {
        foundI = 0;
        found = 0;
        for (j = 0; j < size2; ++j) {
            if (nums1[i] == nums2[j]) {
                foundI = 1;
            }
            if (foundI == 1 && nums1[i] < nums2[j]) {
                v[i] = nums2[j];
                found = 1;
                break;
            }
        }
        if (found == 0) {
            v[i] = -1;
        }
    }
    return v;
}
