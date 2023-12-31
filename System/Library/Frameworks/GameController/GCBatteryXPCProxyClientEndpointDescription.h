//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCBatteryXPCProxyClientEndpoint, GCDeviceBattery, NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface GCBatteryXPCProxyClientEndpointDescription : NSObject
{
    GCDeviceBattery *_initialBattery;	// 8 = 0x8
    GCBatteryXPCProxyClientEndpoint *_materializedObject;	// 16 = 0x10
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000b4f6
- (void).cxx_destruct;	// IMP=0x000000000000ba0e
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (id)materializeWithContext:(id)arg1;	// IMP=0x000000000000b71f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000b6b2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000b5c9
- (id)init;	// IMP=0x000000000000b5a6
- (id)initWithIdentifier:(id)arg1 initialBattery:(id)arg2;	// IMP=0x000000000000b4fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

