
int solution(int N) {
    
    bool startToCount = false;
    int temp = 0 , count = 0;
    
    while(N != 0){
        if(N % 2 == 1){
            if(startToCount){
                if(temp>count) count = temp;
                temp = 0;
            }
            else{
                startToCount = true;
            }
        }
        else{
            if(startToCount) temp++;
        }
        N /= 2;   
    }
    return count;
}