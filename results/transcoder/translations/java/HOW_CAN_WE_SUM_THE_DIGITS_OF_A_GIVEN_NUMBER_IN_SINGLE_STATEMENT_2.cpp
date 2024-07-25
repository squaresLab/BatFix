int sumDigits ( int no ) {
  return no == 0 ? 0 : no % 10 + sumDigits ( no / 10 ) ;
}
