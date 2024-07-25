void printRepeating ( int arr [ ] , int size ) {
  int i ;
  cout << "The repeating elements are : " << endl ;
  for ( i = 0 ;
  i < size ;
  i ++ ) {
    if ( arr [ abs ( arr [ i ] ) ] > 0 ) {
      arr [ abs ( arr [ i ] ) ] = - arr [ abs ( arr [ i ] ) ] ;
    }
    else {
      cout << abs ( arr [ i ] ) << " " ;
    }
  }
}
