#pragma once

#include "../../lang/IllegalStateException.hpp"

namespace java::nio::channels
{
	class AcceptPendingException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AcceptPendingException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		AcceptPendingException(QJniObject obj);
		
		// Constructors
		AcceptPendingException();
		
		// Methods
	};
} // namespace java::nio::channels

