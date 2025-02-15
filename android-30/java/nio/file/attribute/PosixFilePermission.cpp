#include "../../../../JArray.hpp"
#include "../../../../JString.hpp"
#include "./PosixFilePermission.hpp"

namespace java::nio::file::attribute
{
	// Fields
	java::nio::file::attribute::PosixFilePermission PosixFilePermission::GROUP_EXECUTE()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"GROUP_EXECUTE",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	java::nio::file::attribute::PosixFilePermission PosixFilePermission::GROUP_READ()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"GROUP_READ",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	java::nio::file::attribute::PosixFilePermission PosixFilePermission::GROUP_WRITE()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"GROUP_WRITE",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	java::nio::file::attribute::PosixFilePermission PosixFilePermission::OTHERS_EXECUTE()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"OTHERS_EXECUTE",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	java::nio::file::attribute::PosixFilePermission PosixFilePermission::OTHERS_READ()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"OTHERS_READ",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	java::nio::file::attribute::PosixFilePermission PosixFilePermission::OTHERS_WRITE()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"OTHERS_WRITE",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	java::nio::file::attribute::PosixFilePermission PosixFilePermission::OWNER_EXECUTE()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"OWNER_EXECUTE",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	java::nio::file::attribute::PosixFilePermission PosixFilePermission::OWNER_READ()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"OWNER_READ",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	java::nio::file::attribute::PosixFilePermission PosixFilePermission::OWNER_WRITE()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"OWNER_WRITE",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	
	// QJniObject forward
	PosixFilePermission::PosixFilePermission(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::file::attribute::PosixFilePermission PosixFilePermission::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.PosixFilePermission",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/PosixFilePermission;",
			arg0.object<jstring>()
		);
	}
	JArray PosixFilePermission::values()
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.PosixFilePermission",
			"values",
			"()[Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
} // namespace java::nio::file::attribute

