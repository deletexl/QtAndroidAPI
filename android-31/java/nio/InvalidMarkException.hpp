#pragma once

#include "../lang/IllegalStateException.hpp"

namespace java::nio
{
	class InvalidMarkException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InvalidMarkException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidMarkException(QJniObject obj);
		
		// Constructors
		InvalidMarkException();
		
		// Methods
	};
} // namespace java::nio

