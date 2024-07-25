void printRepeating ( int arr [ ] , int size ) {
  int i , j ;
  cout << "Repeated Elements are :" << endl ;
  for ( i = 0 ;
  i < size ;
  i ++ ) {
    for ( j = i + 1 ;
    j < size ;
    j ++ ) {
      if ( arr [ i ] == arr [ j ] ) {
        cout << arr [ i ] << " " ;
      }
    }
  }
}
