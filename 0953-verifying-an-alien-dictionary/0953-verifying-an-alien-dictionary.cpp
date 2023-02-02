class Solution {
public:
    bool compare(string& a, string& b, string& order) {
    int j = 0;
        while (j < a.size() && a[j] == b[j]) j++;
        if (a.size() == j) 
            return true;
        else if (b.size() == j) 
            return false;
        
        return (order.find(a[j]) < order.find(b[j]));
    }
    
    
    bool isAlienSorted(vector<string>& words, string order) {
        for (int j = 0; j < words.size()-1; j++) {
            if (!compare(words[j], words[j+1], order)) 
                return false;
        }
        return true;
    }
};