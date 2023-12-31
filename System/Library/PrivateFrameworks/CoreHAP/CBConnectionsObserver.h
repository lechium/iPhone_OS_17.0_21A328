//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CBConnectionsObserver : NSObject
{
}

- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x000000000005cb75
- (id)getStatus;	// IMP=0x000000000005cb6d
- (int)getAvailableHAPConnections;	// IMP=0x000000000005cb65
- (_Bool)cleanupWithError:(id *)arg1;	// IMP=0x000000000005cb5d
- (id)initWithCentralManager:(id)arg1 Queue:(id)arg2 Error:(id *)arg3;	// IMP=0x000000000005cb4f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

