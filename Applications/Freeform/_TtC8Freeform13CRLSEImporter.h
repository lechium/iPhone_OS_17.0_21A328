//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSOperationQueue, NSURL;

@interface _TtC8Freeform13CRLSEImporter : NSObject
{
    MISSING_TYPE *boardLibrary;	// 8 = 0x8
    MISSING_TYPE *importFailureURL;	// 1651076143 = 0x62696c2f
    MISSING_TYPE *librarySnapshotURL;	// 1110338917 = 0x422e6d65
    MISSING_TYPE *pendingBoardsURL;	// 25193 = 0x6269
    MISSING_TYPE *presentedItemURL;	// 12 = 0xc
    MISSING_TYPE *presentedItemOperationQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0040000000a30e30
- (id)init;	// IMP=0x0010000000a30dd0
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;	// IMP=0x0010000000a30ce0
@property(nonatomic, retain) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue;
@property(nonatomic, copy) NSURL *presentedItemURL;
- (void)exportLibrarySnapshot;	// IMP=0x0010000000a2b5e0

@end

