//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDS/IDSDevice.h>

@class NSArray, NSString;

@interface IDSDevice (CSDThumperPushHandlerAdditions)
+ (_Bool)isDeviceInAltMode;	// IMP=0x00100000001f06b1
+ (_Bool)pairedDeviceUniqueIDOverrideExists;	// IMP=0x00100000001f067e
+ (id)pairedDeviceUniqueIDOverride;	// IMP=0x00100000001f061f
- (id)normalizedDeviceType;	// IMP=0x00100000000b4bd2
- (id)csd_destinationForAlias:(id)arg1;	// IMP=0x00100000001d40c0
@property(readonly, copy, nonatomic) NSArray *csd_aliasStrings;
@property(readonly, copy, nonatomic) NSString *csd_localizedDeviceCategory;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001f0a42
- (_Bool)canReceiveMessagesForCallProvider:(id)arg1;	// IMP=0x00100000001f0996
@property(readonly, nonatomic) _Bool canReceiveRelayedGFTCalls;
@property(readonly, nonatomic) _Bool canReceiveRelayedCalls;
@property(readonly, nonatomic) _Bool supportsRelayCallingWithoutLocalRelayCallingEnabled;
@property(readonly, nonatomic) _Bool supportsRestrictingSecondaryCalling;
@property(readonly, nonatomic, getter=isAudioAccessoryDevice) _Bool audioAccessoryDevice;
- (_Bool)isWatchDevice;	// IMP=0x00100000001f0761
@property(readonly, nonatomic, getter=isPairedDevice) _Bool pairedDevice;
@end

