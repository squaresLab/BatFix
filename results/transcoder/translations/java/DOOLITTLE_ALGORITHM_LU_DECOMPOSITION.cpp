void lu_decomposition ( vector < vector < int >> & mat , int n ) {
  vector < vector < int >> lower ( n , vector < int > ( n , 0 ) ) ;
  vector < vector < int >> upper ( n , vector < int > ( n , 0 ) ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int k = i ;
    k < n ;
    k ++ ) {
      int sum = 0 ;
      for ( int j = 0 ;
      j < i ;
      j ++ ) {
        sum += ( lower [ i ] [ j ] * upper [ j ] [ k ] ) ;
      }
      upper [ i ] [ k ] = mat [ i ] [ k ] - sum ;
    }
    for ( int k = i ;
    k < n ;
    k ++ ) {
      if ( i == k ) {
        lower [ i ] [ i ] = 1 ;
      }
      else {
        int sum = 0 ;
        for ( int j = 0 ;
        j < i ;
        j ++ ) {
          sum += ( lower [ k ] [ j ] * upper [ j ] [ i ] ) ;
        }
        lower [ k ] [ i ] = ( mat [ k ] [ i ] - sum ) / upper [ i ] [ i ] ;
      }
    }
  }
  cout << setw ( 2 ) << "     Lower Triangular" << setw ( 10 ) << "Upper Triangular" << endl ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      cout << setw ( 4 ) << lower [ i ] [ j ] << "\t" ;
    }
    cout << "\t" ;
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      cout << setw ( 4 ) << upper [ i ] [ j ] << "\t" ;
    }
    cout << "\n" ;
  }
}
