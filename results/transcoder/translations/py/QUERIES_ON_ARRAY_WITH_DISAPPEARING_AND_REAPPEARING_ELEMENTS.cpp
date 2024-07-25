void PerformQueries ( int a [ ] , int vec [ ] [ 2 ] ) {
  int ans [ 2 ] ;
  ;
  int n = a [ 0 ] . size ( ) - 1 ;
  ;
  int q = vec [ 0 ] . size ( ) ;
  ;
  for ( int i = 0 ;
  i < q ;
  i ++ ) {
    int t = vec [ i ] [ 0 ] ;
    int m = vec [ i ] [ 1 ] ;
    if ( ( m > n ) || ( m < 0 ) ) {
      ans [ 0 ] = - 1 ;
      continue ;
    }
    int turn = t / n ;
    int rem = t % n ;
    if ( ( rem == 0 && andturn % 2 == 1 ) || ( rem == 0 && andturn % 2 == 0 ) ) {
      ans [ 1 ] = a [ m ] ;
      continue ;
    }
    if ( ( turn % 2 == 0 ) || ( turn == 1 && andturn % 2 == 1 ) ) {
      ans [ 0 ] = a [ m ] ;
      continue ;
    }
    if ( ( turn % 2 == 0 ) || ( turn == 1 && andturn % 2 == 0 ) ) {
      int cursize = n - rem ;
      if ( ( cursize < m ) || ( cursize < m + 1 ) ) {
        ans [ 1 ] = - 1 ;
        continue ;
      }
      ans [ 1 ] = a [ m + rem ] ;
    }
    else {
      int cursize = rem ;
      if ( ( cursize < m ) || ( cursize < m + 1 ) ) {
        ans [ 0 ] = - 1 ;
        continue ;
      }
      ans [ 0 ] = a [ m ] ;
    }
  }
  foriinans : cout << i << endl ;
}
