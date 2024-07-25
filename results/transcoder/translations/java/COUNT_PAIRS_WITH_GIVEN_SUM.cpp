void getPairsCount ( vector < int > arr , int sum ) {
  int count = 0 ;
  for ( int i = 0 ;
  i < arr . size ( ) ;
  i ++ ) for ( int j = i + 1 ;
  j < arr . size ( ) ;
  j ++ ) if ( ( arr [ i ] + arr [ j ] ) == sum ) count ++ ;
  cout << "Count of pairs is " << count << endl ;
}
