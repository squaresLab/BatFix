bool findthepath ( string S , int v ) {
  result [ 0 ] = v ;
  for ( int i = 1 ;
  i < S . size ( ) ;
  i ++ ) {
    if ( ( adj [ v ] [ ( char ) S [ i ] - 'A' ] || adj [ ( char ) S [ i ] - 'A' ] [ v ] ) && ( adj [ v ] [ ( char ) S [ i ] - 'A' ] [ v ] ) ) v = ( char ) S [ i ] - 'A' ;
    else if ( ( adj [ v ] [ ( char ) S [ i ] - 'A' + 5 ] || adj [ ( char ) S [ i ] - 'A' + 5 ] [ v ] ) && ( adj [ v ] [ ( char ) S [ i ] - 'A' + 5 ] [ v ] ) ) v = ( char ) S [ i ] - 'A' + 5 ;
    else return false ;
    result . push_back ( v ) ;
  }
  return true ;
}
