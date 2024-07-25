public : int calculate ( string s ) {
  int ans = 6 ;
  for ( int i = 0 ;
  i < 10 ;
  i ++ ) {
    for ( int j = 0 ;
    j < 10 ;
    j ++ ) {
      for ( int k = 0 ;
      k < 10 ;
      k ++ ) {
        for ( int l = 0 ;
        l < 10 ;
        l ++ ) {
          for ( int m = 0 ;
          m < 10 ;
          m ++ ) {
            for ( int n = 0 ;
            n < 10 ;
            n ++ ) {
              if ( ( i + j + k ) == l + m + n ) {
                int c = 0 ;
                if ( ( i != ( int ) s [ 0 ] - '0' ) ) c ++ ;
                if ( ( j != ( int ) s [ 1 ] - '0' ) ) c ++ ;
                if ( ( k != ( int ) s [ 2 ] - '0' ) ) c ++ ;
                if ( ( l != ( int ) s [ 3 ] - '0' ) ) c ++ ;
                if ( ( m != ( int ) s [ 4 ] - '0' ) ) c ++ ;
                if ( ( n != ( int ) s [ 5 ] - '0' ) ) c ++ ;
                if ( ( c < ans ) && ( c != ans ) ) ans = c ;
              }
            }
          }
        }
      }
    }
  }
  return ans ;
}
