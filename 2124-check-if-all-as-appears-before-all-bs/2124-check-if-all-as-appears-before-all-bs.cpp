class Solution {
public:
    bool checkString(string s) {
        if(s.find("a") == string::npos || s.find("b") == string::npos ) return true;
        if(s.rfind("a")>s.find('b')) return false;
        return true;
    }
};