class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
       int n = asteroids.size();
       sort(asteroids.begin(),asteroids.end());
       int i = 0;
       long long m = mass;
       for(int i = 0 ; i< n ; i++){
        if(m<asteroids[i]){
            return false;
        }
        else{
            m = m + asteroids[i];
        }
       }
    return true;
    }
};