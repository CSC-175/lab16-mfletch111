int gcf(int x,int y) {
    if (y== 0) {
        return x;
    }
    else {
        return gcf(y, x%y);
    }
}