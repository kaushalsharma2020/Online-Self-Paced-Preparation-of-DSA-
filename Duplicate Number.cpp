class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int n=arr.size();
        int i;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                return arr[i];
            }
        }
        return arr[i];
    }
};
