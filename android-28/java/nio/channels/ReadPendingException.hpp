#pragma once

#include "../../lang/IllegalStateException.hpp"

namespace java::nio::channels
{
	class ReadPendingException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReadPendingException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		ReadPendingException(QJniObject obj);
		
		// Constructors
		ReadPendingException();
		
		// Methods
	};
} // namespace java::nio::channels

