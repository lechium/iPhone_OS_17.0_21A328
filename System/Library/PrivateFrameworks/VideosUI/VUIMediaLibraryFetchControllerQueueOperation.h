//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VUIMediaLibraryFetchControllerQueueOperation : VUIAsynchronousOperation
{
    NSArray *_fetchControllers;	// 8 = 0x8
    unsigned long long _mediaLibraryRevision;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002a2b11
@property(nonatomic) unsigned long long mediaLibraryRevision; // @synthesize mediaLibraryRevision=_mediaLibraryRevision;
@property(copy, nonatomic) NSArray *fetchControllers; // @synthesize fetchControllers=_fetchControllers;
- (void)executionDidBegin;	// IMP=0x00000000002a25f5
- (id)initWithFetchControllers:(id)arg1 mediaLibraryRevision:(unsigned long long)arg2;	// IMP=0x00000000002a2536
- (id)init;	// IMP=0x00000000002a24c7

@end

