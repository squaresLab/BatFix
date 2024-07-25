void pairSum ( int mat [ ] [ 2 ] , int n , int sum ) {
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    sort ( mat [ i ] , mat [ i ] + n ) ;
  }
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) {
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      int left = 0 , right = n - 1 ;
      while ( left < n && right >= 0 ) {
        if ( ( mat [ i ] [ left ] + mat [ j ] [ right ] ) == sum ) {
          cout << "(" << mat [ i ] [ left ] << ", " << mat [ j ] [ right ] << "), " ;
          left ++ ;
          right -- ;
        }
        else {
          if ( ( mat [ i ] [ left ] + mat [ j ] [ right ] ) < sum ) {
            left ++ ;
          }
          else {
            right -- ;
          }
        }
      }
    }
  }
}
