void printTwoElements ( int arr [ ] , int size ) {
  int i ;
  cout << "The repeating element is " ;
  for ( i = 0 ;
  i < size ;
  i ++ ) {
    int abs_val = abs ( arr [ i ] ) ;
    if ( arr [ abs_val - 1 ] > 0 ) {
      arr [ abs_val - 1 ] = - arr [ abs_val - 1 ] ;
    }
    else {
      cout << abs_val << endl ;
    }
  }
  cout << "And the missing element is " ;
  for ( i = 0 ;
  i < size ;
  i ++ ) {
    if ( arr [ i ] > 0 ) {
      cout << i + 1 << endl ;
    }
  }
}
