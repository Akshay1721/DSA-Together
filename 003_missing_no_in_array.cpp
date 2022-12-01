class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int missingno,sum=0;
        int total = (n*(n+1))/2;
        for(int i=0; i<n-1; i++){
            sum = sum + array[i];
        }
        missingno = total-sum;
        return missingno ;
        
    }
};
//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends
