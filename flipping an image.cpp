class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++)
        {
            int x=0;
            int y=image[i].size()-1;
            {
                while(x<y)
                {
                    swap(image[i][x],image[i][y]);
                    if(image[i][x]==0)image[i][x]=1;
                    else{
                        image[i][x]=0;
                    }
                    if(image[i][y]==0)image[i][y]=1;
                    else{
                        image[i][y]=0;
                    }
                    x++;
                    y--;
                }
                if(x==y)
                {
                  if(image[i][y]==0)image[i][y]=1;
                    else{
                        image[i][y]=0;  }
                }
            }
            
        }
        return image;
    }
};
