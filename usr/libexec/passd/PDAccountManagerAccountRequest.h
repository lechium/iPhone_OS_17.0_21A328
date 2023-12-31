//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString;

@interface PDAccountManagerAccountRequest : NSObject
{
    NSMutableSet *_completionHandlers;	// 8 = 0x8
    _Bool _fetchExtendedAccount;	// 16 = 0x10
    NSString *_accountIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000499b09
@property(readonly, copy, nonatomic) NSSet *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic) _Bool fetchExtendedAccount; // @synthesize fetchExtendedAccount=_fetchExtendedAccount;
@property(readonly, copy) NSString *description;
- (void)callCompletionsWithAccount:(id)arg1 error:(id)arg2;	// IMP=0x001000000049985d
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000049981d
- (_Bool)coalesceWithRequest:(id)arg1;	// IMP=0x0010000000499642
- (id)requestIdentifier;	// IMP=0x00100000004995c8
- (unsigned long long)requestType;	// IMP=0x00100000004995bd
- (id)initWithAccountIdentifier:(id)arg1;	// IMP=0x0010000000499538

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

