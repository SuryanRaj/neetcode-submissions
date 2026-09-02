class Solution {
public:

    string encode(vector<string>& strs) {
        string fstr;
        int l=0;
        for(int i=0;i<strs.size();i++)
        {
             l=strs[i].size();
            fstr+=std::to_string(l)+"#"+strs[i];

            l=0;
        }
        return fstr;
    }

    vector<string> decode(string s) {
            vector<string>res;
            int i=0;
             while(i<s.size())
             {
                int j=s.find('#',i);
                int len=stoi(s.substr(i,j-i));

                string word=s.substr(j+1,len);
                res.push_back(word);
                i=j+1+len;
             }
             return res;
    }
};
