#include<bits/stdc++.h>
using namespace std;

vector<pair<char,char>> cfg;   
map<char,char> visited;        
map<char,int> value;          

int main()
{ 
    cout<<"Enter number of Productions : ";
    int n;
    cin>>n;

    while(n--)
    { 
        char temp1;
        char temp2;
        cout<<"Enter Left side : "<<endl;
        cin>>temp1;
        cout<<"Enter Right side : "<<endl;
        cin>>temp2;
        cfg.push_back({temp1,temp2});  
    }


    for(auto &it : cfg)
    {
        if(it.second >= 'A' && it.second <= 'Z') 
        {
            value[it.second] = 1 + value[it.first];
            if(value[it.second] == 1)
            {
                visited[it.second] = it.first; 
            }
            else 
            {
                visited[it.second] = visited[it.first];  
            }
        }
        else if (value[it.first] > 0) 
        {
            it.first = visited[it.first];
        }
    }

    
    for(auto it : cfg)
    {
        if(value[it.first] == 0 && (it.second >= 'a' && it.second <= 'z'))
        {
            cout<<it.first<<" "<<it.second<<endl; 
        }
    }

    return 0;
}
