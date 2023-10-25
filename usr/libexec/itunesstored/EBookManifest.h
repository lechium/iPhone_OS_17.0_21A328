//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface EBookManifest : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSMutableDictionary *_manifest;	// 16 = 0x10
    NSString *_manifestPath;	// 24 = 0x18
}

+ (id)syncedBookManifest;	// IMP=0x0040000000121ca0
+ (id)sharedPurchasedBookManifest;	// IMP=0x0010000000121c16
+ (id)purchasedBookManifest;	// IMP=0x0010000000121b8e
- (id)_manifest;	// IMP=0x0020000000122da4
- (void)_invalidateAfterExternalChange;	// IMP=0x0010000000122bd1
- (id)_entries;	// IMP=0x0010000000122b6f
- (void)synchronizeData;	// IMP=0x0010000000122887
- (void)removeManifestEntryWithDownloadPermalink:(id)arg1;	// IMP=0x0010000000122630
- (void)removeManifestEntryWithStoreItemID:(id)arg1;	// IMP=0x00100000001223d9
@property(readonly) NSString *manifestPath;
- (id)manifestEntriesWithProperty:(id)arg1 equalToValue:(id)arg2 limitCount:(long long)arg3;	// IMP=0x0010000000122176
- (id)bookPathForAdamID:(id)arg1 withPublicationVersion:(id)arg2;	// IMP=0x00100000001220bd
- (id)bookPathPermalink:(id)arg1;	// IMP=0x0010000000122041
- (void)addManifestEntries:(id)arg1;	// IMP=0x0010000000121dcd
- (void)addManifestEntry:(id)arg1;	// IMP=0x0010000000121d70
- (void)dealloc;	// IMP=0x0010000000121b22
- (id)initWithManifestPath:(id)arg1;	// IMP=0x0010000000121a0f
- (id)init;	// IMP=0x00100000001219fb

@end
