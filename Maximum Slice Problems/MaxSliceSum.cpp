#include <algorithm>
#include <climits>

int solution(vector<int> &A) {
    
    int N = A.size();
    if(N == 1) return A[0];
    
    int max_negative = INT_MIN;
    long long max_ending = 0;
    long long M = 0;
    
    for(int i = 0 ; i < N ; ++i){
        max_ending = max( max_ending + (long long)A[i] , (long long)0 );
        M = max( max_ending , M );
        if( A[i] <= 0 ) max_negative = max( A[i] , max_negative );
    }
    
    if ( M > 0 ) return M;
    else return max_negative;
    
}