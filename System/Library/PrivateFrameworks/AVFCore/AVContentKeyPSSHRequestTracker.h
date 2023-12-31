//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVContentKeyPSSHRequestTracker : NSObject
{
    long long _totalExpectedRequestCount;	// 8 = 0x8
    NSMutableArray *_requests;	// 16 = 0x10
}

- (void)dealloc;	// IMP=0x000000000015fb9c
- (id)requests;	// IMP=0x000000000015fb85
- (_Bool)haveAllRequestsBeenReceived;	// IMP=0x000000000015fb5d
- (void)addRequest:(id)arg1;	// IMP=0x000000000015fb47
- (id)initWithRequestCount:(long long)arg1;	// IMP=0x000000000015faf0

@end

