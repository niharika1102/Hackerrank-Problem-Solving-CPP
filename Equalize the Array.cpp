int equalizeArray(vector<int> arr) {
    int del = 0;
    int largest=0,equal;
    
    for (int i = 0; i < arr.size(); i++) {
        equal=1;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] == arr[j]) {
                // equal = arr[i];
                equal++;
            }
            if (equal>largest){
                largest=equal;
            }
        }
        
    }
    
    return arr.size()-largest;   
}
