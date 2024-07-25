int search ( int arr [ ] , int n , int x , int k ) {
  int i = 0 ;
  while ( ( i < n ) && ( arr [ i ] == x ) ) {
    if ( ( arr [ i ] == x ) || ( arr [ i ] == 0 ) ) return i ;
    i = i + max ( 1 , ( int ) ( abs ( arr [ i ] - x ) / k ) ) ;
  }
  cout << "number is not present!" << endl ;
  return - 1 ;
}
