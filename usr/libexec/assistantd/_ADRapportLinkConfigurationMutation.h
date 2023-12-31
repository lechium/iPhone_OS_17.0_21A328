//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADRapportLinkConfiguration, ADRapportLinkConnectionOptions, ADRapportLinkDiscoveryOptions, ADRapportLinkTransportOptions, MISSING_TYPE, NSString;

@interface _ADRapportLinkConfigurationMutation : NSObject
{
    ADRapportLinkConfiguration *_base;	// 8 = 0x8
    ADRapportLinkDiscoveryOptions *_discoveryOptions;	// 16 = 0x10
    ADRapportLinkTransportOptions *_transportOptions;	// 24 = 0x18
    ADRapportLinkConnectionOptions *_connectionOptions;	// 32 = 0x20
    long long _enablesProximityTracking;	// 40 = 0x28
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasDiscoveryOptions:1;
        unsigned int hasTransportOptions:1;
        unsigned int hasConnectionOptions:1;
        unsigned int hasEnablesProximityTracking:1;
    } _mutationFlags;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000016a8f0
- (void)setEnablesProximityTracking:(long long)arg1;	// IMP=0x001000000016a8e2
- (long long)getEnablesProximityTracking;	// IMP=0x001000000016a8c0
- (MISSING_TYPE *)setConnectionOptions: /* Error: Ran out of types for this method. */;	// IMP=0x001000000016a8a0
- (id)getConnectionOptions;	// IMP=0x001000000016a868
- (void)setTransportOptions:(id)arg1;	// IMP=0x001000000016a848
- (id)getTransportOptions;	// IMP=0x001000000016a810
- (void)setDiscoveryOptions:(id)arg1;	// IMP=0x001000000016a7f0
- (id)getDiscoveryOptions;	// IMP=0x001000000016a7b8
- (_Bool)isDirty;	// IMP=0x001000000016a7ad
- (id)initWithBase:(id)arg1;	// IMP=0x001000000016a742

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

