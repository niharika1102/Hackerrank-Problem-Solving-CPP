int pageCount(int n, int p) {
    int front, back;
    front = p / 2;
    
    if (n % 2 == 0)
        n++;
    back = (n - p) / 2;
    
    if (front <= back) 
        return front;
        
    return back;
}
