#pragma once

#include "./AsynchronousCloseException.hpp"

namespace java::nio::channels
{
	class ClosedByInterruptException : public java::nio::channels::AsynchronousCloseException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ClosedByInterruptException(const char *className, const char *sig, Ts...agv) : java::nio::channels::AsynchronousCloseException(className, sig, std::forward<Ts>(agv)...) {}
		ClosedByInterruptException(QJniObject obj);
		
		// Constructors
		ClosedByInterruptException();
		
		// Methods
	};
} // namespace java::nio::channels

