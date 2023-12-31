//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, CNResult, NSString;

__attribute__((visibility("hidden")))
@interface CNContactStoreFetchExecutor : NSObject
{
    CNContactStore *_store;	// 8 = 0x8
    CNResult *_result;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008a6bc
@property(retain) CNResult *result; // @synthesize result=_result;
@property(readonly) CNContactStore *store; // @synthesize store=_store;
- (void)visitChangeHistoryFetchRequest:(id)arg1;	// IMP=0x000000000008a585
- (void)visitContactFetchRequest:(id)arg1;	// IMP=0x000000000008a41c
- (id)countForFetchRequest:(id)arg1;	// IMP=0x000000000008a34c
- (id)executeFetchRequest:(id)arg1;	// IMP=0x000000000008a27c
- (id)initWithContactStore:(id)arg1;	// IMP=0x000000000008a1ec
- (id)init;	// IMP=0x000000000008a1af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

