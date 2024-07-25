void printRepeating ( int arr [ ] , int size ) {
  int count [ size ] ;
  int i ;
  cout << "Repeated elements are : " ;
  for ( i = 0 ;
  i < size ;
  i ++ ) {
    if ( count [ arr [ i ] ] == 1 ) {
      cout << arr [ i ] << " " ;
    }
    else {
      count [ arr [ i ] ] ++ ;
    }
  }
}
