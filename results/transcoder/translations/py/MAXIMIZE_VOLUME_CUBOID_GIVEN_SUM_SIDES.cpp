double maxvolume ( int s ) {
  double maxvalue = 0 ;
  int i ;
  for ( i = 0 ;
  i < s - 1 ;
  i ++ ) {
    int j ;
    for ( j = 0 ;
    j < s ;
    j ++ ) {
      int k = s - i - j ;
      maxvalue = max ( maxvalue , i * j * k ) ;
    }
  }
  return maxvalue ;
}
