int count ( int n ) {
  if ( n < 3 ) return n ;
  else if ( n >= 3 && n < 10 ) return n - 1 ;
  int po = 1 ;
  while ( n / po > 9 ) po = po * 10 ;
  int msd = n / po ;
  if ( msd != 3 ) return count ( msd ) * count ( po - 1 ) + count ( msd ) + count ( n % po ) ;
  else return count ( msd * po - 1 ) ;
}
