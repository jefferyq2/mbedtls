/* MBEDTLS_USER_CONFIG_FILE for testing.
 * Only used for a few test configurations.
 *
 * Typical usage (note multiple levels of quoting):
 *     make CFLAGS="'-DMBEDTLS_USER_CONFIG_FILE=\"../tests/configs/tls13-only-prototype-no-middlebox.h\"'"
 */

/*
 *  Copyright The Mbed TLS Contributors
 *  SPDX-License-Identifier: Apache-2.0
 *
 *  Licensed under the Apache License, Version 2.0 (the "License"); you may
 *  not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 *  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#include "tls13-only-prototype.h"
#undef MBEDTLS_SSL_TLS1_3_COMPATIBILITY_MODE
