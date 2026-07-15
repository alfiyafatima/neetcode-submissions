class Solution {
public:
    string new_word(string& s){
        int n = s.size();

        vector<int>arr(26,0);

        for(char ch:s){
            arr[ch-'a']++;
        }

        string new_string = "";

        for(int i=0;i<26;i++){
            if(arr[i]>0){
                new_string += string(arr[i],i+'a');
            }
        }

        return new_string;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();

        vector<vector<string>>results;

        unordered_map<string,vector<string>>mp;

        for(int i=0;i<n;i++){
            string temp = new_word(strs[i]);

            mp[temp].push_back(strs[i]);
        }

        for(auto it:mp){
            results.push_back(it.second);
        }

        return results;
    }
};
