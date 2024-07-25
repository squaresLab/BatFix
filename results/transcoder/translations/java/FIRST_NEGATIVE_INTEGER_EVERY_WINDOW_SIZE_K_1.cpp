void printFirstNegativeInteger ( int arr [ ] , int n , int k ) {
  LinkedList < int > Di ;
  int i ;
  for ( i = 0 ;
  i < k ;
  i ++ ) if ( arr [ i ] < 0 ) Di . add ( i ) ;
  for ( ;
  i < n ;
  i ++ ) {
    if ( ! Di . isEmpty ( ) ) cout << arr [ Di . top ( ) ] << " " ;
    else cout << "0" << " " ;
    while ( ( ! Di . isEmpty ( ) ) && Di . top ( ) < ( i - k + 1 ) ) Di . pop ( ) ;
    if ( arr [ i ] < 0 ) Di . add ( i ) ;
  }
  if ( ! Di . isEmpty ( ) ) cout << arr [ Di . top ( ) ] << " " ;
  else cout << "0" << " " ;
}
