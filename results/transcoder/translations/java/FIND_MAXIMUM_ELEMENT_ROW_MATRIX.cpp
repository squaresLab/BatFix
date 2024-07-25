void maxelement ( int no_of_rows , vector < vector < int >> arr ) {
  int i = 0 ;
  int max = 0 ;
  vector < int > result ( no_of_rows , 0 ) ;
  while ( i < no_of_rows ) {
    for ( int j = 0 ;
    j < arr [ i ] . size ( ) ;
    j ++ ) {
      if ( arr [ i ] [ j ] > max ) max = arr [ i ] [ j ] ;
    }
    result [ i ] = max ;
    max = 0 ;
    i ++ ;
  }
  print_array ( result ) ;
}
