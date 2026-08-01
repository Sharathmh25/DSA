class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int i=0;
        int j=0;
        int count=0;
        while(i<n && j<t.size()){
           if(s[i]==t[j]){
            count++;
            i++;

           }
           j++;
      }
      if (count == n) {
            return true;
        } else {
            return false;
        }
           
    }
};