class Solution {
public:
    
    int maxHeightOfTriangle(int red, int blue) {
        //max b/w starting  with red top and blue top
        int h1=0;
        int r=red,b=blue;
        int level=1;
        while(true)
        {
            if(level%2==1)
            {
                if(r<level) break;
                r=r-level;
            }
            else
            {
                if(b<level) break;
                b=b-level;
            }
            h1++;
            level++;
        }
        r=red;
        b=blue;
        int h2=0;
        level=1;
        while(true)
        {
            if(level%2!=1)
            {
                if(r<level) break;
                r=r-level;
            }
            else
            {
                if(b<level) break;
                b=b-level;
            }
            h2++;
            level++;
        }
        return max(h1,h2);

        
    }
};