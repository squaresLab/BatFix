int print_count_rec ( int dist ) {
  if ( dist < 0 ) return 0 ;
  if ( dist == 0 ) return 1 ;
  return print_count_rec ( dist - 1 ) + print_count_rec ( dist - 2 ) + print_count_rec ( dist - 3 ) ;
}
