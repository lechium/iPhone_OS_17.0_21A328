//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCAccountSessionFPFS, NSMapTable, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRCDownloadTrackers : NSObject
{
    BRCAccountSessionFPFS *_session;	// 8 = 0x8
    NSMutableDictionary *_trackersByFileObjectID;	// 16 = 0x10
    NSMapTable *_fileObjectIDsByTracker;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000d9d1
@property(readonly, nonatomic) __weak BRCAccountSessionFPFS *session; // @synthesize session=_session;
- (void)document:(id)arg1 didCompleteDownloadEtagIfLoser:(id)arg2 withError:(id)arg3;	// IMP=0x000000000000d61b
- (void)removeDownloadTracker:(id)arg1;	// IMP=0x000000000000d2a8
- (void)addDownloadTracker:(id)arg1 forFileObjectID:(id)arg2 withEtagIfLoser:(id)arg3;	// IMP=0x000000000000cfdb
- (id)trackedFileObjectIDs;	// IMP=0x000000000000cf77
- (id)initWithSession:(id)arg1;	// IMP=0x000000000000cf13

@end

