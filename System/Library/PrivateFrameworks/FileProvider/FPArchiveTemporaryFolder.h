//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface FPArchiveTemporaryFolder : NSObject
{
    NSURL *_url;	// 8 = 0x8
    _Bool _didStartAccessing;	// 16 = 0x10
    NSURL *_temporaryFolderURL;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000066e7c
- (void)dealloc;	// IMP=0x0000000000066e34
- (id)temporaryFolderURLGetError:(id *)arg1;	// IMP=0x0000000000066d57
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000066c71
- (id)init;	// IMP=0x0000000000066c5d

@end

