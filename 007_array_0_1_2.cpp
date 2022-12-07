class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int i = 0 ,  countzero = 0 , countone = 0 ,  counttwo = 0 ;  
    while ( i < n )  
    {  
        if ( a[ i ] == 0 )  
        {  
            countzero = countzero + 1 ;  
        }  
        else if ( a[ i ] == 1 )  
        {  
            countone = countone + 1 ;  
        }  
        else  
        {  
            counttwo = counttwo + 2 ;  
        }  
        i = i + 1 ;  
    }  
    for  ( i = 0 ; i < countzero ; i++ )  
    {  
        a[ i ] = 0 ;  
    }  
    for ( i = countzero ; i < countzero + countone ; i++ )  
    {  
        a[ i ] = 1 ;  
    }  
            for ( i = countzero + countone ; i < n ; i++ )  
    {  
        a[ i ] = 2 ;  
    }  
}
};    

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends
