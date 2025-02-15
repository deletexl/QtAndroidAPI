#pragma once

#include "../../java/lang/Exception.hpp"

class JString;

namespace android::security
{
	class ConfirmationNotAvailableException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ConfirmationNotAvailableException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		ConfirmationNotAvailableException(QJniObject obj);
		
		// Constructors
		ConfirmationNotAvailableException();
		ConfirmationNotAvailableException(JString arg0);
		
		// Methods
	};
} // namespace android::security

