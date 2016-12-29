﻿#include "StringTables.h"

const std::map <std::string, std::string> StringTables::errorMessage = {
	// INPUT ERROR
	{ "EMP_IN", "Empty input" },
	{ "ERR_IN", "Too large or small input" },
	{ "NOT_NUM", "Not a positive number!" },
	{ "SV_ERR", "FAILED to SAVE config" },
	{ "LD_ERR", "FAILED to LOAD config" },
	{ "KW_ERR", "Unsupported operation or notation" },
	{ "UNSUP", "Unsupported in current version" },
	// OUTPUT ERROR
	{ "OUT_ERR", "Failed to output file" },
	// PAGE ERROR
	{ "S_FNL", "Final page of stack" },
	{ "S_FST", "First page of stack" },
	{ "R_FNL", "Final page of register" },
	{ "R_FST", "First page of register" },
	// HISTORY ERROR
	{ "H_EMP", "No history" },
	{ "H_OLD", "No older history" },
	{ "H_NEW", "Latest history" },
	{ "H_OFF", "History is disabled" },
	// ARGUMENT ERROR
	{ "BAD_TYPE", "Bad argument type" },
	{ "BAD_VAL", "Invalid value" },
	{ "BAD_RNG", "Invalid range" },
	{ "MAX_INT", "Maximum integer" },
	{ "MIN_INT", "Minimum integer" },
	{ "TOO_LRGE", "Too large to operate" },
	{ "DIV_ZERO", "Division by zero" },
	{ "LOG_ZERO", "Logarithm of zero" },
	{ "ZPOWZ", "Zero-th power of zero" },
	{ "ZPOWN", "Negative-th power of zero" },
	{ "DET_ZERO", "Determinant is zero" },
	{ "BAD_ELM", "Bad element" },
	{ "BAD_TSIZ", "Bad tuple size" },
	{ "BAD_MSIZ", "Bad matrix size" },
	{ "NOT_PINT", "Not a positive integer" },
	// STACK ERROR
	{ "S_EMPTY", "Stack is empty" },
	{ "SR_EMPTY", "Stack and registers are empty" },
	{ "FEW_ARG", "Too few arguments" },
	{ "R_EMPTY", "Registers are empty" },
	{ "REG_ND", "Selected register is empty" },
	{ "STK_WAIT", "Waiting for input" },
	{ "BAD_CNT", "Bad argument count" },
	{ "BAD_STR", "Bad string" },
	// INPUT ERROR
	{ "INV_IN", "Invalid input" },
	{ "CNV_ERR", "Invalid conversion" },
};

const std::map <std::string, std::string> StringTables::noticeMessage = {
	{ "ERR_CALC", "Error calculation" },
	{ "FLT_OF", "Floating overflow" },
	{ "RAT_OF", "Rational overflow" },
	{ "INT_OF", "Integer overflow" },
};

const std::map <std::string, std::string> StringTables::confirmMessage = {
	{ "CNFM", "Confirm: yes/no" },
	{ "WAIT_INT", "Input a positive integer" },
	{ "S_MIN", "Minimum value set" },
	{ "S_MAX", "Maximum value set" },
	{ "S_NRM", "Setting completed" },
	{ "DONE", "Done" },
	{ "CNCL", "Cancelled" },
	{ "SAVED", "Saving completed" },
	{ "LOADED", "Loading completed" },
	{ "UNIT", "Input unit" },
};

const std::map <std::string, std::string> StringTables::pushMessage = {
	{ "STR", "String" },
	{ "INT", "Integer" },
	{ "DEC", "Decimal" },
	{ "EXP", "Exponent" },
	{ "IINT", "Imaginary Integer" },
	{ "IDEC", "Imaginary Decimal" },
	{ "IEXP", "Imaginary Exponential" },
	{ "INF", "Infinity" },
	{ "BOL", "Boolean" },
	{ "DEC", "Decimal" },
	{ "UDEC", "Unsigned" },
	{ "BIN", "Binary" },
	{ "OCT", "Octal" },
	{ "ZOCT", "Zero-start octal" },
	{ "HEX", "Hexadecimal" },
};

const std::map <std::string, std::string> StringTables::prefixMessage = {
	{ "YOCTO", "Yocto: 1.0E-24" },
	{ "ZEPTO", "Zepto: 1.0E-21" },
	{ "FEMTO", "Femto: 1.0E-18" },
	{ "ATTO", "Atto: 1.0E-15" },
	{ "PICO", "Pico: 1.0E-12" },
	{ "NANO", "Nano: 1.0E-09" },
	{ "MICRO", "Micro: 1.0E-06" },
	{ "MILLI", "Milli: 1.0E-03" },
	{ "CENTI", "Centi: 1.0E-02" },
	{ "DECI", "Deci: 1.0E-01" },
	{ "DECA", "Deca: 1.0E+01" },
	{ "HECTO", "Hecto: 1.0E+02" },
	{ "KILO", "Kilo: 1.0E+03" },
	{ "MEGA", "Mega: 1.0E+06" },
	{ "GIGA", "Giga: 1.0E+09" },
	{ "TERA", "Tera: 1.0E+12" },
	{ "PETA", "Peta: 1.0E+15" },
	{ "EXA", "Exa: 1.0E+18" },
	{ "ZETTA", "Zetta: 1.0E+21" },
	{ "YOTTA", "Yotta: 1.0E+24" },
	{ "KIBI", "Kibi: 1024^1" },
	{ "MEBI", "Mebi: 1024^2" },
	{ "GIBI", "Gibi: 1024^3" },
	{ "TEBI", "Tebi: 1024^4" },
	{ "PEBI", "Pebi: 1024^5" },
	{ "EXBI", "Exbi: 1024^6" },
	{ "ZEBI", "Zebi: 1024^7" },
	{ "YOBI", "Yobi: 1024^8" },
};

const std::map <std::string, std::string> StringTables::instructionMessage = {
	{ "CF_NOP", "ECKERT Config" },
	{ "CF_HIST", "Set history size" },
	{ "CF_WIDT", "Set display width" },
	{ "CF_LINE", "Set display lines" },
	{ "CF_SAVE", "Save config" },
	{ "CF_LOAD", "Load config" },
	{ "CF_REST", "Reset config" },
	// Error, initialize
	{ "ERROR", "OPERATIONAL ERROR" },
	{ "INIT", "Welcome to ECKERT!" },
	{ "H_NOP", "Engineering Stack Calculator HOMURA" },
	{ "H_JSON", "JSON output" },
	// Configurations
	{ "H_REST", "RESET ALL" },
	{ "D_STD", "SET STANDARD DIGITS" },
	{ "D_FIX", "SET FIXED DIGITS" },
	{ "D_SCI", "SET SCIENTIFIC DIGITS" },
	{ "D_ENG", "SET ENGINEERING DIGITS" },
	// Display mode
	{ "M_AD", "AUTO DECIMAL display" },
	{ "M_FD", "FORCE DECIMAL display" },
	{ "M_FF", "FORCE FRACTIONAL display" },
	{ "M_ADEG", "DEGREE angle mode" },
	{ "M_ARAD", "RADIAN angle mode" },
	{ "M_AGRA", "GRADE angle mode" },
	{ "M_FSTD", "STANDARD floating display" },
	{ "M_FFIX", "FIXED floating display" },
	{ "M_FSCI", "SCIENTIFIC floating display" },
	{ "M_FENG", "ENGINEERING floating display" },
	{ "M_ROFF", "REGISTER display disabled" },
	{ "M_RON", "REGISTER display enabled" },
	{ "M_AOFF", "APPROX display disabled" },
	{ "M_AON", "APPROX display enabled" },
	{ "M_EOFF", "EULER display disabled" },
	{ "M_EON", "EULER display enabled" },
	{ "M_TOFF", "TYPE display disabled" },
	{ "M_TLNG", "TYPE display enabled" },
	{ "M_TSHT", "SHORT TYPE display enabled" },
	{ "M_PROV", "PROVISIONAL RATIONAL display" },
	{ "M_MIX", "MIXED RATIONAL display" },
	// Unit conversion
	{ "H_CONV", "UNIT CONVERSION" },
	{ "H_REC", "UNIT CONVERSION (REDO)" },
	// Macro
	{ "H_MACRO", "RUN MACRO" },
	// History
	{ "HS_UNDO", "UNDO" },
	{ "HS_REDO", "REDO" },
	// Page
	{ "SP_NXT", "NEXT PAGE of STACK" },
	{ "SP_PRV", "PREVIOUS PAGE of STACK" },
	{ "SP_FST", "FIRST PAGE of STACK" },
	{ "RP_NXT", "NEXT PAGE of REGISTERS" },
	{ "RP_PRV", "PREVIOUS PAGE of REGISTERS" },
	{ "RP_RFST", "FIRST PAGE of REGISTERS" },
	// Clear
	{ "OP_AC", "ALL CLEAR" },
	{ "OP_SC", "STACK CLEAR" },
	{ "OP_RC", "REGISTER CLEAR" },
	// Stack operation
	{ "PUSH_N", "PUSH" },
	{ "PUSH_B", "PUSH" },
	{ "PUSH_C", "PUSH Constant" },
	{ "PUSH_S", "PUSH" },
	{ "OP_DUP", "DUPLICATE" },
	{ "OP_SWAP", "SWAP Y and X" },
	{ "OP_OVER", "OVER" },
	{ "OP_DROP", "DROP" },
	{ "OP_SROT", "ROTATE" },
	{ "OP_SURT", "UNROTATE" },
	{ "OP_ROLL", "ROLL" },
	{ "OP_ROLD", "ROLL.D" },
	{ "OP_PICK", "PICK" },
	{ "OP_UPIK", "UNPICK" },
	//{ "OP_PIK3", "PICK 3rd ITEM" },
	{ "OP_DPTH", "NUMBER of STACK ITEMS" },
	{ "OP_DUP2", "DUPLICATE LAST 2 ITEMS" },
	{ "OP_DUPN", "DUPLICATE LAST N ITEMS" },
	{ "OP_DRP2", "DROP 2 ITEMS" },
	{ "OP_DRP3", "DROP 3 ITEMS" },
	{ "OP_DRPN", "DROP N ITEMS" },
	{ "OP_DDUP", "DUPLICATE TWICE" },
	{ "OP_NIP", "NIP" },
	{ "OP_NIPN", "NIP N-th ITEM" },
	{ "OP_NDPN", "DUPLICATE LAST N-1 TIMES and PUSH N" },
	// Register opeartion
	{ "R_STO", "STORE to selected register" },
	{ "R_LD", "LOAD from selected register" },
	{ "R_DEL", "DELETE selected register" },
	{ "R_INC", "INCREMENT selected register" },
	{ "R_DEC", "DECREMENT selected register" },
	{ "R_ADD", "Register ADDITION" },
	{ "R_SUB", "Register SUBTRACTION" },
	{ "R_MUL", "Register MULTIPLICATION" },
	{ "R_DIV", "Register DIVISION" },
	// Metric prefix
	{ "OP_YOCT", "MULTIPLY by Yocto: 1.0E-24" },
	{ "OP_ZEPT", "MULTIPLY by Zepto: 1.0E-21" },
	{ "OP_ATTO", "MULTIPLY by Atto: 1.0E-18" },
	{ "OP_FEMT", "MULTIPLY by Femto: 1.0E-15" },
	{ "OP_PICO", "MULTIPLY by Pico: 1.0E-12" },
	{ "OP_NANO", "MULTIPLY by Nano: 1.0E-09" },
	{ "OP_MICR", "MULTIPLY by Micro: 1.0E-06" },
	{ "OP_MILL", "MULTIPLY by Milli: 1.0E-03" },
	{ "OP_CENT", "MULTIPLY by Centi: 1.0E-02" },
	{ "OP_DECI", "MULTIPLY by Deci: 1.0E-01" },
	{ "OP_DECA", "MULTIPLY by Deca: 1.0E+01" },
	{ "OP_HECT", "MULTIPLY by Hecto: 1.0E+02" },
	{ "OP_KILO", "MULTIPLY by Kilo: 1.0E+03" },
	{ "OP_MEGA", "MULTIPLY by Mega: 1.0E+06" },
	{ "OP_GIGA", "MULTIPLY by Giga: 1.0E+09" },
	{ "OP_TERA", "MULTIPLY by Tera: 1.0E+12" },
	{ "OP_PETA", "MULTIPLY by Peta: 1.0E+15" },
	{ "OP_EXA", "MULTIPLY by Exa: 1.0E+18" },
	{ "OP_ZETT", "MULTIPLY by Zetta: 1.0E+21" },
	{ "OP_YOTT", "MULTIPLY by Yotta: 1.0E+24" },
	{ "OP_KIBI", "MULTIPLY by Kibi: 1024^1" },
	{ "OP_MEBI", "MULTIPLY by Mebi: 1024^2" },
	{ "OP_GIBI", "MULTIPLY by Gibi: 1024^3" },
	{ "OP_TEBI", "MULTIPLY by Tebi: 1024^4" },
	{ "OP_PEBI", "MULTIPLY by Pebi: 1024^5" },
	{ "OP_EXBI", "MULTIPLY by Exbi: 1024^6" },
	{ "OP_ZEBI", "MULTIPLY by Zebi: 1024^7" },
	{ "OP_YOBI", "MULTIPLY by Yobi: 1024^8" },
	{ "OP_TYOCT", "DIVIDE by Yocto: 1.0E-24" },
	{ "OP_TZEPT", "DIVIDE by Zepto: 1.0E-21" },
	{ "OP_TATTO", "DIVIDE by Atto: 1.0E-18" },
	{ "OP_TFEMT", "DIVIDE by Femto: 1.0E-15" },
	{ "OP_TPICO", "DIVIDE by Pico: 1.0E-12" },
	{ "OP_TNANO", "DIVIDE by Nano: 1.0E-09" },
	{ "OP_TMICR", "DIVIDE by Micro: 1.0E-06" },
	{ "OP_TMILL", "DIVIDE by Milli: 1.0E-03" },
	{ "OP_TCENT", "DIVIDE by Centi: 1.0E-02" },
	{ "OP_TDECI", "DIVIDE by Deci: 1.0E-01" },
	{ "OP_TDECA", "DIVIDE by Deca: 1.0E+01" },
	{ "OP_THECT", "DIVIDE by Hecto: 1.0E+02" },
	{ "OP_TKILO", "DIVIDE by Kilo: 1.0E+03" },
	{ "OP_TMEGA", "DIVIDE by Mega: 1.0E+06" },
	{ "OP_TGIGA", "DIVIDE by Giga: 1.0E+09" },
	{ "OP_TTERA", "DIVIDE by Tera: 1.0E+12" },
	{ "OP_TPETA", "DIVIDE by Peta: 1.0E+15" },
	{ "OP_TEXA", "DIVIDE by Exa: 1.0E+18" },
	{ "OP_TZETT", "DIVIDE by Zetta: 1.0E+21" },
	{ "OP_TYOTT", "DIVIDE by Yotta: 1.0E+24" },
	{ "OP_TKIBI", "DIVIDE by Kibi: 1024^1" },
	{ "OP_TMEBI", "DIVIDE by Mebi: 1024^2" },
	{ "OP_TGIBI", "DIVIDE by Gibi: 1024^3" },
	{ "OP_TTEBI", "DIVIDE by Tebi: 1024^4" },
	{ "OP_TPEBI", "DIVIDE by Pebi: 1024^5" },
	{ "OP_TEXBI", "DIVIDE by Exbi: 1024^6" },
	{ "OP_TZEBI", "DIVIDE by Zebi: 1024^7" },
	{ "OP_TYOBI", "DIVIDE by Yobi: 1024^8" },
	// Cast
	{ "OP_CINT", "CAST into Integer" },
	{ "OP_CFLT", "CAST into Floating" },
	{ "OP_CRAT", "CAST into Rational" },
	{ "OP_CBOL", "CAST into Boolean" },
	{ "OP_CBYT", "CAST into Byte" },
	{ "OP_CWRD", "CAST into Word" },
	{ "OP_CDWD", "CAST into Dword" },
	{ "OP_CQWD", "CAST into Qword" },
	// Calculation
	{ "OP_INC", "INCREMENT X++" },
	{ "OP_DEC", "DECREMENT X--" },
	{ "OP_ADD", "ADD Y+X" },
	{ "OP_SUB", "SUBTRACT Y-X" },
	{ "OP_MUL", "MULTIPLY Y*X" },
	{ "OP_DIV", "DIVIDE Y/X" },
	{ "OP_MOD", "MODULO Y mod X" },
	{ "OP_QREM", "QUOTIENT and REMAINDER" },
	{ "OP_NEG", "NEGATE +/-" },
	{ "OP_INV", "INVERT" },
	{ "OP_ABS", "ABSOLUTE VALUE" },
	{ "OP_HYPT", "HYPOTENUSE" },
	{ "OP_RAT", "RATIO" },
	// integer
	{ "OP_FLR", "FLOOR" },
	{ "OP_CEIL", "CEILING" },
	{ "OP_ROND", "ROUND" },
	{ "OP_GCD", "GREATEST COMMON DIVISOR" },
	{ "OP_LCM", "LEAST COMMON MULTIPLE" },
	{ "OP_FACT", "FACTORIAL X!" },
	{ "OP_PERM", "PERMUTATION yPx" },
	{ "OP_COMB", "COMBINATION yCx" },
	// exponent, logarithm
	{ "OP_SQ", "SQUARE" },
	{ "OP_SQRT", "SQUARE ROOT" },
	{ "OP_CBRT", "CUBIC ROOT" },
	{ "OP_POW", "POWER Y^X" },
	{ "OP_NRT", "N-th ROOT" },
	{ "OP_EXP", "EXPONENT" },
	{ "OP_BPOW", "POWER of TWO" },
	{ "OP_TPOW", "POWER of TEN" },
	{ "OP_LOGB", "LOGARITHM of X to base Y" },
	{ "OP_LOGE", "NATURAL LOGARITHM" },
	{ "OP_LOG", "COMMON LOGARITHM" },
	{ "OP_BLOG", "BINARY LOGARITHM" },
	// angle conversion
	{ "OP_TDMS", "DECIMAL Deg to Deg/Min/Sec" },
	{ "OP_DMST", "Deg/Min/Sec to DECIMAL Deg" },
	{ "OP_RTOD", "RADIAN to DEGREE" },
	{ "OP_RTOG", "RADIAN to GRADE" },
	{ "OP_DTOR", "DEGREE to RADIAN" },
	{ "OP_DTOG", "DEGREE to GRADE" },
	{ "OP_GTOR", "GRADE to RADIAN" },
	{ "OP_GTOD", "GRADE to DEGREE" },
	// angle calculation
	{ "OP_CAGR", "COMPLEMENTARY ANGLE (Radian)" },
	{ "OP_CAGD", "COMPLEMENTARY ANGLE (Degree)" },
	{ "OP_CAGG", "COMPLEMENTARY ANGLE (Grade)" },
	{ "OP_SAGR", "SUPPLEMENTARY ANGLE (Radian)" },
	{ "OP_SAGD", "SUPPLEMENTARY ANGLE (Degree)" },
	{ "OP_SAGG", "SUPPLEMENTARY ANGLE (Grade)" },
	// time conversion
	{ "OP_STOM", "SECONDS to MINUTES" },
	{ "OP_STOH", "SECONDS to HOURS" },
	{ "OP_STOD", "SECONDS to DAYS" },
	{ "OP_STOW", "SECONDS to WEEKS" },
	{ "OP_MTOS", "MINUTES to SECONDS" },
	{ "OP_MTOH", "MINUTES to HOURS" },
	{ "OP_MTOD", "MINUTES to DAYS" },
	{ "OP_MTOW", "MINUTES to WEEKS" },
	{ "OP_HTOS", "HOURS to SECONDS" },
	{ "OP_HTOM", "HOURS to MINUTES" },
	{ "OP_HTOD", "HOURS to DAYS" },
	{ "OP_HTOW", "HOURS to WEEKS" },
	{ "OP_DTOS", "DAYS to SECONDS" },
	{ "OP_DTOM", "DAYS to MINUTES" },
	{ "OP_DTOH", "DAYS to HOURS" },
	{ "OP_DTOW", "DAYS to WEEKS" },
	{ "OP_WTOS", "WEEKS to SECONDS" },
	{ "OP_WTOM", "WEEKS to MINUTES" },
	{ "OP_WTOH", "WEEKS to HOURS" },
	{ "OP_WTOD", "WEEKS to DAYS" },
	// trigonometric
	{ "OP_SINR", "SINE (Radian)" },
	{ "OP_COSR", "COSINE (Radian)" },
	{ "OP_TANR", "TANGENT (Radian)" },
	{ "OP_ASINR", "ARCSINE (Radian)" },
	{ "OP_ACOSR", "ARCCOSINE (Radian)" },
	{ "OP_ATANR", "ARCTANGENT (Radian)" },
	{ "OP_SIND", "SINE (Degree)" },
	{ "OP_COSD", "COSINE (Degree)" },
	{ "OP_TAND", "TANGENT (Degree)" },
	{ "OP_ASIND", "ARCSINE (Degree)" },
	{ "OP_ACOSD", "ARCCOSINE (Degree)" },
	{ "OP_ATAND", "ARCTANGENT (Degree)" },
	{ "OP_SING", "SINE (Grade)" },
	{ "OP_COSG", "COSINE (Grade)" },
	{ "OP_TANG", "TANGENT (Grade)" },
	{ "OP_ASING", "ARCSINE (Grade)" },
	{ "OP_ACOSG", "ARCCOSINE (Grade)" },
	{ "OP_ATANG", "ARCTANGENT (Grade)" },
	// hyperbolic
	{ "OP_SINH", "Hyperbolic SINE" },
	{ "OP_COSH", "Hyperbolic COSINE" },
	{ "OP_TANH", "Hyperbolic TANGENT" },
	{ "OP_ASH", "Inverse Hyperbolic SINE" },
	{ "OP_ACH", "Inverse Hyperbolic COSINE" },
	{ "OP_ATH", "Inverse Hyperbolic TANGENT" },
	// gamma and euler
	{ "OP_BETA", "BETA FUNCTION" },
	{ "OP_GAM", "GAMMA FUNCTION" },
	{ "OP_LGAM", "LOGARITHM of GAMMA FUNCTION" },
	{ "OP_ERF", "ERROR FUNCTION" },
	{ "OP_ERFC", "COMPLEMENTARY ERROR FUNCTION" },
	// complex
	{ "OP_MCMP", "MAKE COMPLEX from RECTANGULAR" },
	{ "OP_MKED", "MAKE COMPLEX from POLAR (Degree)" },
	{ "OP_MKER", "MAKE COMPLEX from POLAR (Radian)" },
	{ "OP_MKEG", "MAKE COMPLEX from POLAR (Grade)" },
	{ "OP_RE", "REAL PART" },
	{ "OP_IM", "IMAGINARY PART" },
	{ "OP_ARGR", "COMPLEX ARGUMENT (Radian)" },
	{ "OP_ARGD", "COMPLEX ARGUMENT (Degree)" },
	{ "OP_ARGG", "COMPLEX ARGUMENT (Grade)" },
	{ "OP_CONJ", "COMPLEX CONJUGATION" },
	{ "OP_REIM", "REAL and IMAGINARY" },
	{ "OP_MAD", "MAGNITUDE and ARGUMENT (Degree)" },
	{ "OP_MAR", "MAGNITUDE and ARGUMENT (Radian)" },
	{ "OP_MAG", "MAGNITUDE and ARGUMENT (Grade)" },
	// percent
	{ "OP_PERC", "X PERCENT of Y" },
	{ "OP_DPRC", "DELTA PERCENT between Y and X" },
	{ "OP_INTAX", "INCLUDE TAX" },
	{ "OP_EXTAX", "EXCLUDE TAX" },
	// engineer
	{ "OP_RDX", "RADIX of FLOATING" },
	{ "OP_EPS", "MACHINE EPSILON" },
	{ "OP_TPIX", "MULTIPLY by 2 PI" },
	{ "OP_DTPI", "DIVIDE by 2 PI" },
	{ "OP_PARA", "PARALLEL" },
	{ "OP_TODB", "TO DECIBEL" },
	{ "OP_DBTO", "DECIBEL TO REAL" },
	{ "OP_TEQM", "JOULE to Earthquake MAGNITUDE" },
	{ "OP_EQMT", "Earthquake MAGNITUDE to JOULE" },
	// make tuple
	{ "OP_MRT", "MAKE ROW TUPLE" },
	{ "OP_MCT", "MAKE COLUMN TUPLE" },
	{ "OP_MRUT", "MAKE ROW UNIT TUPLE" },
	{ "OP_MCUT", "MAKE COLUMN UNIT TUPLE" },
	{ "OP_CRAV", "CRAVE UP" },
	{ "OP_TGET", "GET ELEMENT FROM TUPLE" },
	// make matrix
	{ "OP_MMAT", "MAKE MATRIX" },
	{ "OP_UMAT", "MAKE UNIT MATRIX" },
	{ "OP_MGET", "GET ELEMENT FROM MATRIX" },
	{ "OP_MGETR", "GET ROW FROM MATRIX" },
	{ "OP_MGETC", "GET COLUMN FROM MATRIX" },
	// innner/outer product
	{ "OP_IPRD", "INNER PRODUCT" },
	{ "OP_OPRD", "OUTER PRODUCT" },
	{ "OP_NORM", "EUCLID NORM" },
	{ "OP_NSQ", "EUCLID NORM SQUARED" },
	{ "OP_LPN", "p-NORM" },
	{ "OP_MAXN", "MAX NORM" },
	// for matrix
	{ "OP_DET", "DETERMINANT" },
	{ "OP_TRP", "TRANSPOSE" },
	{ "OP_HTRP", "HERMITIAN TRANSPOSE" },
	{ "OP_TRC", "TRACE" },
	// statistics
	{ "OP_SUM", "SUM" },
	{ "OP_PRD", "INFINITE PRODUCT" },
	{ "OP_AVR", "ARITHMETIC AVERAGE" },
	{ "OP_GVR", "GEOMETRIC AVERAGE" },
	{ "OP_HVR", "HARMONIC AVERAGE" },
	{ "OP_PSUM", "Partial SUM" },
	{ "OP_PPRD", "Partial PRODUCT" },
	{ "OP_PAVR", "Partial ARITHMETIC AVERAGE" },
	{ "OP_PGVR", "Partial GEOMETRIC AVERAGE" },
	{ "OP_PHVR", "Partial HARMONIC AVERAGE" },
	{ "OP_SUMW", "SUM without Drop" },
	{ "OP_PRDW", "INFINITE PRODUCT without Drop" },
	{ "OP_AVRW", "ARITHMETIC AVERAGE without Drop" },
	{ "OP_GVRW", "GEOMETRIC AVERAGE without Drop" },
	{ "OP_HVRW", "HARMONIC AVERAGE without Drop" },
	{ "OP_PSUMW", "Partial SUM without Drop" },
	{ "OP_PPRDW", "Partial PRODUCT without Drop" },
	{ "OP_PAVRW", "Partial ARITHMETIC AVERAGE without Drop" },
	{ "OP_PGVRW", "Partial GEOMETRIC AVERAGE without Drop" },
	{ "OP_PHVRW", "Partial HARMONIC AVERAGE without Drop" },
	// random
	{ "OP_RAND", "RANDOM INTEGER" },
	{ "OP_FRND", "RANDOM FLOATING" },
	// Value display
	{ "M_BIN", "BINARY display" },
	{ "M_OCT", "OCTAL display" },
	{ "M_DEC", "SIGNED display" },
	{ "M_UDEC", "UNSIGNED display" },
	{ "M_HEX", "HEXADECIMAL display" },
	// Input size
	{ "M_BYT", "BYTE SIZE mode" },
	{ "M_WRD", "WORD SIZE mode" },
	{ "M_DWD", "DWORD SIZE mode" },
	{ "M_QWD", "QWORD SIZE mode" },
	// Logical calculation
	{ "OP_NOT", "Bitwise NOT ~X" },
	{ "OP_AND", "Bitwise AND Y&X" },
	{ "OP_OR", "Bitwise OR Y|X" },
	{ "OP_XOR", "Bitwise XOR Y^X" },
	{ "OP_NAND", "Bitwise NAND ~(Y&X)" },
	{ "OP_NOR", "Bitwise NOR ~(Y|X)" },
	{ "OP_SHL", "SHIFT LEFT" },
	{ "OP_SHR", "SHIFT LOGICAL RIGHT" },
	{ "OP_SAR", "SHIFT ARITHMETIC RIGHT" },
	{ "OP_SBL", "SHIFT BYTE LEFT" },
	{ "OP_SBR", "SHIFT BYTE RIGHT" },
	{ "OP_SNL", "SHIFT NIBBLE LEFT" },
	{ "OP_SNR", "SHIFT NIBBLE RIGHT" },
	{ "OP_ROL", "ROATTE LEFT" },
	{ "OP_ROR", "ROTATE RIGHT" },
	{ "OP_AAND", "ALL AND" },
	{ "OP_AOR", "ALL OR" },
	{ "OP_AXOR", "ALL XOR" },
	// healthy
	{ "OP_DCM", "DISCOMFORT INDEX" },
	{ "OP_BMI", "BODY MASS INDEX" },
};
