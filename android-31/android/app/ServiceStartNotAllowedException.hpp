#pragma once

#include "../../java/lang/IllegalStateException.hpp"

namespace android::app
{
	class ServiceStartNotAllowedException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ServiceStartNotAllowedException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		ServiceStartNotAllowedException(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::app

