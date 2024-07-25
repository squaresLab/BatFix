int lcs ( int * * dp , int * arr1 , int n , int * arr2 , int m , int k ) {
  if ( k < 0 ) return - ( 10 * * 7 ) ;
  if ( n < 0 || m < 0 ) return 0 ;
  int ans = dp [ n ] [ m ] [ k ] ;
  if ( ans != - 1 ) return ans ;
  ans = max ( lcs ( dp , arr1 , n - 1 , arr2 , m , k ) , lcs ( dp , arr1 , n , arr2 , m - 1 , k ) ) ;
  if ( arr1 [ n - 1 ] == arr2 [ m - 1 ] ) ans = max ( ans , 1 + lcs ( dp , arr1 , n - 1 , arr2 , m - 1 , k ) ) ;
  ans = max ( ans , lcs ( dp , arr1 , n - 1 , arr2 , m - 1 , k - 1 ) ) ;
  return ans ;
}
