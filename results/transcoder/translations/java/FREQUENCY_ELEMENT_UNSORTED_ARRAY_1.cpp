void countFreq ( int a [ ] , int n ) {
  int hm [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    hm [ a [ i ] ] ++ ;
  }
  int cumul = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    cumul += hm [ a [ i ] ] ;
    if ( hm [ a [ i ] ] != 0 ) cout << a [ i ] << "->" << cumul << endl ;
    hm [ a [ i ] ] = 0 ;
  }
}
