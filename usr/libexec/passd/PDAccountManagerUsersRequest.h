//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString;

@interface PDAccountManagerUsersRequest : NSObject
{
    NSMutableSet *_completionHandlers;	// 8 = 0x8
    _Bool _fromPush;	// 16 = 0x10
    NSString *_accountIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000049ae05
@property(readonly, copy, nonatomic) NSSet *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(readonly, nonatomic) _Bool fromPush; // @synthesize fromPush=_fromPush;
@property(readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, copy) NSString *description;
- (void)callCompletionsWithUsers:(id)arg1 error:(id)arg2;	// IMP=0x001000000049ab8b
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000049ab4b
- (_Bool)coalesceWithRequest:(id)arg1;	// IMP=0x001000000049a9aa
- (id)requestIdentifier;	// IMP=0x001000000049a930
- (unsigned long long)requestType;	// IMP=0x001000000049a925
- (id)initWithAccountIdentifier:(id)arg1 fromPush:(_Bool)arg2;	// IMP=0x001000000049a895

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

