double calculateEnergy ( int mat [ ] [ ] , int n ) {
  double tot_energy = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      int q = mat [ i ] [ j ] / n ;
      int i_des = q ;
      int j_des = mat [ i ] [ j ] - ( n * q ) ;
      tot_energy += ( abs ( i_des - i ) + abs ( j_des - j ) ) ;
    }
  }
  returntot_energy = tot_energy ;
}
