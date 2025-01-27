#pragma once

#include "../../lang/Error.hpp"

namespace java::lang
{
	class Exception;
}

namespace java::nio::charset
{
	class CoderMalfunctionError : public java::lang::Error
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CoderMalfunctionError(const char *className, const char *sig, Ts...agv) : java::lang::Error(className, sig, std::forward<Ts>(agv)...) {}
		CoderMalfunctionError(QJniObject obj);
		
		// Constructors
		CoderMalfunctionError(java::lang::Exception arg0);
		
		// Methods
	};
} // namespace java::nio::charset

