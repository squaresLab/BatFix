void findpath ( vector < vector < int >> & graph , int n ) {
  vector < int > numofadj ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    numofadj . push_back ( accumulate ( graph [ i ] . begin ( ) , graph [ i ] . end ( ) , 0 ) ) ;
  }
  int startPoint = 0 , numofodd = 0 ;
  for ( int i = n - 1 ;
  i >= 0 ;
  i -- ) {
    if ( numofadj . back ( ) % 2 == 1 ) {
      numofodd ++ ;
      startPoint = i ;
    }
  }
  if ( numofodd > 2 ) {
    cout << "No Solution" << endl ;
    return ;
  }
  stack < int > stack ;
  vector < int > path ;
  int cur = startPoint ;
  while ( ! stack . empty ( ) || accumulate ( graph [ cur ] . begin ( ) , graph [ cur ] . end ( ) , 0 ) != 0 ) {
    if ( accumulate ( graph [ cur ] . begin ( ) , graph [ cur ] . end ( ) , 0 ) == 0 ) {
      path . push_back ( cur ) ;
      cur = stack . top ( ) ;
    }
    else {
      for ( int i = 0 ;
      i < n ;
      i ++ ) {
        if ( graph [ cur ] [ i ] == 1 ) {
          stack . push ( cur ) ;
          graph [ cur ] [ i ] = 0 ;
          graph [ i ] [ cur ] = 0 ;
          cur = i ;
          break ;
        }
      }
    }
  }
  for ( int ele : path ) {
    cout << ele << " -> " ;
  }
  cout << cur << endl ;
}
