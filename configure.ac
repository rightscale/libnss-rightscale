#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ(2.61)
AC_INIT([libnss-rightscale], [0.1])
AM_INIT_AUTOMAKE
AC_CONFIG_SRCDIR([utils.h])
AC_CONFIG_HEADER([config.h])
AC_PREFIX_DEFAULT([/usr])

AC_ARG_ENABLE(debug, 
    AC_HELP_STRING([--enable-debug],
            [Enable debug statements using syslog]),
    AC_DEFINE([DEBUG], [], [Enable debugging])
    CFLAGS="$CFLAGS -g")



# Checks for programs.
AC_PROG_CC
AC_PROG_LIBTOOL

# Checks for header files.
AC_HEADER_STDC
AC_CHECK_HEADERS([errno.h grp.h malloc.h nss.h pthread.h pwd.h shadow.h stdio.h stdlib.h string.h sys/types.h unistd.h],
    [], AC_MSG_ERROR([Missing headers]))

# Checks for typedefs, structures, and compiler characteristics.
AC_C_CONST
AC_TYPE_UID_T
AC_TYPE_SIZE_T

# Checks for library functions.
AC_FUNC_MALLOC
AC_FUNC_REALLOC
AC_CHECK_FUNCS([strdup])

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
