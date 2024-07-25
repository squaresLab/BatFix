public : int maxNumOfChocolates ( int arr [ ] , int n , int k ) {
  int um [ n ] , currRem , maxSum = 0 ;
  int i ;
  int sm [ n ] ;
  sm [ 0 ] = arr [ 0 ] ;
  for ( i = 1 ;
  i < n ;
  i ++ ) sm [ i ] = sm [ i - 1 ] + arr [ i ] ;
  for ( i = 0 ;
  i < n ;
  i ++ ) {
    currRem = sm [ i ] % k ;
    if ( ( ! currRem && maxSum < sm [ i ] ) || ( ! currRem && maxSum < sm [ i ] ) ) maxSum = sm [ i ] ;
    else if ( ( ! currRem ) || ( ! currRem && maxSum < sm [ i ] ) ) um [ currRem ] = i ;
    else if ( ( maxSum < ( sm [ i ] - sm [ um [ currRem ] ] ) ) || ( ! currRem && maxSum < sm [ i ] ) ) maxSum = sm [ i ] - sm [ um [ currRem ] ] ;
  }
  return maxSum / k ;
}
