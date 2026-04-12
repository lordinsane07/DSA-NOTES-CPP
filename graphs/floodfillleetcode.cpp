#include<iostream>
#incldue<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(color==image[sr][sc]) return image;
        dfs(image,sr,sc,image[sr][sc],color);
        return image;
    }
    void dfs(vector<vector<int>> &image,int currrow,int currcol,int initialcolor,int newcolor){
        int n=image.size();//total rows
        int m=image[0].size();//totalcols
        if(currrow<0 || currcol<0 || currrow>=n || currcol>=m){
            return;//you are outside the grip
        }
        ///if the cell u landed is not of initial color
        if(image[currrow][currcol]!=initialcolor) return;
        image[currrow][currcol]=newcolor;
        dfs(image,currrow+1,currcol,initialcolor,newcolor);//down
        dfs(image,currrow,currcol-1,initialcolor,newcolor);//left
        dfs(image,currrow-1,currcol,initialcolor,newcolor);//up
        dfs(image,currrow,currcol+1,initialcolor,newcolor);//right
        
    }
};
int main(){

}