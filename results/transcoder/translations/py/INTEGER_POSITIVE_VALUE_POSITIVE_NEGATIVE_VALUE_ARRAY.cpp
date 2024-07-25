int findInteger ( int arr [ ] , int n ) {
  map < int , int > hash ;
  int maximum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( i < 0 ) && ( i != 0 ) ) {
      if ( abs ( i ) != hash . count ( abs ( i ) ) ) {
        hash [ abs ( i ) ] = - 1 ;
      }
      else {
        hash [ abs ( i ) ] -- ;
      }
    }
    else {
      hash [ i ] = hash . count ( i ) + 1 ;
    }
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( i < hash . count ( i ) && hash [ i ] > 0 ) {
      return i ;
    }
  }
  return - 1 ;
}
