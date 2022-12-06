vector<int> find(int arr[], int n , int x )
    
{
    int a=-1,b=-1;
    for(int i=0;i<n;i++)
    {
        if(x!=arr[i])
            continue;
        if(a==-1)
        {
            a=i;
        }
        b=i;
        
     }
     if(a!=-1)
     {
         return {a,b};
     }
     else
        return {-1,-1};
    
}


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
