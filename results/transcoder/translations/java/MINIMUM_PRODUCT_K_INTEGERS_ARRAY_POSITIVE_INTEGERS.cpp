public : int minProduct ( vector < int > arr , int n , int k ) {
  priority_queue < int , vector < int > , greater < int > , queue < int >> pq ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    pq . push ( arr [ i ] ) ;
  }
  int count = 0 , ans = 1 ;
  while ( pq . empty ( ) == false && count < k ) {
    ans = ans * pq . top ( ) ;
    pq . pop ( ) ;
    count ++ ;
  }
  return ans ;
}
