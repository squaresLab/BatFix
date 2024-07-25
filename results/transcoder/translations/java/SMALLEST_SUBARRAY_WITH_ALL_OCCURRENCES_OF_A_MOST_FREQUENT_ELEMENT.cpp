void smallestSubsegment ( int a [ ] , int n ) {
  unordered_map < int , int > left ;
  unordered_map < int , int > count ;
  int mx = 0 ;
  int mn = - 1 , strindex = - 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int x = a [ i ] ;
    if ( count . find ( x ) == count . end ( ) ) {
      left [ x ] = i ;
      count [ x ] = 1 ;
    }
    else {
      count [ x ] = count [ x ] + 1 ;
    }
    if ( count [ x ] > mx ) {
      mx = count [ x ] ;
      mn = i - left [ x ] + 1 ;
      strindex = left [ x ] ;
    }
    else if ( ( count [ x ] == mx ) && ( i - left [ x ] + 1 < mn ) ) {
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
