/* kim/lib/kim_error_private.h */
/*
 * Copyright 2006 Massachusetts Institute of Technology.
 * All Rights Reserved.
 *
 * Export of this software from the United States of America may
 * require a specific license from the United States Government.
 * It is the responsibility of any person or organization contemplating
 * export to obtain such a license before exporting.
 *
 * WITHIN THAT CONSTRAINT, permission to use, copy, modify, and
 * distribute this software and its documentation for any purpose and
 * without fee is hereby granted, provided that the above copyright
 * notice appear in all copies and that both that copyright notice and
 * this permission notice appear in supporting documentation, and that
 * the name of M.I.T. not be used in advertising or publicity pertaining
 * to distribution of the software without specific, written prior
 * permission.  Furthermore if you modify this software you must label
 * your software as modified software and not distribute it in such a
 * fashion that it might be confused with the original M.I.T. software.
 * M.I.T. makes no representations about the suitability of
 * this software for any purpose.  It is provided "as is" without express
 * or implied warranty.
 */

#ifndef KIM_ERROR_PRIVATE_H
#define KIM_ERROR_PRIVATE_H

#include <kim/kim.h>

kim_error kim_error_set_message_for_code (kim_error in_code,
                                          ...);
kim_error kim_error_set_message_for_code_va (kim_error in_code,
                                             va_list   in_args);
kim_error kim_error_set_message_for_krb5_error (krb5_context    in_context,
                                                krb5_error_code in_code);

#define krb5_error(context,code) kim_error_set_message_for_krb5_error(context, code)

kim_string kim_error_message (kim_error in_error);

#endif /* KIM_ERROR_PRIVATE_H */