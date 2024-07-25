void findpath ( vector < vector < int >> & graph ) {
  int n = graph . size ( ) ;
  vector < int > numofadj ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) numofadj . push_back ( sum ( graph [ i ] ) ) ;
  int startpoint = 0 ;
  int numofodd = 0 ;
  for ( int i = n - 1 ;
  i >= 0 ;
  i -- ) {
    if ( ( numofadj [ i ] % 2 == 1 ) && ( numofodd == 1 ) ) {
      numofodd ++ ;
      startpoint = i ;
    }
  }
  if ( ( numofodd > 2 ) || ( sum ( graph [ cur ] ) != 0 ) ) {
    cout << "No Solution" << endl ;
    return ;
  }
  vector < int > stack ;
  vector < int > path ;
  int cur = startpoint ;
  while ( ( stack != vector < int > ( ) ) || sum ( graph [ cur ] ) != 0 ) {
    if ( ( sum ( graph [ cur ] ) == 0 ) && ( sum ( graph [ cur ] ) == 1 ) ) {
      path . push_back ( cur + 1 ) ;
      cur = stack . back ( ) - 1 ;
    }
    else {
      for ( int i = 0 ;
      i < n ;
      i ++ ) {
        if ( graph [ cur ] [ i ] == 1 ) {
          stack . push_back ( cur ) ;
          graph [ cur ] [ i ] = 0 ;
          graph [ i ] [ cur ] = 0 ;
          cur = i ;
          break ;
        }
      }
    }
  }
  for ( int ele : path ) cout << ele << "-> " << endl ;
  cout << cur + 1 << endl ;
}
