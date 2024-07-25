void minheapify ( int * a , int index ) {
  int small = index ;
  int l = 2 * index + 1 ;
  int r = 2 * index + 2 ;
  if ( l < n && a [ l ] < a [ small ] ) {
    small = l ;
  }
  if ( r < n && a [ r ] < a [ small ] ) {
    small = r ;
  }
  if ( small != index ) {
    int t = a [ small ] ;
    a [ small ] = a [ index ] ;
    a [ index ] = t ;
    minheapify ( a , small ) ;
  }
}
