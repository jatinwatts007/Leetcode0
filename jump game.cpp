int minJumps(vector<int> &nums) 
{
    int count=0;
        int i=nums.size()-1;
        while(i>0)
        {
           // int max=-1;
            int val=-1;
            int flag=1;
            for(int j=i-1;j>=0;j--)
            {
                
                if(nums[j]>=flag)
                {
                    val=j;
                }
                flag++;
            }
            count++;
            i=val;
        }
        return count;
    // Write your code here.
}
