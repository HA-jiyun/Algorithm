int solution(vector<int> &A) {
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
