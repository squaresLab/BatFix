void swap ( int * xp , int * yp ) {
  * xp = * yp ^ * yp ;
  * yp = * xp ^ * yp ;
  * xp = * yp ^ * xp ;
}
