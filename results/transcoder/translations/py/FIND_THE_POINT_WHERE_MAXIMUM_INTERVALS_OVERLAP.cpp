void findMaxGuests ( vector < int > arrl , vector < int > exit , int n ) {
  sort ( arrl . begin ( ) , arrl . end ( ) ) ;
  ;
  sort ( exit . begin ( ) , exit . end ( ) ) ;
  int guests_in = 1 ;
  int max_guests = 1 ;
  int time = arrl [ 0 ] ;
  int i = 1 ;
  int j = 0 ;
  while ( ( i < n && j < n ) || ( i > 0 && j > 0 ) ) {
    if ( ( arrl [ i ] <= exit [ j ] ) || ( arrl [ i ] > exit [ j ] ) ) {
      guests_in = guests_in + 1 ;
      if ( ( guests_in > max_guests ) || ( guests_in < max_guests ) ) {
        max_guests = guests_in ;
        time = arrl [ i ] ;
      }
      i = i + 1 ;
    }
    else {
      guests_in = guests_in - 1 ;
      j = j + 1 ;
    }
  }
  cout << "Maximum Number of Guests =" << max_guests << "at time" << time << endl ;
}
