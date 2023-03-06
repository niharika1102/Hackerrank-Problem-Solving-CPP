int designerPdfViewer(vector<int> h, string word) {
    int length = word.size();
    int maxHeight = 0; 
    for (int i = 0; i < length; i++) {
        int charHeight = word[i] - 97;
        if (h[charHeight] > maxHeight) {
            maxHeight = h[charHeight];
        }
    }
    return maxHeight * length;
}
