bool aredisjoint ( int set1 [ ] , int set2 [ ] ) {
  int i = 0 , j = 0 ;
  sort ( set1 , set1 + sizeof ( set1 ) / sizeof ( int ) ) ;
  sort ( set2 , set2 + sizeof ( set2 ) / sizeof ( int ) ) ;
  while ( i < sizeof ( set1 ) && j < sizeof ( set2 ) ) {
    if ( set1 [ i ] < set2 [ j ] ) {
      i ++ ;
    }
    else if ( set1 [ i ] > set2 [ j ] ) {
      j ++ ;
    }
    else {
      return false ;
    }
  }
  return true ;
}
