#include<bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
     
        int r=matrix.size();
        int c=matrix[0].size();
        vector <int> elements;
       r=r-1;
       c=c-1;
        int i=0, j=0;
        while(i<=r && j<=c){
            for(int k=j ; k<=c ; k++){
                elements.push_back(matrix[i][k]);
            }
            i++;
            for(int k=i ; k<=r ; k++){
                elements.push_back(matrix[k][c]);
            }
            c--;
            if(i<=r)
            for(int k=c ; k>=j ; k--){
               elements .push_back(matrix[r][k]);
            }
            r--;
            if(j<=c)
            for(int k=r; k>=i ; k--){
                elements.push_back(matrix[k][j]);
            }
            j++;
            
        }
         
        
        return elements;
    }