//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NanoRoutePlanningSession;

@interface _NanoRoutePlanningSingleRequester : NSObject
{
    NanoRoutePlanningSession *_session;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000c54048
- (void)routePlanningSessionDidInvalidate:(id)arg1;	// IMP=0x0010000000c53f99
- (void)routePlanningSession:(id)arg1 didFailWithResponse:(id)arg2;	// IMP=0x0010000000c53f84
- (void)routePlanningSession:(id)arg1 didUpdateWithResponse:(id)arg2;	// IMP=0x0010000000c53f3d
- (void)routePlanningSession:(id)arg1 didStartLoadingWithRequest:(id)arg2;	// IMP=0x0010000000c53f37
- (void)processRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000c53e7a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

