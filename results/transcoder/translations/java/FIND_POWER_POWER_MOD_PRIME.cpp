int Calculate ( int A , int B , int C , int M ) {
  int res , ans ;
  res = power ( B , C , M - 1 ) ;
  ans = power ( A , res , M ) ;
  return ans ;
}
