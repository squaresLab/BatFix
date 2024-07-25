int findSmallestDifference ( int A [ ] , int B [ ] , int m , int n ) {
  sort ( A , A + m ) ;
  sort ( B , B + n ) ;
  int a = 0 , b = 0 ;
  int result = INT_MAX ;
  while ( a < m && b < n ) {
    if ( abs ( A [ a ] - B [ b ] ) < result ) {
      result = abs ( A [ a ] - B [ b ] ) ;
    }
    if ( A [ a ] < B [ b ] ) {
      a ++ ;
    }
    else {
      b ++ ;
    }
  }
  return result ;
}
