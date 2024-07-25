int nextfit ( int weight [ ] , int c ) {
  int res = 0 ;
  int rem = c ;
  for ( ;
  rem < weight [ 0 ] ;
  rem ++ ) {
    if ( rem >= weight [ 0 ] ) rem = rem - weight [ 0 ] ;
    else {
      res ++ ;
      rem = c - weight [ 0 ] ;
    }
  }
  return res ;
}
