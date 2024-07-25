void printRepeating ( int * arr , int size ) {
  cout << " The repeating elements are" << endl ;
  for ( int i = 0 ;
  i != size ;
  i ++ ) {
    if ( ( arr [ abs ( arr [ i ] ) ] > 0 ) && ( arr [ abs ( arr [ i ] ) ] < ( arr [ abs ( arr [ i ] ) ] + 1 ) ) ) {
      arr [ abs ( arr [ i ] ) ] = ( - 1 ) * arr [ abs ( arr [ i ] ) ] ;
    }
    else {
      cout << abs ( arr [ i ] ) << " " ;
    }
  }
}
