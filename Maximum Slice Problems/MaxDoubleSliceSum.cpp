
#include <algorithm>

int solution(vector<int> &A) {
    
    int N = A.size();
    vector<int> max_from_left(N,0);
    vector<int> max_from_right(N,0);
    
    for(int i = 1 ; i < N-1 ; ++i){
        max_from_left[i] = max( max_from_left[i-1] + A[i] , 0 );
    }
    
    for(int i = N-2 ; i > 0 ; --i){
        max_from_right[i] = max( max_from_right[i+1] + A[i] , 0 );
    }
    
    int M = 0;
    
    for(int i = 1 ; i < N-1 ; ++i){
        M = max( max_from_left[i-1] + max_from_right[i+1] , M );
    }
    
    return M;

}