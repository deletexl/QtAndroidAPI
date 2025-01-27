#pragma once

#include "../lang/RuntimeException.hpp"

class JString;
class JThrowable;

namespace java::util
{
	class NoSuchElementException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NoSuchElementException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		NoSuchElementException(QJniObject obj);
		
		// Constructors
		NoSuchElementException();
		NoSuchElementException(JString arg0);
		NoSuchElementException(JThrowable arg0);
		NoSuchElementException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::util

