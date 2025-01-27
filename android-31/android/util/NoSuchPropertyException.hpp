#pragma once

#include "../../java/lang/RuntimeException.hpp"

class JString;

namespace android::util
{
	class NoSuchPropertyException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NoSuchPropertyException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		NoSuchPropertyException(QJniObject obj);
		
		// Constructors
		NoSuchPropertyException(JString arg0);
		
		// Methods
	};
} // namespace android::util

