int calculateEnergy ( int mat [ ] [ 2 ] , int n ) {
  int i_des , j_des , q ;
  int tot_energy = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      q = mat [ i ] [ j ] / n ;
      i_des = q ;
      j_des = mat [ i ] [ j ] - ( n * q ) ;
      tot_energy += abs ( i_des - i ) + abs ( j_des - j ) ;
    }
  }
  return tot_energy ;
}
