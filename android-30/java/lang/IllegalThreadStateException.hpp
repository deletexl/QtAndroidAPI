#pragma once

#include "./IllegalArgumentException.hpp"

class JString;

namespace java::lang
{
	class IllegalThreadStateException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IllegalThreadStateException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalArgumentException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalThreadStateException(QJniObject obj);
		
		// Constructors
		IllegalThreadStateException();
		IllegalThreadStateException(JString arg0);
		
		// Methods
	};
} // namespace java::lang

