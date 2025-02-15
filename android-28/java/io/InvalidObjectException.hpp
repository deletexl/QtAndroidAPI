#pragma once

#include "./ObjectStreamException.hpp"

class JString;

namespace java::io
{
	class InvalidObjectException : public java::io::ObjectStreamException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InvalidObjectException(const char *className, const char *sig, Ts...agv) : java::io::ObjectStreamException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidObjectException(QJniObject obj);
		
		// Constructors
		InvalidObjectException(JString arg0);
		
		// Methods
	};
} // namespace java::io

