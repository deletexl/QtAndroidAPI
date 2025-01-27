#pragma once

#include "./KeyException.hpp"

class JString;
class JThrowable;

namespace java::security
{
	class InvalidKeyException : public java::security::KeyException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InvalidKeyException(const char *className, const char *sig, Ts...agv) : java::security::KeyException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidKeyException(QJniObject obj);
		
		// Constructors
		InvalidKeyException();
		InvalidKeyException(JString arg0);
		InvalidKeyException(JThrowable arg0);
		InvalidKeyException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::security

