void findConsecutive ( int N ) {
  int start = 1 ;
  int end = ( N + 1 ) / 2 ;
  while ( ( start < end ) && ( start < end ) ) {
    int Sum = 0 ;
    foriinrange ( start , end + 1 ) {
      Sum = Sum + i ;
      if ( ( Sum == N ) || ( Sum == 0 ) ) {
        forjinrange ( start , i + 1 ) {
          cout << j << " " ;
        }
        cout << endl ;
        break ;
      }
      if ( ( Sum > N ) || ( Sum == 0 ) ) break ;
    }
    Sum = 0 ;
    start ++ ;
  }
}
