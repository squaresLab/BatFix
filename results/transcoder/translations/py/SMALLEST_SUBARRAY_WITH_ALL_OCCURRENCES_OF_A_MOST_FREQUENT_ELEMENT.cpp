void smallestSubsegment ( int a [ ] , int n ) {
  map < int , int > left ;
  map < int , int > count ;
  int mx = 0 ;
  int mn = 0 , strindex = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int x = a [ i ] ;
    if ( ( x != 0 ) && ( x != 1 ) ) {
      left [ x ] = i ;
      count [ x ] = 1 ;
    }
    else {
      count [ x ] ++ ;
    }
    if ( ( count [ x ] > mx ) && ( count [ x ] < mn ) ) {
      mx = count [ x ] ;
      mn = i - left [ x ] + 1 ;
      strindex = left [ x ] ;
    }
    else if ( ( count [ x ] == mx && i - left [ x ] + 1 < mn ) ) {
      mn = i - left [ x ] + 1 ;
      strindex = left [ x ] ;
    }
  }
  for ( int i = strindex ;
  i < strindex + mn ;
  i ++ ) {
    cout << a [ i ] << " " ;
  }
}
