int solve ( int i , int par , int * a , int n , int k , int current_ans ) {
  if ( ( par > k ) || ( par == k && i == n - 1 ) ) return 0 ;
  static int ans = 0 ;
  if ( ( par == k ) || ( par == n - 1 ) ) {
    ans = min ( ans , current_ans ) ;
    return 0 ;
  }
  for ( int j = i + 1 ;
  j < n ;
  j ++ ) solve ( j , par + 1 , a , n , k , current_ans + ( a [ j ] - a [ i + 1 ] ) * ( a [ j ] - a [ i + 1 ] ) ) ;
  return ans ;
}
