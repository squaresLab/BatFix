int findLongestRepeatingSubSeq ( char X [ ] , int m , int n ) {
  if ( dp [ m ] [ n ] != - 1 ) return dp [ m ] [ n ] ;
  if ( m == 0 || n == 0 ) return dp [ m ] [ n ] = 0 ;
  if ( X [ m - 1 ] == X [ n - 1 ] && m != n ) return dp [ m ] [ n ] = findLongestRepeatingSubSeq ( X , m - 1 , n - 1 ) + 1 ;
  return dp [ m ] [ n ] = max ( findLongestRepeatingSubSeq ( X , m , n - 1 ) , findLongestRepeatingSubSeq ( X , m - 1 , n ) ) ;
}
