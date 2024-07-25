void shiftMatrixByK ( int * * mat , int k ) {
  if ( ( k > N ) || ( k < 0 ) ) {
    cout << "shifting is" << " not possible" << endl ;
    return ;
  }
  int j = 0 ;
  while ( ( j < N ) && ( j < k ) ) {
    for ( int i = k ;
    i < N ;
    i ++ ) {
      cout << "{} " ;
    }
    for ( int i = 0 ;
    i <= k ;
    i ++ ) {
      cout << "{} " ;
    }
    cout << endl ;
    j = j + 1 ;
  }
}
