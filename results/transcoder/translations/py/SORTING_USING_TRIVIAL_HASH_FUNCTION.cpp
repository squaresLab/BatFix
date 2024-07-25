void sortUsingHash ( int a [ ] , int n ) {
  int Max = max ( a ) ;
  int Hash [ Max + 1 ] ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) Hash [ a [ i ] ] ++ ;
  for ( int i = 0 ;
  i <= Max ;
  i ++ ) if ( Hash [ i ] != 0 ) for ( int j = 0 ;
  j <= Hash [ i ] ;
  j ++ ) cout << i << " " ;
}
