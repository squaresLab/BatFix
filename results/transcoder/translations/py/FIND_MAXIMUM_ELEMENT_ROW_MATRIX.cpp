void maxelement ( int arr [ ] [ 10 ] ) {
  int no_of_rows = arr . size ( ) ;
  int no_of_column = arr [ 0 ] . size ( ) ;
  for ( int i = 0 ;
  i < no_of_rows ;
  i ++ ) {
    int max1 = 0 ;
    for ( int j = 0 ;
    j < no_of_column ;
    j ++ ) {
      if ( arr [ i ] [ j ] > max1 ) max1 = arr [ i ] [ j ] ;
    }
    cout << max1 << endl ;
  }
}
