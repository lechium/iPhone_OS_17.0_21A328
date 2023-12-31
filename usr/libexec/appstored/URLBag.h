//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSProcessInfo, AMSSnapshotBag, NSDate, NSString;
@protocol AMSBagProtocol;

@interface URLBag : NSObject
{
    id <AMSBagProtocol> _bag;	// 8 = 0x8
    id _snapshotBagChangedObserver;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    AMSSnapshotBag *_locked_snapshotBag;	// 32 = 0x20
    _Bool;	// 40 = 0x28
    NSDate *expirationDate;	// 48 = 0x30
    NSString *profile;	// 56 = 0x38
    NSString *profileVersion;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000001721a3
@property(readonly, nonatomic, getter=isExpired) _Bool expired; // @synthesize expired;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate;
- (id)URLForKey:(id)arg1 account:(id)arg2;	// IMP=0x00100000001720cd
- (id)URLForKey:(id)arg1;	// IMP=0x00100000001720b7
- (id)stringForKey:(id)arg1;	// IMP=0x00100000001720a1
- (id)integerForKey:(id)arg1;	// IMP=0x001000000017208b
- (id)doubleForKey:(id)arg1;	// IMP=0x0010000000172075
- (id)dictionaryForKey:(id)arg1;	// IMP=0x001000000017205f
- (id)boolForKey:(id)arg1;	// IMP=0x0010000000172049
- (id)arrayForKey:(id)arg1;	// IMP=0x0010000000172033
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000017201d
@property(readonly, copy, nonatomic) NSString *profileVersion; // @synthesize profileVersion;
@property(readonly, copy, nonatomic) NSString *profile; // @synthesize profile;
- (void)dealloc;	// IMP=0x00100000001703d8
- (id)init;	// IMP=0x00100000001703cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property(readonly) Class superclass;

@end

