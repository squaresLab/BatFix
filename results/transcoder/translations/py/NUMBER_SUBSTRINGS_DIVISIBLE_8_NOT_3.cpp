public : int count ( char * s , int Len ) {
  static int MAX = 100 ;
  int cur = 0 ;
  int dig ;
  int Sum [ MAX ] [ MAX ] ;
  int dp [ MAX ] [ MAX ] ;
  dp [ 0 ] [ 0 ] = 1 ;
  for ( int i = 1 ;
  i <= Len ;
  i ++ ) {
    dig = ( int ) s [ i - 1 ] - 48 ;
    cur += dig ;
    cur %= 3 ;
    Sum [ i ] = cur ;
    dp [ i ] [ 0 ] = dp [ i - 1 ] [ 0 ] ;
    dp [ i ] [ 1 ] = dp [ i - 1 ] [ 1 ] ;
    dp [ i ] [ 2 ] = dp [ i - 1 ] [ 2 ] ;
    dp [ i ] [ Sum [ i ] ] ++ ;
  }
  int ans = 0 ;
  int dprev = 0 ;
  int value ;
  int dprev2 = 0 ;
  for ( int i = 1 ;
  i <= Len ;
  i ++ ) {
    dig = ( int ) s [ i - 1 ] - 48 ;
    if ( dig == 8 ) ans ++ ;
    if ( i - 2 >= 0 ) {
      dprev = ( int ) s [ i - 2 ] - 48 ;
      value = dprev * 10 + dig ;
      if ( ( value % 8 == 0 ) && ( value % 3 != 0 ) ) ans ++ ;
    }
    if ( i - 3 >= 0 ) {
      dprev2 = ( int ) s [ i - 3 ] - 48 ;
      dprev = ( int ) s [ i - 2 ] - 48 ;
      value = ( dprev2 * 100 + dprev * 10 + dig ) ;
      if ( value % 8 != 0 ) continue ;
      ans += ( i - 2 ) ;
      ans -= ( dp [ i - 3 ] [ Sum [ i ] ] ) ;
    }
  }
  return ans ;
}
