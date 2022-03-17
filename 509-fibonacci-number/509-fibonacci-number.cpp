class Solution {
public:
    int fib_helper(int n,int *ans)
{
  if(n<=1)
  return n;
  //check if output already exists
  if(ans[n] != -1)
  {
  return ans[n];
}
int a = fib_helper(n-1,ans);
int b = fib_helper(n-2,ans);
ans[n] = a+b; //save for future use
return ans[n]; //return the final output
}
int fib(int n)
{
  int *ans = new int[n+1];
  for(int i = 0;i<=n;i++)
  {
    ans[i] = -1;
  }
  return fib_helper(n,ans);
}
};