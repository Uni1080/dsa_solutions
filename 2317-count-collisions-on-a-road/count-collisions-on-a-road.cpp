class Solution {
public:
    int countCollisions(string directions) {
        int n = directions.size();
        int i = 0;
        int j = directions.size() - 1;
        while(i<n && directions[i]=='L'){
            i++;
        }
        while(j>=i && directions[j]=='R'){
            j--;
        }
        int collisions = 0;
        for(int k = i ; k<=j ; k++){
            if(directions[k]!='S')
            collisions++;
        }
        return collisions;
    }
};