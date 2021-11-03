#include "../../JString.hpp"
#include "./StatFs.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	StatFs::StatFs(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	StatFs::StatFs(JString arg0)
		: JObject(
			"android.os.StatFs",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	jint StatFs::getAvailableBlocks()
	{
		return callMethod<jint>(
			"getAvailableBlocks",
			"()I"
		);
	}
	jlong StatFs::getAvailableBlocksLong()
	{
		return callMethod<jlong>(
			"getAvailableBlocksLong",
			"()J"
		);
	}
	jlong StatFs::getAvailableBytes()
	{
		return callMethod<jlong>(
			"getAvailableBytes",
			"()J"
		);
	}
	jint StatFs::getBlockCount()
	{
		return callMethod<jint>(
			"getBlockCount",
			"()I"
		);
	}
	jlong StatFs::getBlockCountLong()
	{
		return callMethod<jlong>(
			"getBlockCountLong",
			"()J"
		);
	}
	jint StatFs::getBlockSize()
	{
		return callMethod<jint>(
			"getBlockSize",
			"()I"
		);
	}
	jlong StatFs::getBlockSizeLong()
	{
		return callMethod<jlong>(
			"getBlockSizeLong",
			"()J"
		);
	}
	jint StatFs::getFreeBlocks()
	{
		return callMethod<jint>(
			"getFreeBlocks",
			"()I"
		);
	}
	jlong StatFs::getFreeBlocksLong()
	{
		return callMethod<jlong>(
			"getFreeBlocksLong",
			"()J"
		);
	}
	jlong StatFs::getFreeBytes()
	{
		return callMethod<jlong>(
			"getFreeBytes",
			"()J"
		);
	}
	jlong StatFs::getTotalBytes()
	{
		return callMethod<jlong>(
			"getTotalBytes",
			"()J"
		);
	}
	void StatFs::restat(JString arg0)
	{
		callMethod<void>(
			"restat",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::os

