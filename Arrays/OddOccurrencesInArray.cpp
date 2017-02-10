int solution(vector<int> &A) {
    int N = A.size();
    int result = 0;
    for(int i = 0 ; i < N ; ++i){
        result ^= A[i];
    }
    return result; 
}