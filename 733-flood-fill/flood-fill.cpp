class Solution {
public:
    void dfs(vector<vector<int>>&image, int i, int j,int orignalcolor,int color) {
        if(i < 0 || i >=image.size())
        return;
        if(j < 0 || j >= image[0].size())
        return;
        if(image[i][j]!=orignalcolor)
        return;

        image[i][j]=color;
        dfs(image,i+1,j,orignalcolor,color);
        dfs(image,i-1,j,orignalcolor,color);
        dfs(image,i,j+1,orignalcolor,color);
        dfs(image,i,j-1,orignalcolor,color);


    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {

        int orignalcolor = image[sr][sc];
        if (orignalcolor!= color) {
            dfs(image, sr, sc, orignalcolor, color);
        }
        return image;
    }
};