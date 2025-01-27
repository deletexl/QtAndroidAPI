#pragma once

#include "./IOException.hpp"

class JString;

namespace java::io
{
	class InterruptedIOException : public java::io::IOException
	{
	public:
		// Fields
		jint bytesTransferred();
		
		// QJniObject forward
		template<typename ...Ts> explicit InterruptedIOException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		InterruptedIOException(QJniObject obj);
		
		// Constructors
		InterruptedIOException();
		InterruptedIOException(JString arg0);
		
		// Methods
	};
} // namespace java::io

