//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int new_arr[n];
        int count = 0;
        
        for(int i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                new_arr[count] = a[i];
                count++; 
            }
               
        }
        
        for(int i=0; i<n; i++)
        {
            if(a[i]==1)
            {
                new_arr[count] = a[i];
                count++;
            }
                
        }
        
        for(int i=0; i<n; i++)
        {
            if(a[i]==2)
            {
                new_arr[count] = a[i];
                count++; 
            }
                
        }
        
        for(int i=0; i<n; i++)
        {
            a[i] = new_arr[i];
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