//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLPedestrianFenceClientDelegate : NSObject
{
    _Bool _valid;	// 8 = 0x8
    void *_client;	// 16 = 0x10
}

@property(nonatomic) void *client; // @synthesize client=_client;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)sessionStatusReport:(id)arg1;	// IMP=0x001000000017d63f
- (void)didFailWithError:(long long)arg1;	// IMP=0x001000000017d4de
- (void)didExitFence:(id)arg1;	// IMP=0x001000000017d39d
- (id)initWithPedestrianFenceClient:(void *)arg1;	// IMP=0x001000000017d360

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

