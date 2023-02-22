int getTotalX(vector<int> a, vector<int> b) {
    int l1=a.size();
    sort(a.begin(),a.end());
    int l2=b.size();
    sort(b.begin(),b.end());
    int Count=0;
    for(int i=a[l1-1];i<=b[0];i++){
        int flag=0;
        for(int j=0;j<l1;j++){
            if(i%a[j]==0)
                continue;
            else{
                flag=1;
                break;
            }
        }
        if(flag==0){
            for(int k=0;k<l2;k++){
                if(b[k]%i==0){
                    continue;
                }else{
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
            Count++;
    }
    return Count;
}
