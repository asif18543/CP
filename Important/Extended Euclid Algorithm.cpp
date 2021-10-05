struct Triplet
{
int x,y,gcd;
};
Triplet extendedEuclid(int a, int b)
{
if(b == 0){
Triplet ans;
ans.gcd = a;
ans.x = 1;
ans.y = 0;
return ans;
}
Triplet smallAns = extendedEuclid(b, a%b);
Triplet ans;
ans.gcd = smallAns.gcd;
ans.x = smallAns.y;
ans.y = smallAns.x - (a/b)*smallAns.y;
  return ans;
}
