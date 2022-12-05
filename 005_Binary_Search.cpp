
class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        
        // code here
        int s=0;
        int e=n;
        while(s<=e){
            int mid=(s+e)/2;
            if(arr[mid]==k){
                return mid;
            }
            else if(arr[mid]>k){
                e=mid-1;
            }
            else {
                s=mid+1;
            }
        }
        return -1;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends
