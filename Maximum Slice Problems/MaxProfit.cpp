
#include <algorithm>

int solution(vector<int> &A) {
    
    if(A.size () == 0 || A.size() == 1) return 0;
    
    int M = 0;
    int max_ends_here = 0;
    int m = A[0];
    
    for(unsigned int i = 0 ; i < A.size() ; ++i){
        max_ends_here = max( A[i] - m , 0 );
        m = min( A[i] , m );
        M = max( max_ends_here , M );
    }
    
    return M;
       
}