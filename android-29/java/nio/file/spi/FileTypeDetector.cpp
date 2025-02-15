#include "../../../../JString.hpp"
#include "../../../lang/Void.hpp"
#include "./FileTypeDetector.hpp"

namespace java::nio::file::spi
{
	// Fields
	
	// QJniObject forward
	FileTypeDetector::FileTypeDetector(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString FileTypeDetector::probeContentType(JObject arg0) const
	{
		return callObjectMethod(
			"probeContentType",
			"(Ljava/nio/file/Path;)Ljava/lang/String;",
			arg0.object()
		);
	}
} // namespace java::nio::file::spi

