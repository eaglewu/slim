//
// Created by eagle on 15/11/4.
//
#ifndef PHP_SLIM_H
#include "php.h"
#include "php_slim.h"
#endif

#ifndef SLIM_ENVIRONMENT_H
#define SLIM_ENVIRONMENT_H

extern zend_class_entry *slim_environment_ce;
SLIM_MINIT_FUNCTION(environment);

#endif //SLIM_ENVIRONMENT_H