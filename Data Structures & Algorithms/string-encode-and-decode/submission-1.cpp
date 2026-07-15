class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";

        int n = strs.size();

        for(int i=0;i<n;i++){
            s+=to_string(strs[i].size());
            s+='#';
            s+=strs[i];
        }

        return s;
    }

    vector<string> decode(string s) {
        int n = s.size();
        vector<string>res;
        // string st = "";

       int i = 0;
       while(i<n){
        int j = i;
        while(s[j]!='#'){
            j++;
        }
        int len = stoi(s.substr(i,j-i));

        i = j+1;
        j = i+len;
        res.push_back(s.substr(i,len));

        i = j;
       }

        return res;
    }
};
