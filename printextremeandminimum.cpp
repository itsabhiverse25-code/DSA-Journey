class Solution { 
public: 
    vector<int>printExtremeElementsAlternately(vector<int>& arr) { 
        int n=arr.size();
        vector<int>ans;
        sort(arr.begin(),arr.end());
       int i=0;
       int end=n-1;
       while(i<=end){
         ans.push_back(arr[i]);
         i++;
         if(i<=end){
            ans.push_back(arr[end]);
            end--;
         }
       }
       return ans;
}
};
