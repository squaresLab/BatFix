string longDivision ( string number , int divisor ) {
  string ans = "" ;
  int idx = 0 ;
  char * num = number . c_str ( ) ;
  int temp = * num - '0' ;
  while ( temp < divisor ) {
    temp = temp * 10 + ( * num ++ - '0' ) ;
  }
  idx += 1 ;
  while ( num [ idx ] ) {
    ans += ( temp / divisor ) ;
    temp = ( temp % divisor ) * 10 + num [ idx ++ ] - '0' ;
  }
  if ( ans . length ( ) == 0 ) return "0" ;
  return ans ;
}
