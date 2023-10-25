//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSMutableSet, NSString, PDCandidateRelevantPass, PDCardFileManager, PDDatabaseManager;

@interface PDRelevantPassGroup : NSObject
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    PDCardFileManager *_cardFileManager;	// 16 = 0x10
    PDCandidateRelevantPass *_seedPass;	// 24 = 0x18
    NSMutableSet *_passes;	// 32 = 0x20
    NSDate *_relevantDate;	// 40 = 0x28
    NSString *_relevantText;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000111841
- (id)_dateText;	// IMP=0x00100000001116f3
- (void)_addPass:(id)arg1;	// IMP=0x001000000011169d
- (void)_addPass:(id)arg1 withRelevantText:(id)arg2;	// IMP=0x0010000000111436
- (void)addPass:(id)arg1 forBeacon:(id)arg2;	// IMP=0x00100000001113be
- (void)addPass:(id)arg1 forLocation:(id)arg2;	// IMP=0x0010000000111346
- (void)addPass:(id)arg1 forDate:(id)arg2;	// IMP=0x0010000000111238
- (id)seedPass;	// IMP=0x001000000011122a
- (id)relevantText;	// IMP=0x001000000011121c
- (id)bodyText;	// IMP=0x00100000001111b5
- (MISSING_TYPE *)titleText;	// IMP=0x001000000011119f
- (id)iconData;	// IMP=0x00100000001110bd
- (id)sortedPasses;	// IMP=0x0010000000110fcd
- (id)passes;	// IMP=0x0010000000110fbf
- (id)initWithDatabaseManager:(id)arg1 cardFileManager:(id)arg2;	// IMP=0x0010000000110f09
- (id)init;	// IMP=0x0010000000110efb

@end
