class Solution {
public:
vector<string> splitWords(string s) {
    vector<string> words;
    string temp = "";

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') {
            words.push_back(temp);
            temp = "";
        } else {
            temp += s[i];
        }
    }

    if(temp != "") words.push_back(temp); // last word

    return words;
}
    vector<string> uncommonFromSentences(string s1, string s2) {
    vector<string> w1 = splitWords(s1);
    vector<string> w2 = splitWords(s2);

        unordered_map<string,int> freq;

    for(string w : w1)
        freq[w]++;

    for(string w : w2)
        freq[w]++;

    vector<string> ans;

    for(auto it : freq){
        if(it.second == 1){
            ans.push_back(it.first);
        }
    }

    return ans;
    }
};