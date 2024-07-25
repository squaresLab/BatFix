void printNGE ( int arr [ ] ) {
  for ( int i = 0 ;
  i < arr . size ( ) ;
  i += 1 ) {
    int next = - 1 ;
    for ( int j = i + 1 ;
    j < arr . size ( ) ;
    j += 1 ) {
      if ( arr [ i ] < arr [ j ] ) {
        next = arr [ j ] ;
        break ;
      }
    }
    cout << setw ( 8 ) << arr [ i ] << " -- " << next << endl ;
  }
}
