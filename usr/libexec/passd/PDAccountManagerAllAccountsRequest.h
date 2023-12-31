//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString;

@interface PDAccountManagerAllAccountsRequest : NSObject
{
    NSMutableSet *_completionHandlers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000499528
@property(readonly, copy, nonatomic) NSSet *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(readonly, copy) NSString *description;
- (void)callCompletionsWithAccounts:(id)arg1 error:(id)arg2;	// IMP=0x00100000004992db
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000049929b
- (_Bool)coalesceWithRequest:(id)arg1;	// IMP=0x001000000049911a
- (id)requestIdentifier;	// IMP=0x00100000004990dc
- (unsigned long long)requestType;	// IMP=0x00100000004990d4
- (id)init;	// IMP=0x001000000049907e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

