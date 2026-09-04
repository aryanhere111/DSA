class Solution {
public:
    int search(vector<int>& A, int tar) {
      int st = 0;
      int end = A.size()-1;
      while(st<=end){
        int mid = st + (end-st)/2;
        if(A[mid] == tar){
            return mid;
        }
        if(A[st]<= A[mid]){ //right sorted
            if(A[st]<= tar && tar<=A[mid]){
                end = mid-1;
            }
            else{
                st =  mid+1;

            }  
      }
      else{ //left sorted
        if(A[mid]<= tar && A[end]>=tar){
            st = mid+1;

        }
        else{
            end = mid-1;
        }

      }
      }
      return -1;

    }
};