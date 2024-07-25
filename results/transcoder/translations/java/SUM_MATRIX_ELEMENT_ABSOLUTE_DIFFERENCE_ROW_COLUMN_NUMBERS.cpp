int findSum ( int n ) {
  vector < vector < int >> arr ( n , vector < int > ( n , 0 ) ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) for ( int j = 0 ;
  j < n ;
  j ++ ) arr [ i ] [ j ] = abs ( i - j ) ;
  int sum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) for ( int j = 0 ;
  j < n ;
  j ++ ) sum += arr [ i ] [ j ] ;
  return sum ;
}
