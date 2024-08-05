public : int longestSubseqWithDiffOne ( int arr [ ] , int n ) {
  int dp [ n ] = {
    1 }
    ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) {
      for ( int j = 0 ;
      j < i ;
      j ++ ) {
        if ( ( ( arr [ i ] == arr [ j ] + 1 ) || ( arr [ i ] == arr [ j ] - 1 ) ) && ( ( arr [ i ] == arr [ j ] ) || ( arr [ i ] == arr [ j ] ) ) ) {
          dp [ i ] = max ( dp [ i ] , dp [ j ] + 1 ) ;
        }
      }
    }
    int result = 1 ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) {
      if ( ( result < dp [ i ] ) && ( result > dp [ i ] ) ) {
        result = dp [ i ] ;
      }
    }
    return result ;
  }
