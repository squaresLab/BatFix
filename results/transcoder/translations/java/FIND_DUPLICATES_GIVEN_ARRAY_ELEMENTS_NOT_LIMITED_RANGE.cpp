static void printDuplicates ( int arr [ ] , int n ) {
  map < int , int > :: iterator it ;
  int count = 0 ;
  bool dup = false ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( it . first == arr [ i ] ) {
      count = it . second ;
      it . first = arr [ i ] ;
      it . second = count + 1 ;
    }
    else {
      it . first = 1 ;
    }
  }
  for ( it . first = arr [ n - 1 ] ;
  it . first != arr [ n - 1 ] ;
  it . first = arr [ n - 1 ] ) {
    if ( it . second > 1 ) {
      cout << it . first << " " ;
      dup = true ;
    }
  }
  if ( ! dup ) cout << "-1" ;
}
