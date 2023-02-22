void staircase(int n) {
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"#";
        }
        cout<<endl;
    }
}
