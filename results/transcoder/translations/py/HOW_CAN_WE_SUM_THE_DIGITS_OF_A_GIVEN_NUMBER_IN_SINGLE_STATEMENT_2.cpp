int sumDigits ( int no ) {
  return 0 == no ? 0 : ( int ) ( no % 10 ) + sumDigits ( ( int ) ( no / 10 ) ) ;
}
