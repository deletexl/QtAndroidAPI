#pragma once

#include "../../../../JObject.hpp"
#include "../../../../java/lang/Exception.hpp"
#include "../../../../java/io/IOException.hpp"
#include "../../../../java/io/InterruptedIOException.hpp"


namespace org::apache::http::conn
{
	class ConnectTimeoutException : public java::io::InterruptedIOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConnectTimeoutException(const char *className, const char *sig, Ts...agv) : java::io::InterruptedIOException(className, sig, std::forward<Ts>(agv)...) {}
		ConnectTimeoutException(QAndroidJniObject obj);
		
		// Constructors
		ConnectTimeoutException();
		ConnectTimeoutException(jstring arg0);
		
		// Methods
	};
} // namespace org::apache::http::conn

