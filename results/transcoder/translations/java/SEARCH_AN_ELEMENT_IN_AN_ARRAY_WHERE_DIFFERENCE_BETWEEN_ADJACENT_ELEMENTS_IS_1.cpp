int search ( int arr [ ] , int n , int x ) {
  int i = 0 ;
  while ( i < n ) {
    if ( arr [ i ] == x ) return i ;
    i = i + abs ( arr [ i ] - x ) ;
  }
  cout << "number is not" << " present!" << endl ;
  return - 1 ;
}
