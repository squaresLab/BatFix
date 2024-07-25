void KMaxCombinations ( int * A , int * B , int N , int K ) {
  priority_queue < pair < int , int > , greater < int > , less < int >> pq ;
  for ( int i = 0 ;
  i <= N ;
  i ++ ) {
    for ( int j = 0 ;
    j <= N ;
    j ++ ) {
      int a = A [ i ] + B [ j ] ;
      pq . push ( make_pair ( - a , a ) ) ;
    }
  }
  int count ;
  while ( ( count = pq . top ( ) . second ) != 0 ) {
    cout << pq . top ( ) . second << endl ;
    count = count + 1 ;
  }
}
