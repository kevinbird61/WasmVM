include_directories(${PROJECT_ROOT}/src/lib/stages/decoder)

macro(add_decoder_unittest unittest)
    add_unittest(${unittest} lib/decoder/)
endmacro(add_decoder_unittest unittest)

add_decoder_unittest(decode_magic_version_unittest)
add_decoder_unittest(decode_type_unittest)
add_decoder_unittest(decode_import_unittest)
add_decoder_unittest(decode_function_unittest)
add_decoder_unittest(decode_table_unittest)
add_decoder_unittest(decode_memory_unittest)
add_decoder_unittest(decode_global_unittest)
add_decoder_unittest(decode_export_unittest)
add_decoder_unittest(decode_start_unittest)
add_decoder_unittest(decode_element_unittest)
add_decoder_unittest(decode_code_unittest)
add_decoder_unittest(decode_data_unittest)
add_decoder_unittest(parse_instr_unittest)
add_decoder_unittest(parse_control_unittest)
add_decoder_unittest(parse_parametric_unittest)
add_decoder_unittest(parse_variable_unittest)
add_decoder_unittest(parse_memory_unittest)
add_decoder_unittest(parse_numeric_unittest)