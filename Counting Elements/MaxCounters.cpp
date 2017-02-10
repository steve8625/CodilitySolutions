
#include <algorithm>

// use a varible to keep current cap 
vector<int> solution(int N, vector<int> &A) {
    vector<int> result(N,0);
    int max_counter = 0;
    int current_max = 0;
    for(unsigned int i = 0 ; i < A.size() ; ++i){
        if(A[i] == N+1){
            max_counter = current_max;
        }
        else{
            if( max_counter > result[A[i]-1] ) result[A[i]-1] = max_counter;
            result[A[i]-1] ++;
            if(result[A[i]-1] > current_max) current_max = result[A[i]-1]; 
        }
    }
    for(int j = 0 ; j < N ; ++j){
        result[j] = max( max_counter , result[j] );    
    }
    return result;
}