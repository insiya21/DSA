// class Solution {
// public:
//     bool arelastk_1charssame(string &ans,char &newch,int k_1){
//         int it=ans.size()-1;
//         for(int i=0;i<k_1;++i){
//             if(newch!=ans[it]) return false;
//                 it--;
//         }
//         return true;
//     }
//     string removeDuplicates(string s, int k) {
//         string ans;
//         for(int i=0;i<s.size();++i){
//             char &newch=s[i];
//             if(ans.size()<k-1)
//                 ans.push_back(newch);
//             else{
//                 if(arelastk_1charssame(ans,newch,k-1)){
//                     for(int j=0;j<k-1;++j)
//                         ans.pop_back();
//                 }
//                 else
//                     ans.push_back(newch);
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    string removeDuplicates(string s, int k) {
        int i=0,j=0;
        vector<int>count(s.size());
        while(j<s.size()){
            s[i]=s[j];
            count[i]=1;
            if(i>0 && s[i]==s[i-1])
                count[i]+=count[i-1];
            if(count[i]==k)
                i-=k;
            ++i,++j;
        }
        return s.substr(0,i);
    }
};