public : string printShortestSuperSeq ( vector < int > x , vector < int > y ) {
  int m = x . size ( ) ;
  int n = y . size ( ) ;
  vector < vector < int >> dp ( n + 1 , vector < int > ( n + 1 , 0 ) ) ;
  for ( int i = 0 ;
  i < m + 1 ;
  i ++ ) {
    for ( int j = 0 ;
    j < n + 1 ;
    j ++ ) {
      if ( i == 0 ) dp [ i ] [ j ] = j ;
      else if ( j == 0 ) dp [ i ] [ j ] = i ;
      else if ( x [ i - 1 ] == y [ j - 1 ] ) dp [ i ] [ j ] = 1 + dp [ i - 1 ] [ j - 1 ] ;
      else dp [ i ] [ j ] = 1 + min ( dp [ i - 1 ] [ j ] , dp [ i ] [ j - 1 ] ) ;
    }
  }
  int index = dp [ m ] [ n ] ;
  string string ;
  int i = m ;
  int j = n ;
  while ( i > 0 && j > 0 ) {
    if ( x [ i - 1 ] == y [ j - 1 ] ) {
      string += x [ i - 1 ] ;
      i -- ;
      j -- ;
      index -- ;
    }
    else if ( dp [ i - 1 ] [ j ] > dp [ i ] [ j - 1 ] ) {
      string += y [ j - 1 ] ;
      j -- ;
      index -- ;
    }
    else {
      string += x [ i - 1 ] ;
      i -- ;
      index -- ;
    }
  }
  while ( i > 0 ) {
    string += x [ i - 1 ] ;
    i -- ;
    index -- ;
  }
  while ( j > 0 ) {
    string += y [ j - 1 ] ;
    j -- ;
    index -- ;
  }
  string = string . substr ( 0 , string . size ( ) - 1 ) ;
  string . reverse ( ) ;
  return string ;
}
