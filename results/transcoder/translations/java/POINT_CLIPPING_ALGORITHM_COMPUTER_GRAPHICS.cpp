void pointClip ( int XY [ ] [ 2 ] , int n , int Xmin , int Ymin , int Xmax , int Ymax ) {
  printf ( "Point inside the viewing pane:\n" ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( XY [ i ] [ 0 ] >= Xmin ) && ( XY [ i ] [ 0 ] <= Xmax ) ) {
      if ( ( XY [ i ] [ 1 ] >= Ymin ) && ( XY [ i ] [ 1 ] <= Ymax ) ) {
        printf ( "[%d, %d] " , XY [ i ] [ 0 ] , XY [ i ] [ 1 ] ) ;
      }
    }
  }
  printf ( "\nPoint outside the viewing pane:\n" ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( XY [ i ] [ 0 ] < Xmin ) || ( XY [ i ] [ 0 ] > Xmax ) ) {
      printf ( "[%d, %d] " , XY [ i ] [ 0 ] , XY [ i ] [ 1 ] ) ;
    }
    if ( ( XY [ i ] [ 1 ] < Ymin ) || ( XY [ i ] [ 1 ] > Ymax ) ) {
      printf ( "[%d, %d] " , XY [ i ] [ 0 ] , XY [ i ] [ 1 ] ) ;
    }
  }
}
