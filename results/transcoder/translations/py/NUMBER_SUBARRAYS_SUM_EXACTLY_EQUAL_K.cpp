int findSubarraySum ( int arr [ ] , int n , int Sum ) {
  std :: map < int , int > prevSum ;
  int res = 0 ;
  int currsum = 0 ;
  for ( int i = 0 ;
  i != n ;
  ++ i ) {
    currsum += arr [ i ] ;
    if ( currsum == Sum ) res ++ ;
    if ( ( currsum - Sum ) < prevSum . size ( ) ) res += prevSum [ currsum - Sum ] ;
    prevSum [ currsum ] ++ ;
  }
  return res ;
}
