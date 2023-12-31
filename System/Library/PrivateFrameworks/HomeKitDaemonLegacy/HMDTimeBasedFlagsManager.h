//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDPersistentStore, HMMDateProvider, NSMutableDictionary, NSObject, NSString;
@protocol HMDTimeBasedFlagsStoring, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDTimeBasedFlagsManager : HMFObject
{
    HMDPersistentStore *_persistentStore;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    HMMDateProvider *_dateProvider;	// 24 = 0x18
    NSMutableDictionary *_flags;	// 32 = 0x20
    id <HMDTimeBasedFlagsStoring> _flagsStorage;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
}

+ (id)allowedSpecifierClasses;	// IMP=0x00100000004c17cb
- (void).cxx_destruct;	// IMP=0x00000000004c1551
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) id <HMDTimeBasedFlagsStoring> flagsStorage; // @synthesize flagsStorage=_flagsStorage;
@property(retain, nonatomic) NSMutableDictionary *flags; // @synthesize flags=_flags;
@property(retain) HMMDateProvider *dateProvider; // @synthesize dateProvider=_dateProvider;
- (id)unarchiveLegacyFlags;	// IMP=0x00000000004c0f0e
- (id)unarchiveFlags;	// IMP=0x00000000004c0cad
- (void)_save;	// IMP=0x00000000004c0bdb
- (id)_fetchAllFlags;	// IMP=0x00000000004c0b03
- (void)forceSave;	// IMP=0x00000000004c0ab6
- (void)flagChanged;	// IMP=0x00000000004c0aa4
- (id)newFlagForPeriodicity:(long long)arg1;	// IMP=0x00000000004c0a34
- (id)flagForSpecifier:(id)arg1 periodicity:(long long)arg2;	// IMP=0x00000000004c085b
- (id)flagForName:(id)arg1 homeUUID:(id)arg2 periodicity:(long long)arg3;	// IMP=0x00000000004c07f0
- (id)flagForName:(id)arg1 periodicity:(long long)arg2;	// IMP=0x00000000004c0785
- (id)initWithStorage:(id)arg1 dateProvider:(id)arg2;	// IMP=0x00000000004c0615
- (id)initWithDateProvider:(id)arg1;	// IMP=0x00000000004c0565

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

