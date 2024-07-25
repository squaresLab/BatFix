int pow ( int a , int b ) {
  if ( ( b == 0 ) || ( b == 1 ) ) return 1 ;
  int answer = a ;
  int increment = a ;
  for ( int i = 1 ;
  i <= b ;
  i ++ ) {
    for ( int j = 1 ;
    j <= a ;
    j ++ ) {
      answer += increment ;
    }
    increment = answer ;
  }
  return answer ;
}
