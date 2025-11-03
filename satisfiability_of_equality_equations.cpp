class Solution {
public:

    char find(int par[],int x){

        if(par[x]==x) return x;
        return par[x] = find(par,par[x]);

    }

    void unionSet(int par[],int x,int y){

        int a = find(par,x);
        int b = find(par,y);

        par[a] = par[b];

    }

    bool equationsPossible(vector<string>& equations) {

        int par[26];
        for(int i = 0;i<26;i++) par[i] = i;

        for(int i = 0;i<equations.size();i++){
            if(equations[i][1]==equations[i][2]){
                unionSet(par,equations[i][0]-'a',equations[i][3]-'a');
            }
        }

        
        for(int i = 0;i<equations.size();i++){
            if(equations[i][1]!=equations[i][2]){
                int a = find(par,equations[i][0]-'a');
                int b = find(par,equations[i][3]-'a');
                if(a==b) return false;
            }
        }

        return true;

    }
};