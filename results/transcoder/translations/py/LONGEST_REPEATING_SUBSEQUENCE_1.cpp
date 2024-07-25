int findLongestRepeatingSubSeq ( int X [ ] , int m , int n ) {
  if ( ( dp [ m ] [ n ] != - 1 ) && ( dp [ m ] [ n ] != - 1 ) ) return dp [ m ] [ n ] ;
  if ( ( m == 0 || n == 0 ) && ( m != n ) ) {
    dp [ m ] [ n ] = 0 ;
    return dp [ m ] [ n ] ;
  }
  if ( ( X [ m - 1 ] == X [ n - 1 ] && m != n ) || ( X [ m - 1 ] == X [ n - 1 ] && n != m ) ) {
    dp [ m ] [ n ] = findLongestRepeatingSubSeq ( X , m - 1 , n - 1 ) + 1 ;
    return dp [ m ] [ n ] ;
  }
  dp [ m ] [ n ] = max ( findLongestRepeatingSubSeq ( X , m , n - 1 ) , findLongestRepeatingSubSeq ( X , m - 1 , n ) ) ;
  return dp [ m ] [ n ] ;
}
