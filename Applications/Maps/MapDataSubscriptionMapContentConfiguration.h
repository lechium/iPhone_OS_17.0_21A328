//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MapDataSubscriptionMapContentConfiguration : NSObject
{
    NSArray *_subscriptions;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000005e0d54
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;	// IMP=0x00100000005e0c50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000005e0c17
- (id)updatedConfigurationForState:(id)arg1;	// IMP=0x00100000005e0c0e
- (id)makeContentView;	// IMP=0x00100000005e042f
- (id)initWithSubscriptions:(id)arg1;	// IMP=0x00100000005e03a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
