static void findMajority ( vector < int > arr ) {
  unordered_map < int , int > :: iterator it ;
  for ( it = arr . begin ( ) ;
  it != arr . end ( ) ;
  it ++ ) {
    if ( it -> first == arr [ 0 ] ) {
      int count = it -> second + 1 ;
      if ( count > arr . size ( ) / 2 ) {
        cout << "Majority found :- " << arr [ 0 ] << endl ;
        return ;
      }
      else {
        it -> second = count ;
      }
    }
    else {
      it -> second = 1 ;
    }
  }
  cout << " No Majority element" << endl ;
}
