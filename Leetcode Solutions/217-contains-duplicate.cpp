/*
Leetcode Question : Contains Duplicate
Problem Link : https://leetcode.com/problems/contains-duplicate/
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end()) ;
        if(s.size() == nums.size()) return false ;
        return true ;
    }
};
