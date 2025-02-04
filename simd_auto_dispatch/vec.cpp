#include "vec.hpp"

#include <print>


namespace lib {
	Vector::Vector() {
		std::println("CONSTRUCT");
	}

	__attribute__((target("default")))
	void Vector::someFunc() {
		std::println("NORMAL SOME FUNC");
	}

	__attribute__((target("avx")))
	void Vector::someFunc() {
		std::println("SIMD SOME FUNC");
	}

} // namespace lib
