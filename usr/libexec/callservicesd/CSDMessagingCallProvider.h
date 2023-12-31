//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSMutableArray, NSOrderedSet, NSSet, NSString, TUCallProvider;

@interface CSDMessagingCallProvider : PBCodable
{
    struct {
        unsigned int *list;
        unsigned long long count;
        unsigned long long size;
    } _protoSupportedHandleTypes;	// 8 = 0x8
    NSString *_bundleURLString;	// 32 = 0x20
    NSMutableArray *_emergencyHandles;	// 40 = 0x28
    NSMutableArray *_emergencyLabeledHandles;	// 48 = 0x30
    NSMutableArray *_handoffIdentifiers;	// 56 = 0x38
    NSString *_identifier;	// 64 = 0x40
    NSString *_localizedName;	// 72 = 0x48
    unsigned int _maximumCallGroups;	// 80 = 0x50
    unsigned int _maximumCallsPerCallGroup;	// 84 = 0x54
    NSString *_originalRingtoneSoundURLString;	// 88 = 0x58
    NSMutableArray *_prioritizedSenderIdentities;	// 96 = 0x60
    NSString *_ringtoneSoundURLString;	// 104 = 0x68
    _Bool _supportsAudioAndVideo;	// 112 = 0x70
    _Bool _supportsAudioOnly;	// 113 = 0x71
    _Bool _supportsEmergency;	// 114 = 0x72
    _Bool _supportsRecents;	// 115 = 0x73
    _Bool _supportsVoicemail;	// 116 = 0x74
    struct {
        unsigned int maximumCallGroups:1;
        unsigned int maximumCallsPerCallGroup:1;
        unsigned int supportsAudioAndVideo:1;
        unsigned int supportsAudioOnly:1;
        unsigned int supportsEmergency:1;
        unsigned int supportsRecents:1;
        unsigned int supportsVoicemail:1;
    } _has;	// 120 = 0x78
}

+ (Class)emergencyHandlesType;	// IMP=0x0020000000092007
+ (Class)prioritizedSenderIdentitiesType;	// IMP=0x0010000000091f35
+ (Class)emergencyLabeledHandlesType;	// IMP=0x0010000000091e18
+ (Class)handoffIdentifierType;	// IMP=0x0010000000091c18
- (void).cxx_destruct;	// IMP=0x00100000000950f9
@property(retain, nonatomic) NSMutableArray *emergencyHandles; // @synthesize emergencyHandles=_emergencyHandles;
@property(retain, nonatomic) NSMutableArray *prioritizedSenderIdentities; // @synthesize prioritizedSenderIdentities=_prioritizedSenderIdentities;
@property(nonatomic) _Bool supportsRecents; // @synthesize supportsRecents=_supportsRecents;
@property(retain, nonatomic) NSMutableArray *emergencyLabeledHandles; // @synthesize emergencyLabeledHandles=_emergencyLabeledHandles;
@property(retain, nonatomic) NSMutableArray *handoffIdentifiers; // @synthesize handoffIdentifiers=_handoffIdentifiers;
@property(retain, nonatomic) NSString *originalRingtoneSoundURLString; // @synthesize originalRingtoneSoundURLString=_originalRingtoneSoundURLString;
@property(retain, nonatomic) NSString *ringtoneSoundURLString; // @synthesize ringtoneSoundURLString=_ringtoneSoundURLString;
@property(nonatomic) _Bool supportsVoicemail; // @synthesize supportsVoicemail=_supportsVoicemail;
@property(nonatomic) _Bool supportsEmergency; // @synthesize supportsEmergency=_supportsEmergency;
@property(nonatomic) _Bool supportsAudioAndVideo; // @synthesize supportsAudioAndVideo=_supportsAudioAndVideo;
@property(nonatomic) _Bool supportsAudioOnly; // @synthesize supportsAudioOnly=_supportsAudioOnly;
@property(nonatomic) unsigned int maximumCallsPerCallGroup; // @synthesize maximumCallsPerCallGroup=_maximumCallsPerCallGroup;
@property(nonatomic) unsigned int maximumCallGroups; // @synthesize maximumCallGroups=_maximumCallGroups;
@property(retain, nonatomic) NSString *bundleURLString; // @synthesize bundleURLString=_bundleURLString;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000094955
- (unsigned long long)hash;	// IMP=0x0010000000094725
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000943a4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000093c7d
- (void)copyTo:(id)arg1;	// IMP=0x0010000000093843
- (void)writeTo:(id)arg1;	// IMP=0x00100000000932c5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000932b8
- (id)dictionaryRepresentation;	// IMP=0x00100000000920c7
- (id)description;	// IMP=0x0010000000092018
- (id)emergencyHandlesAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000091fea
- (unsigned long long)emergencyHandlesCount;	// IMP=0x0010000000091fcd
- (void)addEmergencyHandles:(id)arg1;	// IMP=0x0010000000091f63
- (void)clearEmergencyHandles;	// IMP=0x0010000000091f46
- (id)prioritizedSenderIdentitiesAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000091f18
- (unsigned long long)prioritizedSenderIdentitiesCount;	// IMP=0x0010000000091efb
- (void)addPrioritizedSenderIdentities:(id)arg1;	// IMP=0x0010000000091e91
- (void)clearPrioritizedSenderIdentities;	// IMP=0x0010000000091e74
@property(nonatomic) _Bool hasSupportsRecents;
- (id)emergencyLabeledHandlesAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000091dfb
- (unsigned long long)emergencyLabeledHandlesCount;	// IMP=0x0010000000091dde
- (void)addEmergencyLabeledHandles:(id)arg1;	// IMP=0x0010000000091d74
- (void)clearEmergencyLabeledHandles;	// IMP=0x0010000000091d57
- (void)setProtoSupportedHandleTypes:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0010000000091d40
- (unsigned int)protoSupportedHandleTypeAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000091c70
- (void)addProtoSupportedHandleType:(unsigned int)arg1;	// IMP=0x0010000000091c5d
- (void)clearProtoSupportedHandleTypes;	// IMP=0x0010000000091c4c
@property(readonly, nonatomic) unsigned int *protoSupportedHandleTypes;
@property(readonly, nonatomic) unsigned long long protoSupportedHandleTypesCount;
- (id)handoffIdentifierAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000091bfb
- (unsigned long long)handoffIdentifiersCount;	// IMP=0x0010000000091bde
- (void)addHandoffIdentifier:(id)arg1;	// IMP=0x0010000000091b74
- (void)clearHandoffIdentifiers;	// IMP=0x0010000000091b57
@property(readonly, nonatomic) _Bool hasOriginalRingtoneSoundURLString;
@property(readonly, nonatomic) _Bool hasRingtoneSoundURLString;
@property(nonatomic) _Bool hasSupportsVoicemail;
@property(nonatomic) _Bool hasSupportsEmergency;
@property(nonatomic) _Bool hasSupportsAudioAndVideo;
@property(nonatomic) _Bool hasSupportsAudioOnly;
@property(nonatomic) _Bool hasMaximumCallsPerCallGroup;
@property(nonatomic) _Bool hasMaximumCallGroups;
@property(readonly, nonatomic) _Bool hasBundleURLString;
@property(readonly, nonatomic) _Bool hasLocalizedName;
@property(readonly, nonatomic) _Bool hasIdentifier;
- (void)dealloc;	// IMP=0x00100000000918f4
@property(copy, nonatomic, setter=setPrioritizedTUSenderIdentities:) NSOrderedSet *prioritizedTUSenderIdentities;
@property(copy, nonatomic) NSArray *emergencyTULabeledHandles;
@property(copy, nonatomic) NSArray *emergencyTUHandles;
@property(copy, nonatomic) NSSet *supportedHandleTypes;
@property(readonly, copy, nonatomic) TUCallProvider *provider;
- (id)initWithProvider:(id)arg1;	// IMP=0x00100000000c0f34

@end

