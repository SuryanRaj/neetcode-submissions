class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.length()!=t.length())
       {
        return false;
       } 
       std::ranges::sort(s);
       std::ranges::sort(t);
       return s==t;
    }
};
