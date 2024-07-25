void printDuplicates ( int arr [ ] ) {
  map < int , int > :: iterator it ;
  for ( it = arr ;
  it != arr + arr ;
  it ++ ) {
    int ele = * it ;
    map < int , int > :: iterator it2 = it2 ;
    for ( it2 = it ;
    it2 != arr + arr ;
    it2 ++ ) {
      if ( ( it2 -> first > 1 ) && ( it2 -> second > 1 ) ) cout << it2 -> first << " " ;
    }
    cout << "\n" ;
  }
}
