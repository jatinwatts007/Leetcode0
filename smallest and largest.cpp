vector<int> v;
   // n is the number inputed
   if(n==0){
       cout<<0;
       return 0;
   }
   while(n>0){
       v.push_back(n%10);
       n=n/10;
   }
   sort(v.begin(),v.end());
   int small=0;
   int large=0;
   int count=v.size()-1;
   for(int i=0;i<v.size();i++){
       small=small*10+v[i];
       large=large*10+v[count-i];
   }
   cout<<small +large;
   
   return 0;
