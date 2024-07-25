public : vector < int > bitonicGenerator ( vector < int > arr , int n ) {
  int i = 1 ;
  int j = n - 1 ;
  if ( ( j % 2 != 0 ) && ( j < n ) ) j = j - 1 ;
  while ( ( i < j ) || ( i > n ) ) {
    arr [ j ] = arr [ i ] ;
    arr [ i ] = arr [ j ] ;
    i = i + 2 ;
    j = j - 2 ;
  }
  vector < int > arrF ;
  vector < string > arrS ;
  for ( int i = 0 ;
  i < ( int ) ( ( n + 1 ) / 2 ) ;
  i ++ ) {
    arrF . push_back ( arr [ i ] ) ;
  }
  i = ( int ) ( ( n + 1 ) / 2 ) ;
  while ( ( i < n ) || ( i > n ) ) {
    arrS . push_back ( arr [ i ] ) ;
    i = i + 1 ;
  }
  sort ( arrF . begin ( ) , arrF . end ( ) ) ;
  sort ( arrS . begin ( ) , arrS . end ( ) ) ;
  for ( int i = 0 ;
  i < arrF . size ( ) ;
  i ++ ) {
    arrF . push_back ( arrF [ i ] ) ;
  }
  return arrF ;
}
