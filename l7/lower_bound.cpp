#include<bits/stdc++.h>

using namespace std;

int lower_bound_fake(vector<int> v, int key)
{
    int l,r,mid,ans;
    
    l = 0;
    r = v.size()-1;
    ans = r+1;
    
    while(l <= r)
    {
        mid = (l+r)/2;
        if(key <= v[mid])
        {
            ans = mid;
            r = mid-1;
        }
        else
            l = mid+1;
    }
    
    if(ans == v.size())
        return -1;
    
    return ans;
}

int upper_bound_fake(vector<int> v, int key)
{
    int l,r,mid,ans;
    
    l = 0;
    r = v.size()-1;
    ans = r+1;
    
    while(l <= r)
    {
        mid = (l+r)/2;
        if(key < v[mid])
        {
            ans = mid;
            r = mid-1;
        }
        else
            l = mid+1;
    }
    if(ans == v.size())
        return -1;
    
    return ans;
}

int main()
{
    int n,aux,key,q,posl,posu,posf;
    
    int a, b;

    vector<int> v;

    cin >> a >> b;
 
    for (int i = 0; i < a; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
 
    sort(v.begin(), v.end());

    while(b--)
    {
        scanf("%d",&key);

        posl = lower_bound(v.begin(),v.end(),key) - v.begin();
        posf = lower_bound_fake(v,key);
        
        printf("Lower bound: %d\nFake lower bound: %d\n\n",posl,posf);
        
        posu = upper_bound(v.begin(),v.end(),key) - v.begin();
        posf = upper_bound_fake(v,key);
        
        printf("Upper bound: %d\nFake upper bound: %d\n\n",posu,posf);
    }
    
    return 0;
}