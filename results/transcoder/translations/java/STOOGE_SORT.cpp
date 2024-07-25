void stoogesort ( int arr [ ] , int l , int h ) {
  if ( l >= h ) return ;
  if ( arr [ l ] > arr [ h ] ) {
    int t = arr [ l ] ;
    arr [ l ] = arr [ h ] ;
    arr [ h ] = t ;
  }
  if ( h - l + 1 > 2 ) {
    int t = ( h - l + 1 ) / 3 ;
    stoogesort ( arr , l , h - t ) ;
    stoogesort ( arr , l + t , h ) ;
    stoogesort ( arr , l , h - t ) ;
  }
}
