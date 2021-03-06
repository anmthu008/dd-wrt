normal exceptions-----------------------------------------

throw new Exception():                                 OK
java.lang.Exception
   at extest.main(extest.java)

throw new Exception() (from subroutines):              OK
java.lang.Exception
   at extest.sub4(extest.java)
   at extest.sub3(extest.java)
   at extest.sub2(extest.java)
   at extest.sub(extest.java)
   at extest.main(extest.java)

NullPointerException:                                  OK
java.lang.NullPointerException
   at extest.main(extest.java)


exceptions thrown in JIT code-----------------------------

ArithmeticException (only w/ -softnull):               OK
java.lang.ArithmeticException: / by zero
   at extest.main(extest.java)

ArrayIndexOutOfBoundsException:                        OK
java.lang.ArrayIndexOutOfBoundsException: -889275714
   at extest.main(extest.java)

ArrayStoreException:                                   OK
java.lang.ArrayStoreException
   at extest.main(extest.java)

ClassCastException:                                    OK
java.lang.ClassCastException: java/lang/Object
   at extest.main(extest.java)

NegativeArraySizeException (newarray):                 OK
java.lang.NegativeArraySizeException
   at extest.main(extest.java)

NegativeArraySizeException (multianewarray):           OK
java.lang.NegativeArraySizeException
   at extest.main(extest.java)

OutOfMemoryError:                                      OK
java.lang.OutOfMemoryError: Java heap space
   at extest.main(extest.java)

OutOfMemoryError (multianewarray):                     OK
java.lang.OutOfMemoryError: Java heap space
   at extest.main(extest.java)


exceptions in leaf functions------------------------------

ArithmeticException:                                   OK
java.lang.ArithmeticException: / by zero
   at extest.aesub(extest.java)
   at extest.main(extest.java)

ArrayIndexOutOfBoundsException:                        OK
java.lang.ArrayIndexOutOfBoundsException: -559038737
   at extest.aioobesub(extest.java)
   at extest.main(extest.java)

ClassCastException:                                    OK
java.lang.ClassCastException: java/lang/Object
   at extest.ccesub(extest.java)
   at extest.main(extest.java)

NullPointerException:                                  OK
java.lang.NullPointerException
   at extest.npesub(extest.java)
   at extest.main(extest.java)

Exception in <clinit> triggered from a leaf method:    OK
java.lang.ExceptionInInitializerError
   at extest.main(extest.java)
Caused by: java.lang.NullPointerException
   at extest_clinit_patcher.<clinit>(extest.java)
   at extest.main(extest.java)


exception related things----------------------------------

load/link an exception class in asmpart:               OK
java.lang.Exception
   at extest.main(extest.java)


native stub exceptions------------------------------------

NullPointerException in <clinit>:                      OK
java.lang.ExceptionInInitializerError
   at extest.main(extest.java)
Caused by: java.lang.NullPointerException
   at extest_clinit.<clinit>(extest.java)
   at extest.main(extest.java)

UnsatisfiedLinkError:                                  OK
java.lang.UnsatisfiedLinkError: extest.nsub()V
   at extest.main(extest.java)

NullPointerException (native):                         OK
java.lang.NullPointerException
   at java.lang.System.arraycopy(System.java)
   at extest.main(extest.java)


special exceptions----------------------------------------

OutOfMemoryError (array clone):                        OK
java.lang.OutOfMemoryError: Java heap space
   at [B.clone(Native Method)
   at extest.main(extest.java)


exception thrown to command-line--------------------------

NullPointerException (without catch):
Exception in thread "main" java.lang.NullPointerException
   at extest.main(extest.java)
