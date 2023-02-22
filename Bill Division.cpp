void bonAppetit(vector<int> bill, int k, int b) {
    int d = 0;
    for(int i =0; i < bill.size(); i++){
        d = d + bill[i];
    }
    d = d - bill[k];
    d = d / 2;
    if(d == b) {
        cout << "Bon Appetit";
    }
    else {
       int due = b - d;
        cout << due;
    }
}
