// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETCORE_NetCloseResult_generated_h
#error "NetCloseResult.generated.h already included, missing '#pragma once' in NetCloseResult.h"
#endif
#define NETCORE_NetCloseResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetCloseResult_h


#define FOREACH_ENUM_ENETCLOSERESULT(op) \
	op(ENetCloseResult::NetDriverAlreadyExists) \
	op(ENetCloseResult::NetDriverCreateFailure) \
	op(ENetCloseResult::NetDriverListenFailure) \
	op(ENetCloseResult::ConnectionLost) \
	op(ENetCloseResult::ConnectionTimeout) \
	op(ENetCloseResult::FailureReceived) \
	op(ENetCloseResult::OutdatedClient) \
	op(ENetCloseResult::OutdatedServer) \
	op(ENetCloseResult::PendingConnectionFailure) \
	op(ENetCloseResult::NetGuidMismatch) \
	op(ENetCloseResult::NetChecksumMismatch) \
	op(ENetCloseResult::SecurityMalformedPacket) \
	op(ENetCloseResult::SecurityInvalidData) \
	op(ENetCloseResult::SecurityClosed) \
	op(ENetCloseResult::Unknown) \
	op(ENetCloseResult::Success) \
	op(ENetCloseResult::Extended) \
	op(ENetCloseResult::RPCDoS) \
	op(ENetCloseResult::Cleanup) \
	op(ENetCloseResult::MissingLevelPackage) \
	op(ENetCloseResult::PacketHandlerIncomingError) \
	op(ENetCloseResult::ZeroLastByte) \
	op(ENetCloseResult::ZeroSize) \
	op(ENetCloseResult::ReadHeaderFail) \
	op(ENetCloseResult::ReadHeaderExtraFail) \
	op(ENetCloseResult::AckSequenceMismatch) \
	op(ENetCloseResult::BunchBadChannelIndex) \
	op(ENetCloseResult::BunchChannelNameFail) \
	op(ENetCloseResult::BunchWrongChannelType) \
	op(ENetCloseResult::BunchHeaderOverflow) \
	op(ENetCloseResult::BunchDataOverflow) \
	op(ENetCloseResult::BunchPrematureControlChannel) \
	op(ENetCloseResult::BunchPrematureChannel) \
	op(ENetCloseResult::BunchPrematureControlClose) \
	op(ENetCloseResult::UnknownChannelType) \
	op(ENetCloseResult::PrematureSend) \
	op(ENetCloseResult::CorruptData) \
	op(ENetCloseResult::SocketSendFailure) \
	op(ENetCloseResult::BadChildConnectionIndex) \
	op(ENetCloseResult::LogLimitInstant) \
	op(ENetCloseResult::LogLimitSustained) \
	op(ENetCloseResult::ReceivedNetGUIDBunchFail) \
	op(ENetCloseResult::MaxReliableExceeded) \
	op(ENetCloseResult::ReceivedNextBunchFail) \
	op(ENetCloseResult::ReceivedNextBunchQueueFail) \
	op(ENetCloseResult::PartialInitialReliableDestroy) \
	op(ENetCloseResult::PartialMergeReliableDestroy) \
	op(ENetCloseResult::PartialInitialNonByteAligned) \
	op(ENetCloseResult::PartialNonByteAligned) \
	op(ENetCloseResult::PartialFinalPackageMapExports) \
	op(ENetCloseResult::PartialTooLarge) \
	op(ENetCloseResult::AlreadyOpen) \
	op(ENetCloseResult::ReliableBeforeOpen) \
	op(ENetCloseResult::ReliableBufferOverflow) \
	op(ENetCloseResult::ControlChannelClose) \
	op(ENetCloseResult::ControlChannelEndianCheck) \
	op(ENetCloseResult::ControlChannelPlayerChannelFail) \
	op(ENetCloseResult::ControlChannelMessageUnknown) \
	op(ENetCloseResult::ControlChannelMessageFail) \
	op(ENetCloseResult::ControlChannelMessagePayloadFail) \
	op(ENetCloseResult::ControlChannelBunchOverflowed) \
	op(ENetCloseResult::ControlChannelQueueBunchOverflowed) \
	op(ENetCloseResult::ClientHasMustBeMappedGUIDs) \
	op(ENetCloseResult::UnregisteredMustBeMappedGUID) \
	op(ENetCloseResult::ObjectReplicatorReceivedBunchFail) \
	op(ENetCloseResult::ContentBlockFail) \
	op(ENetCloseResult::ContentBlockHeaderRepLayoutFail) \
	op(ENetCloseResult::ContentBlockHeaderIsActorFail) \
	op(ENetCloseResult::ContentBlockHeaderObjFail) \
	op(ENetCloseResult::ContentBlockHeaderPrematureEnd) \
	op(ENetCloseResult::ContentBlockHeaderSubObjectActor) \
	op(ENetCloseResult::ContentBlockHeaderBadParent) \
	op(ENetCloseResult::ContentBlockHeaderInvalidCreate) \
	op(ENetCloseResult::ContentBlockHeaderStablyNamedFail) \
	op(ENetCloseResult::ContentBlockHeaderNoSubObjectClass) \
	op(ENetCloseResult::ContentBlockHeaderUObjectSubObject) \
	op(ENetCloseResult::ContentBlockHeaderAActorSubObject) \
	op(ENetCloseResult::ContentBlockHeaderFail) \
	op(ENetCloseResult::ContentBlockPayloadBitsFail) \
	op(ENetCloseResult::FieldHeaderRepIndex) \
	op(ENetCloseResult::FieldHeaderBadRepIndex) \
	op(ENetCloseResult::FieldHeaderPayloadBitsFail) \
	op(ENetCloseResult::FieldPayloadFail) \
	op(ENetCloseResult::FaultDisconnect) \
	op(ENetCloseResult::NotRecoverable) 

enum class ENetCloseResult : uint32;
template<> NETCORE_API UEnum* StaticEnum<ENetCloseResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
