/********************************************************************
* Description: rs274ngc_errors.cc
*
*   Derived from a work by Thomas Kramer
*
* Author:
* License: GPL Version 2
* System: Linux
*    
* Copyright (c) 2004 All rights reserved.
*
* Last change:
* $Revision$
* $Author$
* $Date$
********************************************************************/
#include <libintl.h>
#ifdef USE_NLS
#define _(string) gettext(string)
#else
#define _(string) (string)
#endif

char * _rs274ngc_errors[] = {
/*   0 */ _("No error"),
/*   1 */ _("No error"),
/*   2 */ _("No error"),
/*   3 */ _("No error"),
/*   4 */ _("A file is already open"), // rs274ngc_open
/*   5 */ _("All axes missing with g92"), // enhance_block
/*   6 */ _("All axes missing with motion code"), // enhance_block
/*   7 */ _("Arc radius too small to reach end point"), // arc_data_r
/*   8 */ _("Argument to acos out of range"), // execute_unary
/*   9 */ _("Argument to asin out of range"), // execute_unary
/*  10 */ _("Attempt to divide by zero"), // execute_binary1
/*  11 */ _("Attempt to raise negative to non integer power"), // execute_binary1
/*  12 */ _("Bad character used"), // read_one_item
/*  13 */ _("Bad format unsigned integer"), // read_integer_unsigned
/*  14 */ _("Bad number format"), // read_real_number
/*  15 */ _("Bug bad g code modal group 0"), // check_g_codes
/*  16 */ _("Bug code not g0 or g1"), // convert_straight, convert_straight_comp1, convert_straight_comp2
/*  17 */ _("Bug code not g17 g18 or g19"), // convert_set_plane
/*  18 */ _("Bug code not g20 or g21"), // convert_length_units
/*  19 */ _("Bug code not g28 or g30"), // convert_home
/*  20 */ _("Bug code not g2 or g3"), // arc_data_comp_ijk, arc_data_ijk
/*  21 */ _("Bug code not g40 g41 or g42"), // convert_cutter_compensation
/*  22 */ _("Bug code not g43 or g49"), // convert_tool_length_offset
/*  23 */ _("Bug code not g4 g10 g28 g30 g53 or g92 series"), // convert_modal_0
/*  24 */ _("Bug code not g61 g61 1 or g64"), // convert_control_mode
/*  25 */ _("Bug code not g90 or g91"), // convert_distance_mode
/*  26 */ _("Bug code not g93 or g94"), // convert_feed_mode
/*  27 */ _("Bug code not g98 or g99"), // convert_retract_mode
/*  28 */ _("Bug code not in g92 series"), // convert_axis_offsets
/*  29 */ _("Bug code not in range g54 to g593"), // convert_coordinate_system
/*  30 */ _("Bug code not m0 m1 m2 m30 m60"), // convert_stop
/*  31 */ _("Bug distance mode not g90 or g91"), // convert_cycle_xy, convert_cycle_yz, convert_cycle_zx
/*  32 */ _("Bug function should not have been called"), // convert_cycle_xy, convert_cycle_yz, convert_cycle_zx, read_a, read_b, read_c, read_comment, read_d, read_f, read_g, read_h, read_i, read_j, read_k, read_l, read_line_number, read_m, read_p, read_parameter, read_parameter_setting, read_q, read_r, read_real_expression, read_s, read_t, read_x, read_y, read_z
/*  33 */ _("Bug in tool radius comp"), // arc_data_comp_r
/*  34 */ _("Bug plane not xy yz or xz"), // convert_arc, convert_cycle
/*  35 */ _("Bug side not right or left"), // convert_straight_comp1, convert_straight_comp2
/*  36 */ _("Bug unknown motion code"), // convert_motion
/*  37 */ _("Bug unknown operation"), // execute_binary1, execute_binary2, execute_unary
/*  38 */ _("Cannot change axis offsets with cutter radius comp"), // convert_axis_offsets
/*  39 */ _("Cannot change units with cutter radius comp"), // convert_length_units
/*  40 */ _("Cannot create backup file"), // rs274ngc_save_parameters
/*  41 */ _("Cannot do g1 with zero feed rate"), // convert_straight
/*  42 */ _("Cannot do zero repeats of cycle"), // convert_cycle
/*  43 */ _("Cannot make arc with zero feed rate"), // convert_arc
/*  44 */ _("Cannot move rotary axes during probing"), // convert_probe
/*  45 */ _("Cannot open backup file"), // rs274ngc_save_parameters
/*  46 */ _("Cannot open variable file"), // rs274ngc_save_parameters
/*  47 */ _("Cannot probe in inverse time feed mode"), // convert_probe
/*  48 */ _("Cannot probe with cutter radius comp on"), // convert_probe
/*  49 */ _("Cannot probe with zero feed rate"), // convert_probe
/*  50 */ _("Cannot put a b in canned cycle"), // check_other_codes
/*  51 */ _("Cannot put a c in canned cycle"), // check_other_codes
/*  52 */ _("Cannot put an a in canned cycle"), // check_other_codes
/*  53 */ _("Cannot turn cutter radius comp on out of xy plane"), // convert_cutter_compensation_on
/*  54 */ _("Cannot turn cutter radius comp on when on"), // convert_cutter_compensation_on
/*  55 */ _("Cannot use a word"), // read_a
/*  56 */ _("Cannot use axis values with g80"), // enhance_block
/*  57 */ _("Cannot use axis values without a g code that uses them"), // enhance_block
/*  58 */ _("Cannot use b word"), // read_b
/*  59 */ _("Cannot use c word"), // read_c
/*  60 */ _("Cannot use g28 or g30 with cutter radius comp"), // convert_home
/*  61 */ _("Cannot use g53 incremental"), // check_g_codes
/*  62 */ _("Cannot use g53 with cutter radius comp"), // convert_straight
/*  63 */ _("Cannot use two g codes that both use axis values"), // enhance_block
/*  64 */ _("Cannot use xz plane with cutter radius comp"), // convert_set_plane
/*  65 */ _("Cannot use yz plane with cutter radius comp"), // convert_set_plane
/*  66 */ _("Command too long"), // read_text, rs274ngc_open
/*  67 */ _("Concave corner with cutter radius comp"), // convert_arc_comp2, convert_straight_comp2
/*  68 */ _("Coordinate system index parameter 5220 out of range"), // rs274ngc_init
/*  69 */ _("Current point same as end point of arc"), // arc_data_r
/*  70 */ _("Cutter gouging with cutter radius comp"), // convert_arc_comp1, convert_straight_comp1
/*  71 */ _("D word with no g41 or g42"), // check_other_codes
/*  72 */ _("Dwell time missing with g4"), // check_g_codes
/*  73 */ _("Dwell time p word missing with g82"), // convert_cycle_xy, convert_cycle_yz, convert_cycle_zx
/*  74 */ _("Dwell time p word missing with g86"), // convert_cycle_xy, convert_cycle_yz, convert_cycle_zx
/*  75 */ _("Dwell time p word missing with g88"), // convert_cycle_xy, convert_cycle_yz, convert_cycle_zx
/*  76 */ _("Dwell time p word missing with g89"), // convert_cycle_xy, convert_cycle_yz, convert_cycle_zx
/*  77 */ _("Equal sign missing in parameter setting"), // read_parameter_setting
/*  78 */ _("F word missing with inverse time arc move"), // convert_arc
/*  79 */ _("F word missing with inverse time g1 move"), // convert_straight
/*  80 */ _("File ended with no percent sign"), // read_text, rs274ngc_open
/*  81 */ _("File ended with no percent sign or program end"), // read_text
/*  82 */ _("File name too long"), // rs274ngc_open
/*  83 */ _("File not open"), // rs274ngc_read
/*  84 */ _("G code out of range"), // read_g
/*  85 */ _("H word with no g43"), // check_other_codes
/*  86 */ _("I word given for arc in yz plane"), // convert_arc
/*  87 */ _("I word missing with g87"), // convert_cycle_xy, convert_cycle_yz, convert_cycle_zx
/*  88 */ _("I word with no g2 or g3 or g87 to use it"), // check_other_codes
/*  89 */ _("J word given for arc in xz plane"), // convert_arc
/*  90 */ _("J word missing with g87"), // convert_cycle_xy, convert_cycle_yz, convert_cycle_zx
/*  91 */ _("J word with no g2 or g3 or g87 to use it"), // check_other_codes
/*  92 */ _("K word given for arc in xy plane"), // convert_arc
/*  93 */ _("K word missing with g87"), // convert_cycle_xy, convert_cycle_yz, convert_cycle_zx
/*  94 */ _("K word with no g2 or g3 or g87 to use it"), // check_other_codes
/*  95 */ _("L word with no canned cycle or g10"), // check_other_codes
/*  96 */ _("Left bracket missing after slash with atan"), // read_atan
/*  97 */ _("Left bracket missing after unary operation name"), // read_unary
/*  98 */ _("Line number greater than 99999"), // read_line_number
/*  99 */ _("Line with g10 does not have l2"), // check_g_codes
/* 100 */ _("M code greater than 99"), // read_m
/* 101 */ _("Mixed radius ijk format for arc"), // convert_arc
/* 102 */ _("Multiple a words on one line"), // read_a
/* 103 */ _("Multiple b words on one line"), // read_b
/* 104 */ _("Multiple c words on one line"), // read_c
/* 105 */ _("Multiple d words on one line"), // read_d
/* 106 */ _("Multiple f words on one line"), // read_f
/* 107 */ _("Multiple h words on one line"), // read_h
/* 108 */ _("Multiple i words on one line"), // read_i
/* 109 */ _("Multiple j words on one line"), // read_j
/* 110 */ _("Multiple k words on one line"), // read_k
/* 111 */ _("Multiple l words on one line"), // read_l
/* 112 */ _("Multiple p words on one line"), // read_p
/* 113 */ _("Multiple q words on one line"), // read_q
/* 114 */ _("Multiple r words on one line"), // read_r
/* 115 */ _("Multiple s words on one line"), // read_s
/* 116 */ _("Multiple t words on one line"), // read_t
/* 117 */ _("Multiple x words on one line"), // read_x
/* 118 */ _("Multiple y words on one line"), // read_y
/* 119 */ _("Multiple z words on one line"), // read_z
/* 120 */ _("Must use g0 or g1 with g53"), // check_g_codes
/* 121 */ _("Negative argument to sqrt"), // execute_unary
/* 122 */ _("Negative d word tool radius index used"), // read_d
/* 123 */ _("Negative f word used"), // read_f
/* 124 */ _("Negative g code used"), // read_g
/* 125 */ _("Negative h word tool length offset index used"), // read_h
/* 126 */ _("Negative l word used"), // read_l
/* 127 */ _("Negative m code used"), // read_m
/* 128 */ _("Negative or zero q value used"), // read_q
/* 129 */ _("Negative p word used"), // read_p
/* 130 */ _("Negative spindle speed used"), // read_s
/* 131 */ _("Negative tool id used"), // read_t
/* 132 */ _("Nested comment found"), // close_and_downcase
/* 133 */ _("No characters found in reading real value"), // read_real_value
/* 134 */ _("No digits found where real number should be"), // read_real_number
/* 135 */ _("Non integer value for integer"), // read_integer_value
/* 136 */ _("Null missing after newline"), // close_and_downcase
/* 137 */ _("Offset index missing"), // convert_tool_length_offset
/* 138 */ _("P value not an integer with g10 l2"), // check_g_codes
/* 139 */ _("P value out of range with g10 l2"), // check_g_codes
/* 140 */ _("P word with no g4 g10 g82 g86 g88 g89"), // check_other_codes
/* 141 */ _("Parameter file out of order"), // rs274ngc_restore_parameters, rs274ngc_save_parameters
/* 142 */ _("Parameter number out of range"), // read_parameter, read_parameter_setting, rs274ngc_restore_parameters, rs274ngc_save_parameters
/* 143 */ _("Q word missing with g83"), // convert_cycle_xy, convert_cycle_yz, convert_cycle_zx
/* 144 */ _("Q word with no g83"), // check_other_codes
/* 145 */ _("Queue is not empty after probing"), // rs274ngc_read
/* 146 */ _("R clearance plane unspecified in cycle"), // convert_cycle
/* 147 */ _("R i j k words all missing for arc"), // convert_arc
/* 148 */ _("R less than x in cycle in yz plane"), // convert_cycle_yz
/* 149 */ _("R less than y in cycle in xz plane"), // convert_cycle_zx
/* 150 */ _("R less than z in cycle in xy plane"), // convert_cycle_xy
/* 151 */ _("R word with no g code that uses it"), // check_other_codes
/* 152 */ _("Radius to end of arc differs from radius to start"), // arc_data_comp_ijk, arc_data_ijk
/* 153 */ _("Radius too small to reach end point"), // arc_data_comp_r
/* 154 */ _("Required parameter missing"), // rs274ngc_restore_parameters
/* 155 */ _("Selected tool slot number too large"), // convert_tool_select
/* 156 */ _("Slash missing after first atan argument"), // read_atan
/* 157 */ _("Spindle not turning clockwise in g84"), // convert_cycle_g84
/* 158 */ _("Spindle not turning in g86"), // convert_cycle_g86
/* 159 */ _("Spindle not turning in g87"), // convert_cycle_g87
/* 160 */ _("Spindle not turning in g88"), // convert_cycle_g88
/* 161 */ _("Sscanf failed"), // read_integer_unsigned, read_real_number
/* 162 */ _("Start point too close to probe point"), // convert_probe
/* 163 */ _("Too many m codes on line"), // check_m_codes
/* 164 */ _("Tool length offset index too big"), // read_h
/* 165 */ _("Tool max too large"), // rs274ngc_load_tool_table
/* 166 */ _("Tool radius index too big"), // read_d
/* 167 */ _("Tool radius not less than arc radius with comp"), // arc_data_comp_r, convert_arc_comp2
/* 168 */ _("Two g codes used from same modal group"), // read_g
/* 169 */ _("Two m codes used from same modal group"), // read_m
/* 170 */ _("Unable to open file"), // convert_stop, rs274ngc_open, rs274ngc_restore_parameters
/* 171 */ _("Unclosed comment found"), // close_and_downcase
/* 172 */ _("Unclosed expression"), // read_operation
/* 173 */ _("Unknown g code used"), // read_g
/* 174 */ _("Unknown m code used"), // read_m
/* 175 */ _("Unknown operation"), // read_operation
/* 176 */ _("Unknown operation name starting with a"), // read_operation
/* 177 */ _("Unknown operation name starting with m"), // read_operation
/* 178 */ _("Unknown operation name starting with o"), // read_operation
/* 179 */ _("Unknown operation name starting with x"), // read_operation
/* 180 */ _("Unknown word starting with a"), // read_operation_unary
/* 181 */ _("Unknown word starting with c"), // read_operation_unary
/* 182 */ _("Unknown word starting with e"), // read_operation_unary
/* 183 */ _("Unknown word starting with f"), // read_operation_unary
/* 184 */ _("Unknown word starting with l"), // read_operation_unary
/* 185 */ _("Unknown word starting with r"), // read_operation_unary
/* 186 */ _("Unknown word starting with s"), // read_operation_unary
/* 187 */ _("Unknown word starting with t"), // read_operation_unary
/* 188 */ _("Unknown word where unary operation could be"), // read_operation_unary
/* 189 */ _("X and y words missing for arc in xy plane"), // convert_arc
/* 190 */ _("X and z words missing for arc in xz plane"), // convert_arc
/* 191 */ _("X value unspecified in yz plane canned cycle"), // convert_cycle_yz
/* 192 */ _("X y and z words all missing with g38 2"), // convert_probe
/* 193 */ _("Y and z words missing for arc in yz plane"), // convert_arc
/* 194 */ _("Y value unspecified in xz plane canned cycle"), // convert_cycle_zx
/* 195 */ _("Z value unspecified in xy plane canned cycle"), // convert_cycle_xy
/* 196 */ _("Zero or negative argument to ln"), // execute_unary
/* 197 */ _("Zero radius arc"), // arc_data_ijk
_("The End")};
