
function::   



int s=0,e=A.size()-1;
int ans=-1;
while(s<=e)
{
  int mid=(s+e)/2;
  if (A[mid]<=Val)
  {
    ans=A[mid];
    s=mid+1;
  }
  else
  {
    e=mid-1;
  }
}
