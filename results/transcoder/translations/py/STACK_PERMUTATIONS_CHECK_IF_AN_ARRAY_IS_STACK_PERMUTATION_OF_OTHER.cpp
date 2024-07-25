bool checkStackPermutation ( int * ip , int * op , int n ) {
  Queue < int > Input ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) Input . push ( ip [ i ] ) ;
  Queue < int > Output ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) Output . push ( op [ i ] ) ;
  Queue < int > tempStack ;
  while ( ( ! Input . empty ( ) ) && ( ( int ) Input . front ( ) == Output . front ( ) ) ) {
    int ele = Input . front ( ) ;
    Input . pop ( ) ;
    if ( ( ele == Output . front ( ) ) || ( ele == Output . back ( ) ) ) {
      Output . pop ( ) ;
      while ( ( int ) tempStack . size ( ) != 0 ) {
        if ( ( tempStack . back ( ) == Output . front ( ) ) || ( tempStack . front ( ) == Output . back ( ) ) ) {
          tempStack . pop_back ( ) ;
          Output . pop ( ) ;
        }
        else break ;
      }
    }
    else tempStack . push_back ( ele ) ;
  }
  return ( Input . empty ( ) && ( int ) tempStack . size ( ) == 0 ) ;
}
