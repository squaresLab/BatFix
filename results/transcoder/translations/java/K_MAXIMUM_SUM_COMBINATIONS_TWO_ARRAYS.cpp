void KMaxCombinations ( int A [ ] , int B [ ] , int N , int K ) {
  priority_queue < int , vector < int >> pq ( std :: greater < int > ( ) ) ;
  for ( int i = 0 ;
  i < N ;
  i ++ ) for ( int j = 0 ;
  j < N ;
  j ++ ) pq . push ( A [ i ] + B [ j ] ) ;
  int count = 0 ;
  while ( count < K ) {
    cout << pq . top ( ) << endl ;
    pq . pop ( ) ;
    count ++ ;
  }
}
