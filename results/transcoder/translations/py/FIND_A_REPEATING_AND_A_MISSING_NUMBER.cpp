void printTwoElements ( int arr [ ] , int size ) {
  for ( int i = 0 ;
  i < size ;
  i ++ ) {
    if ( arr [ abs ( arr [ i ] ) - 1 ] > 0 ) {
      arr [ abs ( arr [ i ] ) - 1 ] = - arr [ abs ( arr [ i ] ) - 1 ] ;
    }
    else {
      cout << "The repeating element is" << abs ( arr [ i ] ) << endl ;
    }
  }
  for ( int i = 0 ;
  i < size ;
  i ++ ) {
    if ( arr [ i ] > 0 ) {
      cout << "and the missing element is" << i + 1 << endl ;
    }
  }
}
