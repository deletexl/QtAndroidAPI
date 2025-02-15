#pragma once

#include "./DeadObjectException.hpp"

namespace android::os
{
	class DeadSystemException : public android::os::DeadObjectException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DeadSystemException(const char *className, const char *sig, Ts...agv) : android::os::DeadObjectException(className, sig, std::forward<Ts>(agv)...) {}
		DeadSystemException(QJniObject obj);
		
		// Constructors
		DeadSystemException();
		
		// Methods
	};
} // namespace android::os

