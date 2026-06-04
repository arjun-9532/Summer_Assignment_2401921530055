#include <bits/stdc++.h>
using namespace std;
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {

        int rows = mat.size();
        int cols = mat[0].size();

        if(rows * cols != r * c)
            return mat;

        vector<vector<int>> new_mat(r, vector<int>(c));

        int nr = 0;
        int nc = 0;

        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {

                new_mat[nr][nc] = mat[i][j];

                nc++;

                if(nc == c) {
                    nc = 0;
                    nr++;
                }
            }
        }

        return new_mat;
    }
