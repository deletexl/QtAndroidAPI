#pragma once

#include "../../lang/IllegalStateException.hpp"

namespace java::nio::file
{
	class ClosedFileSystemException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ClosedFileSystemException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		ClosedFileSystemException(QJniObject obj);
		
		// Constructors
		ClosedFileSystemException();
		
		// Methods
	};
} // namespace java::nio::file

