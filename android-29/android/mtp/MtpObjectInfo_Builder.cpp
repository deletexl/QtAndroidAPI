#include "./MtpObjectInfo.hpp"
#include "../../JString.hpp"
#include "./MtpObjectInfo_Builder.hpp"

namespace android::mtp
{
	// Fields
	
	// QJniObject forward
	MtpObjectInfo_Builder::MtpObjectInfo_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MtpObjectInfo_Builder::MtpObjectInfo_Builder()
		: JObject(
			"android.mtp.MtpObjectInfo$Builder",
			"()V"
		) {}
	MtpObjectInfo_Builder::MtpObjectInfo_Builder(android::mtp::MtpObjectInfo arg0)
		: JObject(
			"android.mtp.MtpObjectInfo$Builder",
			"(Landroid/mtp/MtpObjectInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	android::mtp::MtpObjectInfo MtpObjectInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/mtp/MtpObjectInfo;"
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setAssociationDesc(jint arg0) const
	{
		return callObjectMethod(
			"setAssociationDesc",
			"(I)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setAssociationType(jint arg0) const
	{
		return callObjectMethod(
			"setAssociationType",
			"(I)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setCompressedSize(jlong arg0) const
	{
		return callObjectMethod(
			"setCompressedSize",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setDateCreated(jlong arg0) const
	{
		return callObjectMethod(
			"setDateCreated",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setDateModified(jlong arg0) const
	{
		return callObjectMethod(
			"setDateModified",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setFormat(jint arg0) const
	{
		return callObjectMethod(
			"setFormat",
			"(I)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setImagePixDepth(jlong arg0) const
	{
		return callObjectMethod(
			"setImagePixDepth",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setImagePixHeight(jlong arg0) const
	{
		return callObjectMethod(
			"setImagePixHeight",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setImagePixWidth(jlong arg0) const
	{
		return callObjectMethod(
			"setImagePixWidth",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setKeywords(JString arg0) const
	{
		return callObjectMethod(
			"setKeywords",
			"(Ljava/lang/String;)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0.object<jstring>()
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setName(JString arg0) const
	{
		return callObjectMethod(
			"setName",
			"(Ljava/lang/String;)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0.object<jstring>()
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setObjectHandle(jint arg0) const
	{
		return callObjectMethod(
			"setObjectHandle",
			"(I)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setParent(jint arg0) const
	{
		return callObjectMethod(
			"setParent",
			"(I)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setProtectionStatus(jint arg0) const
	{
		return callObjectMethod(
			"setProtectionStatus",
			"(I)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setSequenceNumber(jlong arg0) const
	{
		return callObjectMethod(
			"setSequenceNumber",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setStorageId(jint arg0) const
	{
		return callObjectMethod(
			"setStorageId",
			"(I)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setThumbCompressedSize(jlong arg0) const
	{
		return callObjectMethod(
			"setThumbCompressedSize",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setThumbFormat(jint arg0) const
	{
		return callObjectMethod(
			"setThumbFormat",
			"(I)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setThumbPixHeight(jlong arg0) const
	{
		return callObjectMethod(
			"setThumbPixHeight",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
	android::mtp::MtpObjectInfo_Builder MtpObjectInfo_Builder::setThumbPixWidth(jlong arg0) const
	{
		return callObjectMethod(
			"setThumbPixWidth",
			"(J)Landroid/mtp/MtpObjectInfo$Builder;",
			arg0
		);
	}
} // namespace android::mtp

