vector<int> solution(vector<int> &A, int K) {
    
    if(A.empty()) return A;
    
    vector<int> result;
    int N = A.size();
    int eff_k = ( K % N );
    
    for(int i = N - eff_k ; i < N ; ++i){
        result.push_back(A[i]);
    }
    
    for(int j = 0 ; j < N-eff_k ; ++j){
        result.push_back(A[j]);
    }
    
    return result;
    
}