int migratoryBirds(vector<int> arr) {
    int i,x=0;

    int  a[6]={0};
    for(i=0;i<arr.size();i++){
        a[arr[i]]++;
    }   
    int h;
    h=a[0];
    for(i=1;i<=5;i++){
        if(h<a[i]){
            h=a[i];
            x=i;
        }
    }
    if(h!=a[0]) {
        return x;
    }
    else return 5;
}
