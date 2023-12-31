//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface ICCloudContentTasteResponseCacheManager : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSString *_mediaContentTasteCacheDirectoryPath;	// 16 = 0x10
}

+ (id)sharedCloudContentTasteResponseCacheManager;	// IMP=0x00400000000b8fe3
- (void).cxx_destruct;	// IMP=0x00200000000b8756
- (id)_prepareCachedResponseFromArchiveAtPath:(id)arg1;	// IMP=0x00100000000b84be
- (id)_prepareArchiveWithContentTasteReponse:(id)arg1;	// IMP=0x00100000000b8374
- (id)_mediaContentTasteCacheFilePathForAccount:(id)arg1;	// IMP=0x00100000000b8179
- (void)removeCachedContentTasteResponseForConnectionConfiguration:(id)arg1;	// IMP=0x00100000000b80eb
- (void)removeAllCachedContentTasteResponses;	// IMP=0x00100000000b80a0
- (_Bool)setCachedContentTasteUpdateResponse:(id)arg1 forConnectionConfiguration:(id)arg2;	// IMP=0x00100000000b7f9a
- (id)getCachedContentTasteResponseForConnectionConfiguration:(id)arg1;	// IMP=0x00100000000b7e9c
- (id)_init;	// IMP=0x00100000000b7e0d
- (id)init;	// IMP=0x00100000000b7dcb

@end

