int maxSquare(int n, int m, vector<vector<int>> mat){
        int dp[n][m];
        for(int i=0; i<n; i++){
            dp[i][0] = mat[i][0];
        }
        for(int j=0; j<m; j++){
            dp[0][j] = mat[0][j];
        }
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(mat[i][j] == 1){
                dp[i][j] = min({dp[i-1][j-1], dp[i-1][j], dp[i][j-1]})+1;
            }
            else{
                dp[i][j] = 0;
            }
        }
    }
    
    int maxx = dp[0][0];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(maxx<dp[i][j]){
                maxx = dp[i][j];
            }
        }
    }
    
    return maxx;
}