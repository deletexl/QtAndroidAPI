#pragma once

#include "./FileSystemException.hpp"

class JString;

namespace java::nio::file
{
	class FileSystemLoopException : public java::nio::file::FileSystemException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FileSystemLoopException(const char *className, const char *sig, Ts...agv) : java::nio::file::FileSystemException(className, sig, std::forward<Ts>(agv)...) {}
		FileSystemLoopException(QJniObject obj);
		
		// Constructors
		FileSystemLoopException(JString arg0);
		
		// Methods
	};
} // namespace java::nio::file

