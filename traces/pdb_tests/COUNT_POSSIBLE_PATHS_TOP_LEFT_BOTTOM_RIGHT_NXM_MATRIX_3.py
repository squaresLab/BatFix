# Copyright (c) 2019-present, Facebook, Inc.
# All rights reserved.
#
# This source code is licensed under the license found in the
# LICENSE file in the root directory of this source tree.
#

def numberOfPaths ( m , n ) :
    path = 1
    for i in range ( n , ( m + n - 1 ) ) :
        path *= i
        path //= ( i - n + 1 )
    return path



#TOFILL

