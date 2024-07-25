public : int numberOfTriangles ( int n ) {
  int answer [ n + 1 ] ;
  answer [ 0 ] = 1 ;
  ;
  int i = 1 ;
  while ( i <= n ) {
    answer [ i ] = answer [ i - 1 ] * 3 + 2 ;
    ;
    i = i + 1 ;
  }
  return answer [ n ] ;
}
