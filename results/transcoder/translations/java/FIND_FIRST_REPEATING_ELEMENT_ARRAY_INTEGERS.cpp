void printFirstRepeating ( int arr [ ] ) {
  int min = - 1 ;
  std :: set < int > set ;
  for ( int i = arr . size ( ) - 1 ;
  i >= 0 ;
  i -- ) {
    if ( set . count ( arr [ i ] ) ) {
      min = i ;
    }
    else {
      set . insert ( arr [ i ] ) ;
    }
  }
  if ( min != - 1 ) {
    std :: cout << "The first repeating element is " << arr [ min ] << std :: endl ;
  }
  else {
    std :: cout << "There are no repeating elements" << std :: endl ;
  }
}
