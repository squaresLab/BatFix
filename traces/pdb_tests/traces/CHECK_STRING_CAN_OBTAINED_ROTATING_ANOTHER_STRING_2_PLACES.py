Statement: if ( len ( str1 ) != len ( str2 ) ) :
Line: 8
str1 = "amazon"
str2 = "azonam"

Statement: clock_rot = ""
Line: 10
str1 = "amazon"
str2 = "azonam"

Statement: anticlock_rot = ""
Line: 11
str1 = "amazon"
str2 = "azonam"
clock_rot = ""

Statement: l = len ( str2 )
Line: 12
str1 = "amazon"
str2 = "azonam"
clock_rot = ""
anticlock_rot = ""

Statement: anticlock_rot = ( anticlock_rot + str2 [ l - 2 : ] + str2 [ 0 : l - 2 ] )
Line: 13
str1 = "amazon"
str2 = "azonam"
clock_rot = ""
anticlock_rot = ""
l = 6

Statement: clock_rot = clock_rot + str2 [ 2 : ] + str2 [ 0 : 2 ]
Line: 14
str1 = "amazon"
str2 = "azonam"
clock_rot = ""
anticlock_rot = "amazon"
l = 6

Statement: return ( str1 == clock_rot or str1 == anticlock_rot )
Line: 15
str1 = "amazon"
str2 = "azonam"
clock_rot = "onamaz"
anticlock_rot = "amazon"
l = 6

Statement: return ( str1 == clock_rot or str1 == anticlock_rot )
Line: 15
str1 = "amazon"
str2 = "azonam"
clock_rot = "onamaz"
anticlock_rot = "amazon"
l = 6
__return__ = True

