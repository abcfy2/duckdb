//===----------------------------------------------------------------------===//
//                         DuckDB
//
// duckdb/core_functions/scalar/secret_functions.hpp
//
//
//===----------------------------------------------------------------------===//
// This file is automatically generated by scripts/generate_functions.py
// Do not edit this file manually, your changes will be overwritten
//===----------------------------------------------------------------------===//

#pragma once

#include "duckdb/function/function_set.hpp"

namespace duckdb {

struct WhichSecretFun {
	static constexpr const char *Name = "which_secret";
	static constexpr const char *Parameters = "path,type";
	static constexpr const char *Description = "Print out the name of the secret that will be used for reading a path";
	static constexpr const char *Example = "which_secret('s3://some/authenticated/path.csv', 's3')";

	static ScalarFunction GetFunction();
};

} // namespace duckdb