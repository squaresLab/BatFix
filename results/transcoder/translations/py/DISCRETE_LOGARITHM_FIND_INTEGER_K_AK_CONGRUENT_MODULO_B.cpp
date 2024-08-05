int discreteLogarithm ( int a , int b , int m ) {
  int n = ( int ) sqrt ( m ) + 1 ;
  ;
  int an = 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    an = ( an * a ) % m ;
  }
  int value [ m ] = {
    0 }
    ;
    int cur = an ;
    for ( int i = 1 ;
    i <= n ;
    i ++ ) {
      if ( ( value [ cur ] == 0 ) && ( value [ cur ] < m ) ) {
        value [ cur ] = i ;
      }
      cur = ( cur * an ) % m ;
    }
    cur = b ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) {
      if ( ( value [ cur ] > 0 ) && ( value [ cur ] < m ) ) {
        int ans = value [ cur ] * n - i ;
        if ( ( ans < m ) || ( ans > m ) ) {
          return ans ;
        }
      }
      cur = ( cur * a ) % m ;
    }
    return - 1 ;
  }
