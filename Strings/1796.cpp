class Solution {
public:
    int secondHighest(string s) {
        int res=-1, prev=-1;
        for(int i=0; i<s.size(); i++){
            if (isdigit(s[i])){
                int num=s[i]-'0';
                if (num>res){
                    prev=res;
                    res=num;
                }
                else if (num>prev && num<res)   prev=num;
            }
        }
        return prev;
    }
};
