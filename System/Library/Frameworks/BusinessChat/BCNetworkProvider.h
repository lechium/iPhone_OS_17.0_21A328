//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURLSession;

__attribute__((visibility("hidden")))
@interface BCNetworkProvider : NSObject
{
    NSURLSession *_session;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000321e
- (void)performDataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000319c
- (id)init;	// IMP=0x00000000000030fa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

