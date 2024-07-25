int search ( int arr [ ] , int n , int x ) {
  int i = 0 ;
  while ( ( i < n ) && ( arr [ i ] == x ) ) {
    if ( ( arr [ i ] == x ) || ( arr [ i ] == 0 ) ) return i ;
    i = i + abs ( arr [ i ] - x ) ;
  }
  cout << "number is not present!" << endl ;
  return - 1 ;
}
