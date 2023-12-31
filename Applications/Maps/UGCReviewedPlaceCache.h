//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSQLiteDB, NSString;

@interface UGCReviewedPlaceCache : NSObject
{
    GEOSQLiteDB *_db;	// 8 = 0x8
}

+ (id)baseFilePath:(id *)arg1;	// IMP=0x0020000000343752
- (void).cxx_destruct;	// IMP=0x0020000000344bca
- (void)clearAllUserData;	// IMP=0x0010000000344b33
- (void)addOrEditReviewedPlace:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000344793
- (void)removeReviewedPlaceWithMUID:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003444c0
- (id)locallyCachedReviewedPlaceForMUID:(unsigned long long)arg1;	// IMP=0x001000000034414c
- (void)fetchReviewedPlaceForMUID:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000343c05
- (void)fetchWithMUID:(unsigned long long)arg1 andReplaceIfNeededWithNewMUID:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000034386c
- (void)_commonInitWithURL:(id)arg1;	// IMP=0x0010000000343380
- (id)initWithURL:(id)arg1;	// IMP=0x0010000000343318
- (id)init;	// IMP=0x0010000000343292

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

