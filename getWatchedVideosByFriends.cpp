class Solution {
public:
    vector<string> watchedVideosByFriends(vector<vector<string>>& watchedVideos, vector<vector<int>>& friends, int id, int level) {
        int n = friends.size();
        vector<vector<int>> a(n,vector<int> (n,0));
     
        for(int i=0; i<n; i++)
        {
            for(int j=0; j< friends[i].size(); j++)
            {
                a[i][friends[i][j]] = 1;
            }
        }
        queue<int> q;
        q.push(id);
        int k=0;
        vector<int> f;
        vector<int> vis(n,0);
        vis[id] = 1;
        vector<int> lev(n,0);
        lev[id] = 0;
        while(!q.empty())
        {
            int cur = q.front();
            q.pop();
            k++;
            for(int i=0; i<n ;i++)
            {
                if(a[cur][i] && !vis[i])
                {
                    q.push(i);
                    lev[i] = lev[cur]+1;
            
                    vis[i]=1;
 
                    if(lev[i] == level)
                        f.push_back(i);
                }
                
            }

        }

        
        map<string, int> m;
        for(int i=0; i<f.size(); i++)
        {
            vector<string> s = watchedVideos[f[i]];
            for(int j=0; j<s.size(); j++)
            {
                if(m.count(s[j]))
                    m[s[j]]+=1;
                else
                    m[s[j]] = 1;
                    
            }
        }

        vector<pair<string,int>> sorted = sorting(m);
        vector<string> ans;
        for(const auto &x : sorted)
        {
            ans.push_back(x.first);
        }
        
        //BUBBLE SORT GIVES TIME LIMIT EXCEEDED
        
        
        // vector<int> nums;
        // for(const auto &x : m)
        // {
        //     //cout<<x.first<<" "<<x.second<<endl;
        //     ans.push_back(x.first);
        //     nums.push_back(x.second);
        // }
        // for(int i=0; i<nums.size()-1; i++)
        // {
        //     for(int j=0; j<nums.size()-i-1; j++)
        //     {
        //         if(nums[j]>nums[j+1])
        //         {
        //             int t=nums[j];
        //             nums[j] = nums[j+1];
        //             nums[j+1] = t;
        //             string temp=ans[j];
        //             ans[j]= ans[j+1];
        //             ans[j+1] = temp;
        //         }
        //         if(nums[j]==nums[j+1])
        //         {
        //             if(ans[j].compare(ans[j+1])>0)
        //             {
        //                 string temp1 = ans[j];
        //                 ans[j] = ans[j+1];
        //                 ans[j+1] = temp1;
        //             }
        //         }
        //     }
        // }
        
        
    
        
        return ans;
    }
    static bool cmp(pair<string, int>& a, pair<string, int>& b) 
    { 
        if (a.second == b.second)
        {
            if(a.first.compare(b.first)>0)
                return false;
            else
                return true;
        }

        return a.second < b.second; 
    } 
    
    vector<pair<string,int>> sorting(map<string,int> &m)
    {
        vector<pair<string, int> > A; 

        for (auto& it : m) { 
            A.push_back(it); 
        } 

        sort(A.begin(), A.end(), cmp ); 

        
        return A;
    }

};
