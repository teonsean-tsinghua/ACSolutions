/*
 * @lc app=leetcode id=326 lang=cpp
 *
 * [326] Power of Three
 */
class Solution {
public:
    bool isPowerOfThree(int n) {
        return fmod(log10(n) / log10(3), 1) == 0;
    }
};

