void countFreq ( int a [ ] , int n ) {
  map < int , int > hm ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) hm [ a [ i ] ] = hm . find ( a [ i ] ) + 1 ;
  int cumul = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    cumul += hm [ a [ i ] ] ;
    if ( ( hm [ a [ i ] ] > 0 ) && ( cumul < 0 ) ) cout << a [ i ] << "->" << cumul << endl ;
    hm [ a [ i ] ] = 0 ;
  }
}
