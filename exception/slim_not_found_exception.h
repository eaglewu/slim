//
// Created by eagle on 15/11/4.
//
#ifndef PHP_SLIM_H
#include "php.h"
#include "php_slim.h"
#endif

#ifndef SLIM_NOT_FOUND_EXCEPTION_H
#define SLIM_NOT_FOUND_EXCEPTION_H

extern zend_class_entry *slim_not_found_exception_ce;
SLIM_MINIT_FUNCTION(not_found_exception);

#endif //SLIM_NOT_FOUND_EXCEPTION_H