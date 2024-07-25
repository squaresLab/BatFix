int PowerOFPINnfactorial ( int n , int p ) {
  int ans = 0 ;
  ;
  int temp = p ;
  ;
  while ( ( temp <= n ) && ( temp > 0 ) ) {
    ans += n / temp ;
    temp = temp * p ;
  }
  ;
  return ans ;
}
