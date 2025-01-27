#pragma once

#include "../../lang/RuntimeException.hpp"

class JString;

namespace java::nio::file
{
	class FileSystemNotFoundException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FileSystemNotFoundException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		FileSystemNotFoundException(QJniObject obj);
		
		// Constructors
		FileSystemNotFoundException();
		FileSystemNotFoundException(JString arg0);
		
		// Methods
	};
} // namespace java::nio::file

