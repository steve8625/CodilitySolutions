
int solution(vector<int> &A) {
    int N = A.size();
    vector<bool> occur(N,0);
    for(int i = 0 ; i < N ; ++i){
        if( A[i] > 0 && A[i] < N+1 ){
            if(occur[A[i]-1]) return 0;
            else occur[A[i]-1] = true;
        }
    }
    for(int j = 0 ; j < N ; ++j){
        if(!occur[j]) return 0;
    }
    return 1;
}