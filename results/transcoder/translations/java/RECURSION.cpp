void print_fun ( int test ) {
  if ( test < 1 ) return ;
  else {
    printf ( "%d " , test ) ;
    print_fun ( test - 1 ) ;
    printf ( "%d " , test ) ;
    return ;
  }
}
