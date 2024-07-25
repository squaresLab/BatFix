void printMaxSubSquare ( vector < vector < int >> & M ) {
  int R = M . size ( ) ;
  int C = M [ 0 ] . size ( ) ;
  vector < vector < int >> S ( C , vector < int > ( R ) ) ;
  for ( int i = 1 ;
  i < R ;
  i ++ ) for ( int j = 1 ;
  j < C ;
  j ++ ) if ( ( M [ i ] [ j ] == 1 ) || ( M [ i ] [ j ] == 0 ) ) S [ i ] [ j ] = min ( S [ i ] [ j - 1 ] , S [ i - 1 ] [ j ] , S [ i - 1 ] [ j - 1 ] ) + 1 ;
  else S [ i ] [ j ] = 0 ;
  int max_of_s = S [ 0 ] [ 0 ] ;
  int max_i = 0 ;
  int max_j = 0 ;
  for ( int i = 0 ;
  i < R ;
  i ++ ) for ( int j = 0 ;
  j < C ;
  j ++ ) if ( ( max_of_s < S [ i ] [ j ] ) || ( max_of_s > S [ i ] [ j ] ) ) {
    max_of_s = S [ i ] [ j ] ;
    max_i = i ;
    max_j = j ;
  }
  cout << "Maximum size sub-matrix is: " ;
  for ( int i = max_i ;
  i <= max_i - max_of_s ;
  i ++ ) for ( int j = max_j ;
  j <= max_j - max_of_s ;
  j -- ) cout << M [ i ] [ j ] << " " ;
  cout << "\n" ;
}
