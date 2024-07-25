void printkthnode ( vector < vector < int >> & adj , double * wt , int n , int k ) {
  for ( int i = 0 ;
  i < n ;
  i ++ ) adj [ i ] . sort ( ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( adj [ i ] . size ( ) >= k ) && ( adj [ i ] [ adj [ i ] . size ( ) - k ] . size ( ) > 1 ) ) cout << adj [ i ] [ adj [ i ] . size ( ) - k ] [ 1 ] << " " ;
    else cout << "-1" << " " ;
  }
}
