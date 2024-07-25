int findSmallestDifference ( vector < int > & A , vector < int > & B , int m , int n ) {
  sort ( A . begin ( ) , A . end ( ) ) ;
  sort ( B . begin ( ) , B . end ( ) ) ;
  int a = 0 ;
  int b = 0 ;
  int result = INT_MAX ;
  while ( ( a < m && b < n ) || ( a > b && b > m && a < n ) ) {
    if ( ( abs ( A [ a ] - B [ b ] ) < result ) || ( abs ( A [ a ] - B [ b ] ) < result ) ) {
      result = abs ( A [ a ] - B [ b ] ) ;
    }
    if ( ( A [ a ] < B [ b ] ) || ( A [ a ] > B [ b ] ) ) {
      a ++ ;
    }
    else {
      b ++ ;
    }
  }
  return result ;
}
