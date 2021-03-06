--TEST--
Test session_id() function : error functionality
--SKIPIF--
<?php include('skipif.inc'); ?>
--INI--
session.hash_function=0
session.hash_bits_per_character=4
--FILE--
<?php

ob_start();

/* 
 * Prototype : string session_id([string $id])
 * Description : Get and/or set the current session id
 * Source code : ext/session/session.c 
 */

echo "*** Testing session_id() : error functionality ***\n";

var_dump(ini_set("session.hash_function", -1));
var_dump(session_id());
var_dump(session_start());
var_dump(session_id());
var_dump(session_destroy());

echo "Done";
ob_end_flush();
?>
--EXPECTF--
*** Testing session_id() : error functionality ***
string(1) "0"
string(0) ""
bool(true)
string(40) "%s"
bool(true)
Done
