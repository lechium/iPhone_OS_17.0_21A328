//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMPocketStateManager, NSString, NSTimer;
@protocol MapsPocketStateProviderDelegate;

@interface MapsPocketStateProvider : NSObject
{
    id <MapsPocketStateProviderDelegate> _delegate;	// 8 = 0x8
    CMPocketStateManager *_manager;	// 16 = 0x10
    NSTimer *_updateTimer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000008e304e
- (void)_fireStateUpdate:(long long)arg1;	// IMP=0x00100000008e2ff8
- (void)_enqueueNewState:(long long)arg1;	// IMP=0x00100000008e2dfc
- (void)pocketStateManager:(id)arg1 didUpdateState:(long long)arg2;	// IMP=0x00100000008e2d90
- (void)dealloc;	// IMP=0x00100000008e2d3c
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000008e2c92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

