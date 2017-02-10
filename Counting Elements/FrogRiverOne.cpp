
int solution(int X, vector<int> &A) {
    int N = A.size();
    int sum = 0;
    vector<bool> occur(X,false);
    for(int i = 0 ; i < N ; ++i){
        if(!occur[A[i]-1]){
            occur[A[i]-1] = true;
            sum ++;
        }
        if(sum == X) return i;
    }
    return -1;
}

