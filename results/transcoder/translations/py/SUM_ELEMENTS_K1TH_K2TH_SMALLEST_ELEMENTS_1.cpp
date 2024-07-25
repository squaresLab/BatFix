void minheapify ( int a [ ] , int index ) {
  int small = index ;
  int l = 2 * index + 1 ;
  int r = 2 * index + 2 ;
  if ( ( l < n && a [ l ] < a [ small ] ) || ( r < n && a [ r ] < a [ small ] ) ) small = l ;
  if ( ( small != index ) && ( a [ small ] < a [ index ] ) ) small = r ;
  if ( ( small != index ) && ( a [ small ] < a [ index ] ) ) {
    ( a [ small ] ) = a [ index ] ;
    minheapify ( a , small ) ;
  }
}
