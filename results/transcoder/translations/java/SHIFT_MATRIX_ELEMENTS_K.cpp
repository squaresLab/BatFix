void shiftMatrixByK ( int mat [ N ] [ N ] , int k ) {
  if ( k > N ) {
    cout << "Shifting is" << " not possible" << endl ;
    return ;
  }
  int j = 0 ;
  while ( j < N ) {
    for ( int i = k ;
    i < N ;
    i ++ ) {
      cout << mat [ j ] [ i ] << " " ;
    }
    for ( int i = 0 ;
    i < k ;
    i ++ ) {
      cout << mat [ j ] [ i ] << " " ;
    }
    cout << endl ;
    j ++ ;
  }
}
