string longDivision ( string number , int divisor ) {
  string ans ;
  int idx = 0 ;
  int temp ;
  temp = ( char ) number [ idx ] - ( char ) '0' ;
  while ( ( temp < divisor ) && ( temp != '0' ) ) {
    temp = ( temp * 10 + ( char ) number [ idx + 1 ] - ( char ) '0' ) ;
    idx ++ ;
  }
  idx ++ ;
  while ( ( ( int ) number [ idx ] ) > ( int ) '0' ) {
    ans += ( char ) floor ( temp / divisor ) + ( char ) '0' ;
    temp = ( ( temp % divisor ) * 10 + ( char ) number [ idx ] - ( char ) '0' ) ;
    idx ++ ;
  }
  ans += ( char ) floor ( temp / divisor ) + ( char ) '0' ;
  if ( ( ans . length ( ) == 0 ) || ( ans . length ( ) == 1 ) ) return "0" ;
  ;
  returnans ;
}
