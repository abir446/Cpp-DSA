int n=arr.size();
int s=0,e=n-1;
int i,j,absdiff=INT_MAX;

while(s<e)
{
  int cs=arr[s]+arr[e];
  if (abs(cs-x)<absdiff)
  {
    i=s;
    j=e;
    absdiff=abs(cs-x);
  }
  if(cs>x)
      e--;
  else
      s++;
}
return {arr[i],arr[j]};
