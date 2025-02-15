#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "./BluetoothClass.hpp"
#include "./BluetoothGatt.hpp"
#include "./BluetoothGattCallback.hpp"
#include "./BluetoothSocket.hpp"
#include "../content/Context.hpp"
#include "../os/Handler.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/UUID.hpp"
#include "./BluetoothDevice.hpp"

namespace android::bluetooth
{
	// Fields
	JString BluetoothDevice::ACTION_ACL_CONNECTED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_ACL_CONNECTED",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothDevice::ACTION_ACL_DISCONNECTED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_ACL_DISCONNECTED",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothDevice::ACTION_ACL_DISCONNECT_REQUESTED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_ACL_DISCONNECT_REQUESTED",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothDevice::ACTION_ALIAS_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_ALIAS_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothDevice::ACTION_BOND_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_BOND_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothDevice::ACTION_CLASS_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_CLASS_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothDevice::ACTION_FOUND()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_FOUND",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothDevice::ACTION_NAME_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_NAME_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothDevice::ACTION_PAIRING_REQUEST()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_PAIRING_REQUEST",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothDevice::ACTION_UUID()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_UUID",
			"Ljava/lang/String;"
		);
	}
	jint BluetoothDevice::ADDRESS_TYPE_PUBLIC()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"ADDRESS_TYPE_PUBLIC"
		);
	}
	jint BluetoothDevice::ADDRESS_TYPE_RANDOM()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"ADDRESS_TYPE_RANDOM"
		);
	}
	jint BluetoothDevice::BOND_BONDED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"BOND_BONDED"
		);
	}
	jint BluetoothDevice::BOND_BONDING()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"BOND_BONDING"
		);
	}
	jint BluetoothDevice::BOND_NONE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"BOND_NONE"
		);
	}
	JObject BluetoothDevice::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint BluetoothDevice::DEVICE_TYPE_CLASSIC()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"DEVICE_TYPE_CLASSIC"
		);
	}
	jint BluetoothDevice::DEVICE_TYPE_DUAL()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"DEVICE_TYPE_DUAL"
		);
	}
	jint BluetoothDevice::DEVICE_TYPE_LE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"DEVICE_TYPE_LE"
		);
	}
	jint BluetoothDevice::DEVICE_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"DEVICE_TYPE_UNKNOWN"
		);
	}
	jint BluetoothDevice::ERROR()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"ERROR"
		);
	}
	JString BluetoothDevice::EXTRA_BOND_STATE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_BOND_STATE",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothDevice::EXTRA_CLASS()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_CLASS",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothDevice::EXTRA_DEVICE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_DEVICE",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothDevice::EXTRA_NAME()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_NAME",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothDevice::EXTRA_PAIRING_KEY()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_PAIRING_KEY",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothDevice::EXTRA_PAIRING_VARIANT()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_PAIRING_VARIANT",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothDevice::EXTRA_PREVIOUS_BOND_STATE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_PREVIOUS_BOND_STATE",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothDevice::EXTRA_RSSI()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_RSSI",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothDevice::EXTRA_UUID()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_UUID",
			"Ljava/lang/String;"
		);
	}
	jint BluetoothDevice::PAIRING_VARIANT_PASSKEY_CONFIRMATION()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PAIRING_VARIANT_PASSKEY_CONFIRMATION"
		);
	}
	jint BluetoothDevice::PAIRING_VARIANT_PIN()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PAIRING_VARIANT_PIN"
		);
	}
	jint BluetoothDevice::PHY_LE_1M()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_LE_1M"
		);
	}
	jint BluetoothDevice::PHY_LE_1M_MASK()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_LE_1M_MASK"
		);
	}
	jint BluetoothDevice::PHY_LE_2M()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_LE_2M"
		);
	}
	jint BluetoothDevice::PHY_LE_2M_MASK()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_LE_2M_MASK"
		);
	}
	jint BluetoothDevice::PHY_LE_CODED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_LE_CODED"
		);
	}
	jint BluetoothDevice::PHY_LE_CODED_MASK()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_LE_CODED_MASK"
		);
	}
	jint BluetoothDevice::PHY_OPTION_NO_PREFERRED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_OPTION_NO_PREFERRED"
		);
	}
	jint BluetoothDevice::PHY_OPTION_S2()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_OPTION_S2"
		);
	}
	jint BluetoothDevice::PHY_OPTION_S8()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_OPTION_S8"
		);
	}
	jint BluetoothDevice::TRANSPORT_AUTO()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"TRANSPORT_AUTO"
		);
	}
	jint BluetoothDevice::TRANSPORT_BREDR()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"TRANSPORT_BREDR"
		);
	}
	jint BluetoothDevice::TRANSPORT_LE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"TRANSPORT_LE"
		);
	}
	
	// QJniObject forward
	BluetoothDevice::BluetoothDevice(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::bluetooth::BluetoothGatt BluetoothDevice::connectGatt(android::content::Context arg0, jboolean arg1, android::bluetooth::BluetoothGattCallback arg2) const
	{
		return callObjectMethod(
			"connectGatt",
			"(Landroid/content/Context;ZLandroid/bluetooth/BluetoothGattCallback;)Landroid/bluetooth/BluetoothGatt;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::bluetooth::BluetoothGatt BluetoothDevice::connectGatt(android::content::Context arg0, jboolean arg1, android::bluetooth::BluetoothGattCallback arg2, jint arg3) const
	{
		return callObjectMethod(
			"connectGatt",
			"(Landroid/content/Context;ZLandroid/bluetooth/BluetoothGattCallback;I)Landroid/bluetooth/BluetoothGatt;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	android::bluetooth::BluetoothGatt BluetoothDevice::connectGatt(android::content::Context arg0, jboolean arg1, android::bluetooth::BluetoothGattCallback arg2, jint arg3, jint arg4) const
	{
		return callObjectMethod(
			"connectGatt",
			"(Landroid/content/Context;ZLandroid/bluetooth/BluetoothGattCallback;II)Landroid/bluetooth/BluetoothGatt;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3,
			arg4
		);
	}
	android::bluetooth::BluetoothGatt BluetoothDevice::connectGatt(android::content::Context arg0, jboolean arg1, android::bluetooth::BluetoothGattCallback arg2, jint arg3, jint arg4, android::os::Handler arg5) const
	{
		return callObjectMethod(
			"connectGatt",
			"(Landroid/content/Context;ZLandroid/bluetooth/BluetoothGattCallback;IILandroid/os/Handler;)Landroid/bluetooth/BluetoothGatt;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3,
			arg4,
			arg5.object()
		);
	}
	jboolean BluetoothDevice::createBond() const
	{
		return callMethod<jboolean>(
			"createBond",
			"()Z"
		);
	}
	android::bluetooth::BluetoothSocket BluetoothDevice::createInsecureL2capChannel(jint arg0) const
	{
		return callObjectMethod(
			"createInsecureL2capChannel",
			"(I)Landroid/bluetooth/BluetoothSocket;",
			arg0
		);
	}
	android::bluetooth::BluetoothSocket BluetoothDevice::createInsecureRfcommSocketToServiceRecord(java::util::UUID arg0) const
	{
		return callObjectMethod(
			"createInsecureRfcommSocketToServiceRecord",
			"(Ljava/util/UUID;)Landroid/bluetooth/BluetoothSocket;",
			arg0.object()
		);
	}
	android::bluetooth::BluetoothSocket BluetoothDevice::createL2capChannel(jint arg0) const
	{
		return callObjectMethod(
			"createL2capChannel",
			"(I)Landroid/bluetooth/BluetoothSocket;",
			arg0
		);
	}
	android::bluetooth::BluetoothSocket BluetoothDevice::createRfcommSocketToServiceRecord(java::util::UUID arg0) const
	{
		return callObjectMethod(
			"createRfcommSocketToServiceRecord",
			"(Ljava/util/UUID;)Landroid/bluetooth/BluetoothSocket;",
			arg0.object()
		);
	}
	jint BluetoothDevice::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean BluetoothDevice::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean BluetoothDevice::fetchUuidsWithSdp() const
	{
		return callMethod<jboolean>(
			"fetchUuidsWithSdp",
			"()Z"
		);
	}
	JString BluetoothDevice::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()Ljava/lang/String;"
		);
	}
	JString BluetoothDevice::getAlias() const
	{
		return callObjectMethod(
			"getAlias",
			"()Ljava/lang/String;"
		);
	}
	android::bluetooth::BluetoothClass BluetoothDevice::getBluetoothClass() const
	{
		return callObjectMethod(
			"getBluetoothClass",
			"()Landroid/bluetooth/BluetoothClass;"
		);
	}
	jint BluetoothDevice::getBondState() const
	{
		return callMethod<jint>(
			"getBondState",
			"()I"
		);
	}
	JString BluetoothDevice::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint BluetoothDevice::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	JArray BluetoothDevice::getUuids() const
	{
		return callObjectMethod(
			"getUuids",
			"()[Landroid/os/ParcelUuid;"
		);
	}
	jint BluetoothDevice::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint BluetoothDevice::setAlias(JString arg0) const
	{
		return callMethod<jint>(
			"setAlias",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jboolean BluetoothDevice::setPairingConfirmation(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setPairingConfirmation",
			"(Z)Z",
			arg0
		);
	}
	jboolean BluetoothDevice::setPin(JByteArray arg0) const
	{
		return callMethod<jboolean>(
			"setPin",
			"([B)Z",
			arg0.object<jbyteArray>()
		);
	}
	JString BluetoothDevice::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void BluetoothDevice::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth

