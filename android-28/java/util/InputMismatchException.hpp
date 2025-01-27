#pragma once

#include "./NoSuchElementException.hpp"

class JString;

namespace java::util
{
	class InputMismatchException : public java::util::NoSuchElementException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InputMismatchException(const char *className, const char *sig, Ts...agv) : java::util::NoSuchElementException(className, sig, std::forward<Ts>(agv)...) {}
		InputMismatchException(QJniObject obj);
		
		// Constructors
		InputMismatchException();
		InputMismatchException(JString arg0);
		
		// Methods
	};
} // namespace java::util

