#include <bits/stdc++.h>
#define in(n, arr) for (int i = 0; i < n; ++i) cin >> arr[i]
#define out(n, arr) for (int i = 0; i < n; ++i) cout << arr[i] << " "
 
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		long long int* A = new long long int[n];
		long long int* B = new long long int[n];
 
		map<long long int, long long int> mp1;
		map<long long int, long long int> mp2;
		unordered_set<long long int> s;
 
		vector<long long int> v1;
 
		long long int mini = INT_MAX;
 
		for(int  i =0; i<n; i++)
		{
			cin >> A[i];
            mini = min(A[i],mini);
 
			mp1[A[i]]++;
			s.insert(A[i]);
		}
		for(int  i = 0; i<n;i++)
		{
			cin >> B[i];
			mini = min(B[i],mini);
			mp2[B[i]]++;
			s.insert(B[i]);
		}
		int cas = 0;
 
        long long int diff = 0;
		for(auto i : s)
		{
 
			long long int aa = 0;
			long long int bb = 0;
 
			if(mp1.find(i)!=mp1.end())
				aa = mp1[i];
			if(mp2.find(i)!=mp2.end())
				bb = mp2[i];
			if((aa+bb)%2!=0)
				cas = 1;
			diff = abs(aa-bb)/2;
			for(int  j = 0; j<diff; j++)
			{
		    v1.push_back(i);
 
		    }
 
 
 
		}
		long long int sum  =0;
 
		if(cas!=1)
		{
		sort(v1.begin(),v1.end());
 
 
 
 
		if(v1.size() > 0)
		{
		for(int  i = 0; i<v1.size()/2; i++)
		{
 
 
			sum += min(2*mini,v1[i]);
 
		} 
	    }
 
	}
		if(cas == 1)
			cout << "-1" << endl;
		else
		cout << sum << endl;
 
	}	
 
 
return 0;
}