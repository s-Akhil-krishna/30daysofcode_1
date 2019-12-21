//Question: https://leetcode.com/problems/backspace-string-compare/submissions/
//Time -O(m+n) | space -O(m+n) {m,n = S.size,T.size}


class Solution {
public:
    bool backspaceCompare(string S, string T) {
            int n1=S.length(),n2=T.length(); int i=0,j=0;
     string s1="",t1="";
        for(i=0;i<n1;i++){ 
         if(S[i]!='#'){
             s1+=S[i];
         }//end-if
         else{
             s1+=S[i];
             j=i;
            while(j>=0 && s1[j]=='#')
                j--;
             if(j>=0)
                 s1[j]='#';
        }//end-else
    }//end-for
    
        for(i=0;i<n2;i++){
         if(T[i]!='#'){
             t1+=T[i];
         }//end-if
         else{
             t1+=T[i];
             j=i;
            while(j>=0 && t1[j]=='#')
                j--;
             if(j>=0)
                 t1[j]='#';
        }//end-else
    }//end-for
        
        string s2="",t2="";
        int l1=s1.length(),l2=t1.length();
        for(i=0;i<l1;i++) 
            if(s1[i]!='#') s2+=s1[i];
        for(i=0;i<l2;i++) 
            if(t1[i]!='#') t2+=t1[i];
        
      return (s2==t2);
 
    }
};
