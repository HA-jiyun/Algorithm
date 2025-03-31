int solution(vector<int> &A) {
    // 0 <= P < Q < R
    // 하나의 값이 나머지 두 값의 합보다 작아야 함
    int maxSum = 0;

    for(int p=0; p<A.size(); p++){
        for(int q=p+1; q<A.size(); q++){
            for(int r=q+1; r<A.size(); r++){
                if(A[p] + A[q] > A[r]){
                   if(A[q] + A[r] > A[p]){
                       if(A[p] + A[r] > A[q]){
                           if (maxSum < A[p]+A[q]+A[r]){
                               maxSum = A[p]+A[q]+A[r];
                           }
                       }
                   }
                }
            }
        }
    }
    
    if (maxSum > 0)
        return maxSum;
    else
        return -1;
}
