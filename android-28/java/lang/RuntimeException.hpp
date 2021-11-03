#pragma once

#include "../../JObject.hpp"
#include "./Exception.hpp"


namespace java::lang
{
	class RuntimeException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RuntimeException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		RuntimeException(QAndroidJniObject obj);
		
		// Constructors
		RuntimeException();
		RuntimeException(jstring arg0);
		RuntimeException(jthrowable arg0);
		RuntimeException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::lang

