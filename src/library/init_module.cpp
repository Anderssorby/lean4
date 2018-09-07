/*
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include "library/trace.h"
#include "library/constants.h"
#include "library/class.h"
#include "library/num.h"
#include "library/string.h"
#include "library/annotation.h"
#include "library/quote.h"
#include "library/explicit.h"
#include "library/module.h"
#include "library/protected.h"
#include "library/private.h"
#include "library/scoped_ext.h"
#include "library/reducible.h"
#include "library/aliases.h"
#include "library/export_decl.h"
#include "library/io_state.h"
#include "library/idx_metavar.h"
#include "library/placeholder.h"
#include "library/print.h"
#include "library/fingerprint.h"
#include "library/util.h"
#include "library/pp_options.h"
#include "library/projection.h"
#include "library/relation_manager.h"
#include "library/user_recursors.h"
#include "library/noncomputable.h"
#include "library/aux_recursors.h"
#include "library/abstract_context_cache.h"
#include "library/type_context.h"
#include "library/local_context.h"
#include "library/metavar_context.h"
#include "library/attribute_manager.h"
#include "library/app_builder.h"
#include "library/fun_info.h"
#include "library/pattern_attribute.h"
#include "library/comp_val.h"
#include "library/documentation.h"
#include "library/check.h"
#include "library/parray.h"
#include "library/profiling.h"
#include "library/time_task.h"
#include "library/error_msgs.h"
#include "library/formatter.h"
#include "library/pos_info_provider.h"
#include "library/derive_attribute.h"

namespace lean {
void initialize_library_core_module() {
    initialize_pos_info_provider();
    initialize_error_msgs();
    initialize_formatter();
    initialize_constants();
    initialize_profiling();
    initialize_trace();
    initialize_module();
    initialize_scoped_ext();
    initialize_attribute_manager();
    initialize_derive_attribute();
}

void finalize_library_core_module() {
    finalize_derive_attribute();
    finalize_attribute_manager();
    finalize_scoped_ext();
    finalize_module();
    finalize_trace();
    finalize_profiling();
    finalize_constants();
    finalize_formatter();
    finalize_error_msgs();
    finalize_pos_info_provider();
}

void initialize_library_module() {
    initialize_local_context();
    initialize_metavar_context();
    initialize_fingerprint();
    initialize_print();
    initialize_placeholder();
    initialize_idx_metavar();
    initialize_io_state();
    initialize_string();
    initialize_num();
    initialize_annotation();
    initialize_explicit();
    initialize_protected();
    initialize_private();
    initialize_reducible();
    initialize_aliases();
    initialize_export_decl();
    initialize_class();
    initialize_library_util();
    initialize_quote();
    initialize_pp_options();
    initialize_projection();
    initialize_relation_manager();
    initialize_user_recursors();
    initialize_noncomputable();
    initialize_aux_recursors();
    initialize_app_builder();
    initialize_fun_info();
    initialize_abstract_context_cache();
    initialize_type_context();
    initialize_pattern_attribute();
    initialize_comp_val();
    initialize_documentation();
    initialize_check();
    initialize_parray();
    initialize_time_task();
}

void finalize_library_module() {
    finalize_time_task();
    finalize_parray();
    finalize_check();
    finalize_documentation();
    finalize_comp_val();
    finalize_pattern_attribute();
    finalize_type_context();
    finalize_abstract_context_cache();
    finalize_fun_info();
    finalize_app_builder();
    finalize_aux_recursors();
    finalize_noncomputable();
    finalize_user_recursors();
    finalize_relation_manager();
    finalize_projection();
    finalize_pp_options();
    finalize_quote();
    finalize_library_util();
    finalize_class();
    finalize_export_decl();
    finalize_aliases();
    finalize_reducible();
    finalize_private();
    finalize_protected();
    finalize_explicit();
    finalize_annotation();
    finalize_num();
    finalize_string();
    finalize_io_state();
    finalize_idx_metavar();
    finalize_placeholder();
    finalize_print();
    finalize_fingerprint();
    finalize_metavar_context();
    finalize_local_context();
}
}
