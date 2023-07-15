
class SegmentTree{
public:

 vector<int> seg;
 
 SegmentTree(int n)
 {
 	seg.resize(4*n);
 }
// this is the code to build the segment tree...
// o(logn)
void build(int idx, int low , int high , int*arr)
{
 // to build the segment tree
 if(low==high)
 {
 	seg[idx] = arr[low];
 	return;
 }	
 
 int mid = (low + high)/2;
 build(2*idx + 1, low,mid,arr);
 build(2*idx + 2 , mid + 1, high, arr);
 
 seg[idx] = min(seg[2*idx + 1],seg[2*idx + 2]);
	
}


// o(logn)
int query(int idx , int low , int high, int l , int r, int*arr)
{
  // remember this....
  // for complete overlap 
  // base case
  if( low>= l and high<=r)
  {
  	 return seg[idx];
  }   
  
  // for no overlap
  if(low>r || high<l)
  {
  	return INT_MAX;
  }
  
  int mid = (low + high)/2;
  
  int left = query(2*idx + 1, low, mid , l, r,arr);
  int right = query(2*idx + 2, mid + 1, high , l, r , arr);
  
  return min(left, right);
	
}

void update(int idx, int low ,int high , int i , int val , int*arr)
{
if(low==high)
{
	seg[idx] = val;
	
	return;
}
	
int mid = (low + high)>>1;

if(i<=mid)
update(2*idx + 1, low ,mid , i ,val, arr);

else
update(2*idx + 2,mid + 1, high , i ,val ,arr );

seg[idx] = min(seg[2*idx + 1], seg[2*idx + 2]);
	
}

};
