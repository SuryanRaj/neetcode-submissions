class Solution {
public:
    bool isPalindrome(string s) {
       string ans="",og="";
       char ch;
       for(int i=0;i<s.length();i++)
       {
        ch=std::tolower(s[i]);
        if(std::isalpha(static_cast<unsigned char>(ch))||ch=='0'||ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9')
        {
            ans=ans+ch;
        }
       }
       og=ans;
       string x;
       for(int i=og.length()-1;i>=0;i--)
       {
        char c=og[i];
        x=x+c;
       }
       if(x==og)
       {
        return true;
       }
       else
       {
        return false;
       }
    }
};
