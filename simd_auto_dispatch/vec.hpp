#pragma once


namespace lib {
	class Vector {
		public:
			Vector();
			__attribute__((target("default")))
			void someFunc();
			__attribute__((target("avx")))
			void someFunc();
	};

} // namespace lib
