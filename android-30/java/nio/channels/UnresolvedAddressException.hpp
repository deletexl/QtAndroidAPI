#pragma once

#include "../../lang/IllegalArgumentException.hpp"

namespace java::nio::channels
{
	class UnresolvedAddressException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnresolvedAddressException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalArgumentException(className, sig, std::forward<Ts>(agv)...) {}
		UnresolvedAddressException(QJniObject obj);
		
		// Constructors
		UnresolvedAddressException();
		
		// Methods
	};
} // namespace java::nio::channels

