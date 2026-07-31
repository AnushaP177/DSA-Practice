//leetcode 3016

class Solution {
public:
    int minimumPushes(string word) {
       vector<int> hash(26,0);
       for(char c: word){
            hash[c-'a']++;
       }
       if (hash.size()<=8){
            return word.size();
       }
       sort(hash.begin(), hash.end());
       int sum=0, i=2;
        for(auto it= hash.rbegin(); it!=hash.rend(); ++it){
            if (i<10)    sum+=(*it);
            else if (i<18)   sum+=2*(*it);
            else if (i<26)   sum+=3*(*it);
            else sum+=4*(*it);
            i++;
        }
        return sum;
    }
};
