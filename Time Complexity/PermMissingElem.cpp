int solution(vector<int> &A) {   
    if(A.empty()) return 1;
    int N = A.size();
    vector<int> check(N+1,0);
    for(int i = 0 ; i < N ; ++i){
        check[A[i]-1] = 1;
    }
    for(int j = 0 ; j < N+1 ; ++j){
        if(check[j] == 0) return j+1;
    }
    return -1;
}