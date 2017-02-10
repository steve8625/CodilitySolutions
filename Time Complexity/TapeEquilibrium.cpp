#include <climits>
#include <cmath>
int solution(vector<int> &A) {
    int N = A.size();
    long long M = INT_MAX;
    vector<long long> prefix_sum(N,0);
    prefix_sum[0] = (long long)A[0];
    for(int i = 1 ; i < N ; ++i){
        prefix_sum[i] = prefix_sum[i-1] + (long long)A[i];
    }
    for(int j = 1 ; j < N ; ++j){
        if( abs( prefix_sum[N-1]-2*prefix_sum[j-1]) < M ) M = abs( prefix_sum[N-1]-2*prefix_sum[j-1]);
    }
    return M;
}