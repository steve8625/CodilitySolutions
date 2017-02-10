
/* actually using Pigeonhole Principle
   if there are N intergers, for a N+1 length occurence array, 
   there should be at least one number that is missing.
*/

int solution(vector<int> &A) {
    int N = A.size();
    vector<int> occur(N,0);
    for(int i = 0 ; i < N ; ++i){
        if( A[i] > 0 && A[i] < N+1 ) occur[A[i]-1]++;
    }
    for(int i = 0 ; i < N+1 ; ++i){
        if( occur[i] == 0 ) return i+1;
    }
}