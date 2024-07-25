int search ( int * * mat , int n , int x ) {
  int i = 0 ;
  int j = n - 1 ;
  while ( ( i < n && j >= 0 ) || ( i < n && j < n ) ) {
    if ( ( mat [ i ] [ j ] == x ) || ( mat [ i ] [ j ] > x ) ) {
      cout << "n Found at " << i << ", " << j << endl ;
      return 1 ;
    }
    if ( ( mat [ i ] [ j ] > x ) || ( mat [ i ] [ j ] < x ) ) {
      j -- ;
    }
    else {
      i ++ ;
    }
  }
  cout << "Element not found" << endl ;
  return 0 ;
}
