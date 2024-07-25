void printPairs ( int arr [ ] , int n ) {
  Vector < int > v ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) for ( int j = i + 1 ;
  j < n ;
  j ++ ) if ( abs ( arr [ i ] ) == abs ( arr [ j ] ) ) v . push_back ( abs ( arr [ i ] ) ) ;
  if ( v . size ( ) == 0 ) return ;
  sort ( v . begin ( ) , v . end ( ) ) ;
  for ( int i = 0 ;
  i < v . size ( ) ;
  i ++ ) cout << - v [ i ] << " " << v [ i ] << endl ;
}
