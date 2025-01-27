#include "../../../JString.hpp"
#include "./FileSystemLoopException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QJniObject forward
	FileSystemLoopException::FileSystemLoopException(QJniObject obj) : java::nio::file::FileSystemException(obj) {}
	
	// Constructors
	FileSystemLoopException::FileSystemLoopException(JString arg0)
		: java::nio::file::FileSystemException(
			"java.nio.file.FileSystemLoopException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::nio::file

