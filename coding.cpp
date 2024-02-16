#include<iostream>
#include<vector>
#include<map>
using namespace std;

int32_t main()
{
    int n;
    
    cout<<"enter the number of points :"<<endl;
    cin>>n;

    vector<int> key;
    cout<<"enter the key's values :"<<endl;
    int x,y;
    cin>>x>>y;
    key.push_back(x);
    key.push_back(y);

    cout<<"enter the point's values :"<<endl;
    vector<vector<int> > points;
    for(int i=0; i<n; i++)
    {
        cout<<i+1<<"th point :";
        int x,y;
        cin>>x>>y;
        vector<int> point;
        point.push_back(x);
        point.push_back(y);
        points.push_back(point);
        cout<<endl;
    }

    map<int,vector<int> > mp;
    for(int i=0; i<n; i++)
    {
        int dist1, dist2, dist;

        if(key[0]<points[i][0])
        {
            dist1 = points[i][0] - key[0];
        }
        else
        {
            dist1 = key[0] - points[i][0];
        }

        if(key[1]<points[i][1])
        {
            dist2 = points[i][1] - key[1];
        }
        else
        {
            dist2 = key[1] - points[i][1];
        }

        dist = dist1+dist2;
        mp[dist] = points[i];
    }

    for(auto it = mp.begin(); it != mp.end(); ++it)
    {
        cout << it->first << ": {" << it->second[0] << ", " << it->second[1] <<"}"<< endl;
    }

    return 0;
}