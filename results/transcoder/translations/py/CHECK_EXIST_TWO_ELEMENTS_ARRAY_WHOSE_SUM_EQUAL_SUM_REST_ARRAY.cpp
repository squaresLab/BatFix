bool checkPair ( int arr [ ] , int n ) {
  set < int > s ;
  int sum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) sum += arr [ i ] ;
  if ( sum % 2 != 0 ) return false ;
  sum = sum / 2 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int val = sum - arr [ i ] ;
    if ( arr [ i ] != 0 ) s . insert ( arr [ i ] ) ;
    if ( val < s . size ( ) ) cout << "Pair elements are" << arr [ i ] << "and" << ( int ) val << endl ;
  }
  return true ;
}
