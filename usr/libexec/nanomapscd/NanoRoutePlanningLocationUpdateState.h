//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SingleLocationUpdate;

@interface NanoRoutePlanningLocationUpdateState
{
    SingleLocationUpdate *_locationUpdater;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000010ce9
- (void)stop;	// IMP=0x0010000000010cb1
- (void)_handleLocation:(id)arg1 error:(id)arg2;	// IMP=0x0010000000010a35
- (void)start;	// IMP=0x00100000000106dd
- (id)initWithStateManager:(id)arg1 isolationQueue:(id)arg2;	// IMP=0x0010000000010680

@end

