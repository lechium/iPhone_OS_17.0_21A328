//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKShare.h>

@interface CKShare (UI)
+ (void)ic_updateThumbnailsForObject:(id)arg1 share:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x003000000008a4b3
+ (void)ic_cacheThumbnailsForObject:(id)arg1;	// IMP=0x003000000008a49c
+ (id)ic_fallbackThumbnail;	// IMP=0x0030000000089dc1
- (void)ic_updateFromObject:(id)arg1 generateThumbnails:(_Bool)arg2;	// IMP=0x001000000008a440
- (void)ic_updateThumbnailsFromObject:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008a3d8
- (void)ic_updateFromObject:(id)arg1;	// IMP=0x0010000000089e3c
@end

