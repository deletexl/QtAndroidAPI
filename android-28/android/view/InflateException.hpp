#pragma once

#include "../../java/lang/RuntimeException.hpp"

class JString;
class JThrowable;

namespace android::view
{
	class InflateException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InflateException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		InflateException(QJniObject obj);
		
		// Constructors
		InflateException();
		InflateException(JString arg0);
		InflateException(JThrowable arg0);
		InflateException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::view

