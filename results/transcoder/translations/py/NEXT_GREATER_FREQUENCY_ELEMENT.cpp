public : vector < int > NFG ( int a [ ] , int n ) {
  if ( ( n <= 0 ) || ( n > n ) ) {
    cout << "List empty" << endl ;
    return vector < int > ( ) ;
  }
  vector < int > stack ( n , 0 ) ;
  unordered_map < int , int > freq ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    freq [ a [ i ] ] = 0 ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    freq [ a [ i ] ] ++ ;
  }
  vector < int > res ( n , 0 ) ;
  int top = - 1 ;
  top ++ ;
  stack [ top ] = 0 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    if ( ( freq [ a [ stack [ top ] ] ] > freq [ a [ i ] ] ) && ( freq [ a [ stack [ top ] ] ] < freq [ a [ i ] ] ) ) {
      top ++ ;
      stack [ top ] = i ;
    }
    else {
      while ( ( top > - 1 && freq [ a [ stack [ top ] ] ] < freq [ a [ i ] ] ) && ( freq [ a [ stack [ top ] ] ] > freq [ a [ i ] ] ) ) {
        res [ stack [ top ] ] = a [ i ] ;
        top -- ;
      }
      top ++ ;
      stack [ top ] = i ;
    }
  }
  while ( ( top > - 1 ) && ( freq [ a [ stack [ top ] ] ] < freq [ a [ i ] ] ) ) ) {
    res [ stack [ top ] ] = - 1 ;
    top -- ;
  }
  return res ;
}
