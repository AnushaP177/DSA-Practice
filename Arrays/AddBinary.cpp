lass Solution {
public:
    string addBinary(string a, string b) {
        if (a.size()>b.size())   swap(a,b);
        while(b.size() < a.size())   b="0"+b;
        int carry=0;
        for(int i=a.size()-1; i>=0; i--){
            int c=a[i]-'0'+b[i]-'0' + carry;
            a[i]=c+'0';
            if (a[i]=='2'){
                a[i]='0';
                carry=1;
            }
            else if (a[i]=='3'){
                a[i]='1';
                carry=1;
            }
            else{
                carry=0;
            }
        }
        if (carry==1){
            a="1"+a;
        }
        return a;
    }
};
