int solution(int X, int Y, int D) {
    if(X == Y) return 0;
    else return 1 + (Y-X-1)/D;
}