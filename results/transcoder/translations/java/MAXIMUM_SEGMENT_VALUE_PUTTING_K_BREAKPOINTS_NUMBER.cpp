int findMaxSegment ( string s , int k ) {
  int seg_len = s . length ( ) - k ;
  int res = 0 ;
  for ( int i = 0 ;
  i < seg_len ;
  i ++ ) {
    res = res * 10 + ( s [ i ] - '0' ) ;
  }
  int seg_len_pow = ( int ) pow ( 10 , seg_len - 1 ) ;
  int curr_val = res ;
  for ( int i = 1 ;
  i <= ( s . length ( ) - seg_len ) ;
  i ++ ) {
    curr_val = curr_val - ( s [ i - 1 ] - '0' ) * seg_len_pow ;
    curr_val = curr_val * 10 + ( s [ i + seg_len - 1 ] - '0' ) ;
    res = max ( res , curr_val ) ;
  }
  return res ;
}
