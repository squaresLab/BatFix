int compute_last_digit ( long long A , long long B ) {
  int variable = 1 ;
  if ( A == B ) return 1 ;
  else if ( ( B - A ) >= 5 ) return 0 ;
  else {
    for ( long long i = A + 1 ;
    i <= B ;
    i ++ ) {
      variable = ( int ) ( variable * ( i % 10 ) ) % 10 ;
    }
    return variable % 10 ;
  }
}
