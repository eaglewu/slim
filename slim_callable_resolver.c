//
// Created by eagle on 15/11/4.
//
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_slim.h"
#include "slim_callable_resolver.h"

zend_class_entry *slim_callable_resolver_ce;

/** 构造函数 **/
PHP_METHOD(slim_callable_resolver, __construct)
{

}

/** 方法参数个数声明 **/
ZEND_BEGIN_ARG_INFO_EX(slim_callable_resolver_void_arginfo, 0, 0, 0)
ZEND_END_ARG_INFO()

zend_function_entry slim_callable_resolver_methods[] = {
   PHP_ME(slim_callable_resolver,     __construct,    slim_callable_resolver_void_arginfo,    ZEND_ACC_PUBLIC | ZEND_ACC_CTOR)
   {NULL, NULL, NULL}
};

SLIM_MINIT_FUNCTION(callable_resolver)
{
   //声明属性,设置累修饰符等
   zend_class_entry ce;
   INIT_CLASS_ENTRY(ce, "Slim\\CallableResolver", slim_callable_resolver_methods);
   slim_callable_resolver_ce = zend_register_internal_class_ex(&ce, NULL, NULL TSRMLS_CC);
   //slim_callable_resolver_ce->ce_flags |= ZEND_ACC_FINAL_CLASS;

   return SUCCESS;
}
