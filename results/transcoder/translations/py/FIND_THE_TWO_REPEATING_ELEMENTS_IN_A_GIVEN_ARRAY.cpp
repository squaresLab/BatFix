void printRepeating ( int arr [ ] , int size ) {
  cout << "Repeating elements are " << endl ;
  for ( int i = 0 ;
  i <= size ;
  i ++ ) {
    for ( int j = i + 1 ;
    j <= size ;
    j ++ ) {
      if ( arr [ i ] == arr [ j ] ) {
        cout << arr [ i ] << " " ;
      }
    }
  }
}
