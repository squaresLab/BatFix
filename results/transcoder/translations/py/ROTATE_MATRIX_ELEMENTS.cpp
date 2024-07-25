void rotateMatrix ( vector < vector < int >> & mat ) {
  if ( mat . size ( ) == 0 ) return ;
  int top = 0 ;
  int bottom = mat . size ( ) - 1 ;
  int left = 0 ;
  int right = mat [ 0 ] . size ( ) - 1 ;
  while ( left < right && top < bottom ) {
    int prev = mat [ top + 1 ] [ left ] ;
    for ( int i = left ;
    i <= right ;
    i ++ ) {
      int curr = mat [ top ] [ i ] ;
      mat [ top ] [ i ] = prev ;
      prev = curr ;
    }
    top ++ ;
    for ( int i = top ;
    i <= bottom ;
    i ++ ) {
      int curr = mat [ i ] [ right ] ;
      mat [ i ] [ right ] = prev ;
      prev = curr ;
    }
    right -- ;
    for ( int i = right ;
    i >= left ;
    i -- ) {
      int curr = mat [ bottom ] [ i ] ;
      mat [ bottom ] [ i ] = prev ;
      prev = curr ;
    }
    bottom -- ;
    for ( int i = bottom ;
    i >= top ;
    i -- ) {
      int curr = mat [ i ] [ left ] ;
      mat [ i ] [ left ] = prev ;
      prev = curr ;
    }
    left ++ ;
  }
}
