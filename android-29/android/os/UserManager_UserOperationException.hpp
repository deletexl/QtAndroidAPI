#pragma once

#include "../../java/lang/RuntimeException.hpp"

class JString;

namespace android::os
{
	class UserManager_UserOperationException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UserManager_UserOperationException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		UserManager_UserOperationException(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint getUserOperationResult();
	};
} // namespace android::os

