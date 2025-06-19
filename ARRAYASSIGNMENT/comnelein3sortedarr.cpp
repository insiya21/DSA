vector<int>commonelements(int a[],int b[],int c[],int n1,int n2,int n3){
vector<int>ans;
    set<int>st;
    int i,j,k;
    i=j=k=0;
    while(i<n1&&j<n2&&k<n3){
        if(a[i]==b[j]&&b[j]==c[k]){
            st.insert(a[i]);
            i++,j++,k++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<c[k]){
            j++;
        }
        else{
            k++;
        }
    }
    for(auto i:st){
        ans.push_back(i);
    }
    return ans;
}