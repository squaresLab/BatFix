int calculate ( int A , int B , int C , int M ) {
  int res = pow ( B , C , M - 1 ) ;
  int ans = pow ( A , res , M ) ;
  return ans ;
}
